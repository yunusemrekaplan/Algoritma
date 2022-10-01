#include<iostream>

using namespace std;

string timeInWords(int h, int m) {
    string hour[12] = {"one", "two", "three", "four", "five", "six", "seven","eight", "nine", "ten", "eleven", "twelve"};
    
    string m1[31] = {hour[h-1]+" o' clock", "one", "two", "three", "four", "five",  
                        "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
                        "thirteen", "fourteen", "quarter", "sixteen", "seventeen",
                        "eighteen","nineteen","twenty","twenty one", "twenty two",
                        "twenty three","twenty four","twenty five", "twenty six",
                        "twenty seven", "twenty eight","twenty nine", "half"};
    
    string m2[29] = {"twenty nine", "twenty eight", "twenty seven", "twenty six",
                        "twenty five", "twenty four", "twenty there", "twenty two",
                        "twenty one","twenty", "nineteen", "eighteen", "seventeen",
                        "sixteen", "quarter", "fourteen", "thirteen", "twelve",
                        "eleven", "ten", "nine", "eight", "seven", "six", "five", 
                        "four", "three", "two", "one"};
    if(m == 00) return m1[m];
    else if(m < 10) return m1[m] + " minute past " + hour[h-1];
    else if(m < 15) return m1[m] + " minutes past " + hour[h-1];
    else if(m == 15) return m1[m] + " past " + hour[h-1];
    else if(m < 30) return m1[m] + " minutes past " + hour[h-1];
    else if(m == 30) return m1[m] + " past " + hour[h-1];
    else if(m < 45) return m2[m-31] + " minutes to " + hour[h];
    else if(m == 45) return m2[m-31] + " to " + hour[h];
    else if(m < 60) return m2[m-31] + " minutes to " + hour[h];
        
    return "";
}