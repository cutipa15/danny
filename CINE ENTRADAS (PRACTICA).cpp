#include <iostream>
#include <string>

int main() {
    int ubicacion, cantidad_entradas;
    float precio_entrada, total_pagar;
    std::string bebida;

    // Mostrar opciones de ubicación y precios
    std::cout << "Opciones de ubicación y precios:" << std::endl;
    std::cout << "1. GENERAL - $50.00" << std::endl;
    std::cout << "2. PREFERENCIAL - $80.00" << std::endl;
    std::cout << "3. PLATEA - $120.00" << std::endl;
    std::cout << "4. VIP - $160.00" << std::endl;

    // Solicitar ubicación y cantidad de entradas
    std::cout << "INGRESA EL NUMERO DE UBICACION QUE DESEE: ";
    std::cin >> ubicacion;
    std::cout << "INGRESE LA CATIDAD DE ENTRADAS: ";
    std::cin >> cantidad_entradas;

    // Asignar el precio de la entrada según la ubicación seleccionada
    switch (ubicacion) {
        case 1:
            precio_entrada = 50.00;
            break;
        case 2:
            precio_entrada = 80.00;
            break;
        case 3:
            precio_entrada = 120.00;
            break;
        case 4:
            precio_entrada = 160.00;
            break;
        default:
            std::cout << "UBICACION IMVALIDA." << std::endl;
            return 0;
    }

    // Calcular el total a pagar por las entradas
    total_pagar = precio_entrada * cantidad_entradas;

    // Si la ubicación es VIP, ofrecer la opción de elegir una bebida
    if (ubicacion == 4) {
        std::cout << "OPCIONES DE VEVIDA: GASEOSA, CERVEZA, AGUA" << std::endl;
        std::cout << "ELIJA UNA BEVIDA: ";
        std::cin >> bebida;
    }

    // Mostrar el total a pagar
    std::cout << "TOTAL DE PAGAR: $" << total_pagar << std::endl;

    // Si la ubicación es VIP, mostrar la elección de bebida
    if (ubicacion == 4) {
        std::cout << "BEBIDA SELECCIONADA: " << bebida << std::endl;
    }

    return 0;
}