/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 2
// Problema planteado: Escribe un programa que cuente el número de vocales 
//(a, e, i, o, u) en una
//cadena dada.
// Entrada: "Programacion"
// Salida: "Numero de vocales: 5"
*/
#include <iostream>
#include <string>

using namespace std;

int contarVocales(const string& frase) {
    int contador = 0;
    for (char c : frase) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
    }
    return contador;
}

int main() {
    string frase;
    
    cout << "Ingresa una frase ";
    getline(cin, frase);
    
    cout << "Numero de vocales " << contarVocales(frase) << endl;

    return 0;
}
