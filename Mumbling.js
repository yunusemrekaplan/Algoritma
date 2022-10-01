function accum(s) {
    var r = "";
    for(var i=0; i<s.length; i++) {
      r += s[i].toUpperCase();
      for(var j=0; j<i; j++) {
        r += s[i].toLowerCase();
      }
      if(i != s.length - 1) r += "-";
    }
    return r;
  }