function validParentheses(parens) {
    if(parens.length == 1) return false;
    var index;
    var i = 0;
    parens = parens.split("");
    while(i < parens.length) {
        if(parens[i] == "(") {
            index = parens.indexOf(")");
            if(index != -1) {
                // parens[index] = "a";
                // parens[i] = "a";
                parens.splice(index, 1);
                parens.splice(i, 1);
            }
            else return false;
        }
        else return false;
    }
    return true;
}