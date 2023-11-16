#include <iostream>
#include <string>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }

    int resta(int a, int b) {
        return a - b;
    }
}

int main() {
    int num1, num2;
    std::string text;

    std::cout << "Introduce el primer numero: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo numero: ";
    std::cin >> num2;

    std::cout << "La suma de los numeros es: " << Matematicas::suma(num1, num2) << std::endl;
    std::cout << "La resta de los numeros es: " << Matematicas::resta(num1, num2) << std::endl;

    std::cout << "Ingresa un texto: ";
    std::cin >> text;
    std::cout << "El número ingresado es: " << num1 << "\nEl texto ingresado es: " << text << std::endl;

    return 0;
}