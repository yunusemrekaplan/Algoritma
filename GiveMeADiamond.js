function diamond(n){
    if(n % 2 == 0 || n <= 0) return null;
    var bosluk = Math.floor(n / 2);
    var yildiz = 1, satir = Math.floor(n / 2);
    var str = "";
    for(var i=0; i<satir; i++) {
      for(var j=0; j<bosluk; j++) {
        str += " ";
      }
      for(var j=0; j<yildiz; j++) {
        str += "*";
      }
      str += "\n";
      bosluk--;
      yildiz += 2;
    }
    for(var i=0; i<n; i++) {
      str += "*";
    }
    str += "\n";
    bosluk = 1;
    yildiz = n - 2;
    for(var i=0; i<satir; i++) {
      for(var j=0; j<bosluk; j++) {
        str += " ";
      }
      for(var j=0; j<yildiz; j++) {
        str += "*";
      }
      str += "\n";
      bosluk++;
      yildiz -= 2;
    }
    return str;
  }