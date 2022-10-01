function cakes(recipe, available) {
    var n = recipe.length;
    var arr = new Array(n);
    var j = 0;
    for(var i in recipe) {
        var temp = i
        if(available[temp] != undefined) {
            arr[j] = Math.floor(available[temp] / recipe[temp]);
            j++;
        }
      else return 0;
    }
    return Math.min.apply(null, arr);
}