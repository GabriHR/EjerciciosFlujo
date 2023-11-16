#include <iostream>
#include <sstream>

int main() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);

    std::stringstream ss;
    ss << text;
    std::string text_from_ss;
    ss >> text_from_ss;
    std::cout << "El texto desde el flujo de cadena es: " << text_from_ss << std::endl;
    return 0;
}