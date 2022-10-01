function dontGiveMeFive(start, end)
{
  console.log("start: "+start+"end: "+end);
  var count = 0;
  var control = true;
  for(var i=start; i<=end; i++) {
    if(i % 10 != 5 && i % 10 != -5) {
      var temp = i;
      control = false; 
      while(temp > 0) {
        temp = Math.floor(temp / 10);
        if(temp % 10 == 5 || temp % 10 == -5) control = true;
      }
    }
    if(control == false) ++count;
    control = true;
  }
  return count;
}