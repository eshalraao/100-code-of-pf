// namespace


#include <iostream>

// Define a namespace called 'MyNamespace'
namespace MyNamespace {
    void displayMessage() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

int main() {
    // Access function from MyNamespace
    MyNamespace::displayMessage();

    return 0;
}