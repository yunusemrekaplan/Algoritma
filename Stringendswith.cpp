#include<iostream>
#include<string>

bool solution(std::string const &str, std::string const &ending) {
    int i;
    for(i=0; i<100; i++) {
        if(ending[i] == '\0') break;
    }
    int m = i;
    for(i=0; i<100; i++) {
        if(str[i] == '\0') break;
    }
    int n = i;
    for(; m>=0; m--) {
        if(str[n] != ending[m]) {
            return false;
        }
        n--;
    }

    return true;
}
