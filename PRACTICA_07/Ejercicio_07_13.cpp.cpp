/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 13
// Problema planteado:Escribe un programa que invierta el orden de las palabras en una oración
sin cambiar el orden de los caracteres dentro de cada palabra.
// Entrada: "Hola mundo desde C++"
// Salida: "C++ desde mundo Hola"
*/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void invertirOrdenPalabras(const string& frase) 
{
    istringstream iss(frase);
    vector<string> palabras;
    string palabra;

    while (iss >> palabra) 
    {
        palabras.push_back(palabra);
    }

    for (int i = palabras.size() - 1; i >= 0; i--) 
    {
        cout << palabras[i] << (i > 0 ? " " : "");
    }
    cout << endl;
}

int main()
{
    string frase;

    cout << "Ingresa una frase: ";
    getline(cin, frase);
    
    invertirOrdenPalabras(frase);

    return 0;
}
