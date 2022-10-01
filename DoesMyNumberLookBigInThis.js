function narcissistic(value) {
    var n = 0;
      var x = value;
      var sum = 0;
      while(x > 0) {
        x = Math.floor(x / 10);
        n = n + 1;
      }
      x = value;
      var temp = 0;
      for(var i=0; i<n; i++) {
        temp = x % 10;
        var kup = 1;
        for(var j=0; j<n; j++) {
          kup *= temp;   
        }
        sum += kup;
        x = Math.floor(x / 10);
      }
      if(sum == value) return true;
        else return false;
}