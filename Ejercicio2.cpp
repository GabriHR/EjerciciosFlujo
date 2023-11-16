#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura) {
        return 0.5 * base * altura;
    }
    const double PI = 3.14159265358979323846;

    double calcularAreaCirculo(double radio) {
        return PI * std::pow(radio, 2);
    }
}

int main() {
    double base = 5.0, altura = 10.0, radio = 3.0;

    std::cout << "El área del triángulo es: " << Geometria::calcularAreaTriangulo(base, altura) << std::endl;
    std::cout << "El área del círculo es: " << Geometria::calcularAreaCirculo(radio) << std::endl;

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