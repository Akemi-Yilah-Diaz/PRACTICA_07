/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 11
// Problema planteado:. Escribe un programa que elimine todos los dígitos de una cadena.
// Entrada: "abc123def456"
// Salida: "abcdef"
*/
#include <iostream>
#include <string>

using namespace std;

string eliminarNumeros(const string& frase) 
{
    string resultado;
    for (char c : frase)
    {
        if (!isdigit(c)) 
        {
            resultado += c;
        }
    }
    return resultado;
}

int main() 
{
    string frase;
    
    cout << "Ingresa una frase ";
    getline(cin, frase);
    
    cout << "Frase sin numeros " << eliminarNumeros(frase) << endl;

    return 0;
}
