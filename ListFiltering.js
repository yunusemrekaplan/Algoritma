function filter_list(l) {
    var n = l.length;
    var res = new Array();
    for(var i=0; i<n; i++) {
      if(l[i] >= 0 && typeof(l[i]) != "string") res.push(l[i]); 
    }
    return res;
  }