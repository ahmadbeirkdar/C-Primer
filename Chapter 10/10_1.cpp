#include <vector>
#include <algorithm>
#include <list>
#include <string>
#include <iostream>

int main(){

    std::vector<int> v = {1,2,3,4,5,6,21,3,132,32,32,32,23,23,43,5,32,12,42,1,34,43,3,4,12,32,12,4,12,2,2,3};
    std::list<std::string> l = {"asd", "asd", "a", "asd"};
    std::cout << std::count(v.begin(),v.end(), 3) << std::endl;
    std::cout << std::count(l.begin(),l.end(), "asd") << std::endl;

}