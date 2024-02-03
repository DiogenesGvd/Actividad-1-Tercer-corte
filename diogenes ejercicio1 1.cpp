#include <iostream>
#include <cmath>

// Funcion para calcular el area de un circulo
double calcular_area_circulo() {
    double radio;
    std::cout << "Introduce el radio del circulo: ";
    std::cin >> radio;
    double area = M_PI * pow(radio, 2);
    return area;
}

// Funcion para calcular el area de un triangulo
double calcular_area_triangulo() {
    double base, altura;
    std::cout << "Introduce la base del triangulo: ";
    std::cin >> base;
    std::cout << "Introduce la altura del triangulo: ";
    std::cin >> altura;
    double area = (base * altura) / 2;
    return area;
}

// Funcion para calcular el area de un cuadrado
double calcular_area_cuadrado() {
    double lado;
    std::cout << "Introduce el lado del cuadrado: ";
    std::cin >> lado;
    double area = pow(lado, 2);
    return area;
}

int main() {
    std::string figura;
    std::cout << "Que figura quieres calcular el area? (circulo, triangulo, cuadrado): ";
    std::cin >> figura;
    
    double area = 0.0;  // Variable para almacenar el area calculada
    
    // Determinar la figura seleccionada y calcular el area correspondiente
    if (figura == "circulo") {
        area = calcular_area_circulo();
    } else if (figura == "triangulo") {
        area = calcular_area_triangulo();
    } else if (figura == "cuadrado") {
        area = calcular_area_cuadrado();
    } else {
        std::cout << "Figura no valida." << std::endl;
        return 0;
        
    }
    
    // Mostrar el resultado del calculo del area
    std::cout << "El area del " << figura << " es: " << area << std::endl;
    
    return 0;
    
}