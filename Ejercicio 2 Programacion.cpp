#include <iostream>
#include <random>

// Funcion para generar un numero entero aleatorio dentro de un rango
int generarNumeroAleatorio(int minimo, int maximo) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(minimo, maximo);
    return dis(gen);
}

int main() {
    int cantidadNumeros;
    int rangoMinimo, rangoMaximo;

    // Solicitar la cantidad de numeros y los rangos al usuario
    std::cout << "Ingrese la cantidad de numeros a generar: ";
    std::cin >> cantidadNumeros;
    std::cout << "Ingrese el rango minimo: ";
    std::cin >> rangoMinimo;
    std::cout << "Ingrese el rango maximo: ";
    std::cin >> rangoMaximo;

    // Generar y mostrar los números aleatorios
    std::cout << "Numeros generados:" << std::endl;
    for (int i = 0; i < cantidadNumeros; ++i) {
        int numeroAleatorio = generarNumeroAleatorio(rangoMinimo, rangoMaximo);
        std::cout << numeroAleatorio << std::endl;
    }

    return 0;
}