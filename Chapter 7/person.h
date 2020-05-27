#include <string>
#include <iostream>

class Person {
    friend std::istream &read(std::istream &is, Person &person);
    std::ostream &print(std::ostream &os, const Person &person);
public:
    std::string name;
    std::string address;

    std::string get_name() const{return name;}
    std::string get_address() const{return address;}

};

std::istream &read(std::istream &is, Person &person)
{
    return is >> person.name >> person.address;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    return os << person.name << " " << person.address;
}