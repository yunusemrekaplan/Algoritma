function countSmileys(arr) {
    var sim = new Array(":)", ":-)", ":~)", ";)", ";-)", ";~)", ":D", ":-D", ":~D", ";D", ";-D", ";~D");
    var count = 0;
    //var control = false;
    for(var i=0; i<arr.length; i++) {
      for(var j=0; j<sim.length; j++) {
        if(arr[i] == sim[j]) {
          count++;
          break;
        }
      }
    }
    return count;
  }