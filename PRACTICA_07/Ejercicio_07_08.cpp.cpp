/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 8
// Problema planteado:Escribe un programa que alterne entre mayúsculas y minúsculas en una
cadena.
// Entrada: "alternar"
// Salida: "AlTeRnAr"
*/
#include <iostream>
#include <string>

using namespace std;

string alternarMayusculas(const string& frase)
{
    string resultado = frase;
    for (size_t i = 0; i < frase.length(); i++) 
    {
        if (i % 2 == 0) {
            resultado[i] = toupper(frase[i]);
        } else {
            resultado[i] = tolower(frase[i]);
        }
    }
    return resultado;
}

int main() 
{
    string frase;
    
    cout << "Ingresa una frase: ";
    getline(cin, frase);
    
    cout << "Frase alternada: " << alternarMayusculas(frase) << endl;

    return 0;
}
