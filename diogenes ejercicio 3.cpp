#include <iostream>

// Función para simular el proceso de subir a un piso en un ascensor
void subirAPiso(int pisoDeseado) {
    std::cout << "Ascensor en movimiento..." << std::endl;

    for (int pisoActual = 0; pisoActual <= pisoDeseado; ++pisoActual) {
        std::cout << "Piso actual: " << pisoActual << std::endl;
    }

    std::cout << "Has llegado al piso " << std::endl;
}

int main() {
    int pisoDeseado;

    // Solicitar el numero de piso al usuario
    std::cout << "Ingrese el numero de piso al que desea subir: ";
    std::cin >> pisoDeseado;

    // Llamar a la funcion para simular el proceso de subir a un piso en el ascensor
    subirAPiso(pisoDeseado);

    return 0;
}