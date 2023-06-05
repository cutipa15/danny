#include <iostream>
#include <vector>
using namespace std;

// Declaración de la estructura Libro
struct Libro {
    string titulo;
    string autor;
};

int main() {
    // Declaración del vector de libros
    vector<Libro> libros;
    int contador = 0; // Contador para llevar la cuenta de los libros almacenados

    // Ciclo para ingresar los libros
    while (contador < 8) {
        Libro nuevoLibro;
        cout << "*****Libro(" << contador+1 << " de 8)***** " << endl << "Titulo: " ;
        cin >> nuevoLibro.titulo;
        cout << "Autor: ";
        cin >> nuevoLibro.autor;
        libros.push_back(nuevoLibro); // Agregar el nuevo libro al vector
        contador++;
    }

    // Visualizar los libros almacenados
    cout << "Los libros almacenados son:" << endl;
    for (int i = 0; i < contador; i++) {
        cout << "Título: " << libros[i].titulo << endl;
        cout << "Autor: " << libros[i].autor << endl;
    }

    return 0;
}