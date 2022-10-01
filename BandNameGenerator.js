function bandNameGenerator(str) {
    var n = str.length;
    function birlestir(strng) {
      let res = strng[0].toUpperCase();
      for(var i=1; i<strng.length; i++) {
        res += strng[i];
      }
      for(var i=1; i<strng.length; i++) {
        res += strng[i];
      }
      return res;
    }
    function the(strng) {
      let res = "The ";
      res += strng[0].toUpperCase();
      for(var i=1; i<strng.length; i++) {
        res += strng[i];
      }
      return res;
    }
    if(str[0] == str[n-1]) {
      return birlestir(str);
    }
    else {
      return the(str);
    }
  }