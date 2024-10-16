/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 4
// Problema planteado:Escribe un programa que compare dos cadenas e imprima si son iguales o
diferentes, sin importar las mayúsculas o minúsculas.
// Entrada: "Hola", "hola"
// Salida: "Las cadenas son iguales"
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string convertirMinusculas(const string& frase) {
    string resultado = frase;
    transform(resultado.begin(), resultado.end(), resultado.begin(), ::tolower);
    return resultado;
}

bool compararFrases(const string& frase1, const string& frase2) {
    return convertirMinusculas(frase1) == convertirMinusculas(frase2);
}

int main() {
    string frase1, frase2;
    
    cout << "Ingresa la primera frase: ";
    getline(cin, frase1);
    
    cout << "Ingresa la segunda frase: ";
    getline(cin, frase2);
    
    if (compararFrases(frase1, frase2)) {
        cout << "Las frases son iguales" << endl;
    } else {
        cout << "Las frases son diferentes" << endl;
    }

    return 0;
}


