#include <iostream>

#include "include/adapter/Adapter.hpp"

void clientCode(const Target* target);

int main()
{
    std::cout << "Client: I can work just find with the Target objects:\n";
    Target* target = new Target;
    clientCode(target);
    std::cout << std::endl << std::endl;
    Adaptee* adaptee = new Adaptee;
    std::cout << "Client: The Adaptee class has a weird interface. See, I don't understand it:\n";
    std::cout << "Adaptee: " << adaptee->specificRequest();
    std::cout << std::endl << std::endl;
    std::cout << "Client: But I can work with it via the Adapter:\n";
    Adapter* adapter = new Adapter(adaptee);
    clientCode(adapter);

    delete target;
    delete adaptee;
    delete adapter;
}

void clientCode(const Target* target)
{
    std::cout << target->request();
}