#include <stdio.h>
#include <iostream>
#include <vector>
#include <iterator>

using Iter = std::vector<int>::const_iterator;

void printv(Iter begin, Iter end){

    std::cout << *begin << std::endl;
    begin++;
    if(begin!=end){
        printv(begin,end);
    }

}

int main(){


    std::vector<int> v = {1,2,3,4,5,6,7,8,9};
    auto it = std::cbegin(v);
    auto end = std::cend(v);
    printv(it,end);

}