#include <iostream>
#include <string>

// Estructura para almacenar los datos de un producto
struct Producto {
    std::string nombre;
    double precio;
    int cantidad;
};

// Funcion para calcular el total a pagar por la compra de un cliente
double calcularTotal(Producto productos[], int numProductos, double subtotal) {
    const double PORCENTAJE_DESCUENTO = 0.2;
    double descuento = 0.0;
    double total = subtotal;

    if (subtotal > 1000) {
        descuento = subtotal * PORCENTAJE_DESCUENTO;
        total -= descuento;
    }

    std::cout << "Descuento aplicado: " << descuento << std::endl;
    std::cout << "Total a pagar: " << total << std::endl;

    return total;
}

int main() {
    std::string nombreCliente;
    int numProductos;

    // Solicitar el nombre del cliente
    std::cout << "Ingrese el nombre del cliente: ";
    std::getline(std::cin, nombreCliente);

    // Solicitar la cantidad de productos
    std::cout << "Ingrese la cantidad de productos: ";
    std::cin >> numProductos;

    // Crear un arreglo dinamico de productos
    Producto* productos = new Producto[numProductos];

    // Solicitar los datos de cada producto
    for (int i = 0; i < numProductos; ++i) {
        std::cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        std::getline(std::cin >> std::ws, productos[i].nombre);
        std::cout << "Ingrese el precio del producto " << i + 1 << ": ";
        std::cin >> productos[i].precio;
        std::cout << "Ingrese la cantidad del producto " << i + 1 << ": ";
        std::cin >> productos[i].cantidad;
    }

    // Calcular el subtotal de la compra
    double subtotal = 0.0;

    for (int i = 0; i < numProductos; ++i) {
        subtotal += productos[i].precio * productos[i].cantidad;
    }

    std::cout << "Subtotal de la compra: " << subtotal << std::endl;

    // Calcular y mostrar el total a pagar por la compra
    double total = calcularTotal(productos, numProductos, subtotal);

   
    delete[] productos;

    return 0;
}