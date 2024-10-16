/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 7
// Problema planteado:Escribe un programa que cuente la frecuencia de cada carácter en una
cadena.
// Entrada: "hola"
// Salida:
// h: 1
// o: 1
// l: 1
// a: 1
*/
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> contarFrecuencia(const string& frase) 
{
    map<char, int> frecuencia;
    for (char c : frase)
    {
        frecuencia[c]++;
    }
    return frecuencia;
}

int main()
{
    string frase;
    
    cout << "Ingresa una frase: ";
    getline(cin, frase);
    
    map<char, int> frecuencia = contarFrecuencia(frase);
    
    for (const auto& par : frecuencia)
    {
        cout << par.first << ": " << par.second << endl;
    }

    return 0;
}
