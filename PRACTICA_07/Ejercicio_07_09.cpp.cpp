/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 9
// Problema planteado:Escribe un programa que "comprima" una cadena de caracteres, es decir,
que agrupe caracteres consecutivos y cuente su frecuencia.
// Entrada: "aaabbcccc"
// Salida: "a3b2c4"
*/
#include <iostream>
#include <string>

using namespace std;

string comprimirCadena(const string& frase) 
{
    string resultado;
    int contador = 1;

    for (size_t i = 1; i <= frase.length(); i++) {
        if (i < frase.length() && frase[i] == frase[i - 1])
        {
            contador++;
        } else {
            resultado += frase[i - 1];
            resultado += to_string(contador);
            contador = 1;
        }
    }

    return resultado;
}

int main() {
    string frase;
    
    cout << "Ingresa una frase ";
    getline(cin, frase);
    
    cout << "Frase comprimida: " << comprimirCadena(frase) << endl;

    return 0;
}
