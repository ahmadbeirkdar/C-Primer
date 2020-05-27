#include "screen.h"
#include <iostream>

int main(){
    Screen myScreen(5,5,'X');
    
    myScreen.display(std::cout);
    std::cout << "\n";
    myScreen.move(4,0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.move(3,0).set('Y');
    myScreen.display(std::cout);
    std::cout << "\n";
    return 0;
}