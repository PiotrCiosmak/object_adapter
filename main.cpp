#include <iostream>
#include "include/Adapter.hpp"

void clientCode(const std::shared_ptr<Target>& target);

int main()
{
    std::cout << "Client: I can work just find with the Target objects:" << std::endl;
    std::shared_ptr<Target> target = std::make_shared<Target>();
    clientCode(target);

    std::shared_ptr<Adaptee> adaptee = std::make_shared<Adaptee>();
    std::cout << "\n\nClient: The Adaptee class has a weird interface. See, I don't understand it:"
              << std::endl;
    std::cout << "Adaptee: " << adaptee->specificRequest() << std::endl;

    std::shared_ptr<Adapter> adapter = std::make_shared<Adapter>(adaptee);
    std::cout << "\nClient: But I can work with it via the Adapter:" << std::endl;
    clientCode(adapter);
}

void clientCode(const std::shared_ptr<Target>& target)
{
    std::cout << target->request();
}