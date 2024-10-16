/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 14
// Problema planteado:Escribe un programa que encuentre y muestre la palabra más larga en una
oración. Si hay múltiples palabras con la misma longitud máxima, muestra
la primera que aparece.
// Entrada: "El desarrollo de software es una actividad compleja"
// Salida: "desarrollo"
*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string encontrarPalabraMasLarga(const string& frase) 
{
    istringstream iss(frase);
    string palabra, palabraMasLarga;

    while (iss >> palabra) 
    {
        if (palabra.length() > palabraMasLarga.length()) 
        {
            palabraMasLarga = palabra;
        }
    }
    return palabraMasLarga;
}

int main() 
{
    string frase;

    cout << "Ingresa una frase ";
    getline(cin, frase);
    
    cout << "Palabra más larga " << encontrarPalabraMasLarga(frase) << endl;

    return 0;
}
