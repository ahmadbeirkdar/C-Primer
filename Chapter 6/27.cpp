#include <stdio.h>
#include <iostream>

int sum(std::initializer_list<int> li){
    int sum = 0;
    for(auto i : li){
        sum += i;
    }
    return sum;

}

int main(){

    std::initializer_list<int> li = {1,2,3,4};
    std::cout << sum(li) << std::endl;
}