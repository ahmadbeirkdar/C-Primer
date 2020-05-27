#include <iostream>
#include <string>
#include <vector>
#include <list>
int main(){
    std::list<const char*> l{ "Mooophy", "pezy", "Queeuqueg" };
    std::vector<std::string> s;
    s.assign(l.begin(),l.end());



}