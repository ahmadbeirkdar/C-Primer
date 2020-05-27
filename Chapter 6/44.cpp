#include <stdio.h>
#include <string>
#include <iostream>

inline bool isShorter(std::string &a, std::string b) {return a.size() < b.size();}

int main(){
    std::string a = "dasd";
    std::string b = "saasdasd";
    std::cout <<  isShorter(a,b)<<std::endl;
    
}