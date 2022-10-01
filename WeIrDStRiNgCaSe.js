function toWeirdCase(string) {
    var arr = string.split(" ");
    var strng = "";
    for(var i=0; i<arr.length; i++) {
        var temp = arr[i];
        var str = "";
        for(var j=0; j<temp.length; j++) {
            if(j % 2 == 0) str += temp[j].toUpperCase();
            else str += temp[j].toLowerCase();
        }
        if(i != arr.length - 1) strng += str + " ";
        else strng += str;
    }
    return strng;
}