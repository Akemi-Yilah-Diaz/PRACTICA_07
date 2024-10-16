/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 3
// Problema planteado: Escribe un programa que elimine todos los espacios de una cadena.
// Entrada: "Eliminar los espacios"
// Salida: "Eliminarlosespacios"
*/
#include <iostream>
#include <string>

using namespace std;

string eliminarEspacios(const string& frase) {
    string resultado;
    for (char c : frase) {
        if (c != ' ') {
            resultado += c;
        }
    }
    return resultado;
}

int main() {
    string frase;
    
    cout << "Ingresa una frase: ";
    getline(cin, frase);
    
    cout << "Frase sin espacios: " << eliminarEspacios(frase) << endl;

    return 0;
}



