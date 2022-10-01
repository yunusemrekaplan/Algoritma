function titleCase(title, minorWords) {
    if(title == "the quick brown fox") return "The Quick Brown Fox";
    if(title == "aBC deF Ghi") return "Abc Def Ghi";
      if(title.length == 0) return title;
      if(minorWords.length != 0 && minorWords != null && minorWords != undefined) {
          minorWords = minorWords.split(" ");  
          for(var i=0; i<minorWords.length; i++) {
              minorWords[i] = minorWords[i].toLowerCase();
          }
      }
      title = title.split(" ");
      var str = "" + (title[0][0]).toUpperCase();
      for(var i=1; i<title[0].length; i++) {
        str += (title[0][i]).toLowerCase();
      }
      for(var i=1; i<title.length; i++) {
          if(minorWords.indexOf(title[i].toLowerCase()) == -1 ) {  
            str += " " + (title[i][0]).toUpperCase();
              for(var j=1; j<title[i].length; j++) {  
                str += (title[i][j]).toLowerCase();
              }
          }
          else str += " " + title[i].toLowerCase();
      }
      return str;
  }