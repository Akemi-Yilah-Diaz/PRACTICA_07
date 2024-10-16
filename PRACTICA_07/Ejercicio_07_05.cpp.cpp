/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 5
// Problema planteado:Escribe un programa que cuente cuántas palabras hay en una oración.
Considera que las palabras están separadas por un espacio.
// Entrada: "Este es un ejemplo de conteo de palabras"
// Salida: "Numero de palabras: 7"
*/
#include <iostream>
#include <string>

using namespace std;

int contarPalabras(const string& frase)
{
    int contador = 0;
    bool enPalabra = false;
    for (char c : frase) {
        if (c != ' ' && !enPalabra) 
        {
            contador++;
            enPalabra = true;
        } else if (c == ' ') {
            enPalabra = false;
        }
    }
    return contador;
}

int main()
{
    string frase;
    
    cout << "Ingresa una frase: ";
    getline(cin, frase);
    
    cout << "Numero de palabras: " << contarPalabras(frase) << endl;

    return 0;
}
