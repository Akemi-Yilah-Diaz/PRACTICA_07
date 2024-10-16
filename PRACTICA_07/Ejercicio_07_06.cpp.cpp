/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 6
// Problema planteado:Escribe un programa que determine si una cadena es un palíndromo (se lee
igual de izquierda a derecha que de derecha a izquierda).
// Entrada: "anilina"
// Salida: "Es un palindromo"
*/
#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(const string& frase)
{
    return equal(frase.begin(), frase.begin() + frase.size() / 2, frase.rbegin());
}

int main() 
{
    string frase;
    
    cout << "Ingresa una frase ";
    getline(cin, frase);
    
    cout << (esPalindromo(frase) ? "Es un palindromo" : "No es un palindromo") << endl;

    return 0;
}    