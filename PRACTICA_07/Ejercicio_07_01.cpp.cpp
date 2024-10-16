/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 1
// Problema planteado: Escribe un programa que tome una cadena de entrada y la invierta.
// Entrada: "Hola Mundo"
// Salida: "odnuM aloH"
*/
#include <iostream>
#include <string>
using namespace std;

string invertirFrase(const string& frase) 
{
    return string(frase.rbegin(), frase.rend());
}

int main() {
    string frase;
    
    cout << "Ingresa una frase: ";
    getline(cin, frase);
    
    string fraseInvertida = invertirFrase(frase);
    
    cout << "Frase invertida: " << fraseInvertida << endl;

    return 0;
}