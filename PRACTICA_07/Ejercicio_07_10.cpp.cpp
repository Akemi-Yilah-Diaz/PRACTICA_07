/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 10
// Problema planteado:Escribe un programa que, dado el formato comprimido (del ejercicio 15),
expanda la cadena al formato original.
// Entrada: "a3b2c4"
// Salida: "aaabbcccc"
*/
#include <iostream>
#include <string>

using namespace std;

string expandirCadena(const string& comprimida) {
    string resultado;
    for (size_t i = 0; i < comprimida.length(); i++) {
        char letra = comprimida[i];
        string numero;
        
        while (isdigit(comprimida[i + 1]))
        {
            numero += comprimida[++i];
        }

        int cantidad = stoi(numero);
        resultado.append(cantidad, letra);
    }

    return resultado;
}

int main() 
{
    string comprimida;
    
    cout << "Ingresa la cadena comprimida";
    getline(cin, comprimida);
    
    cout << "Cadena expandida" << expandirCadena(comprimida) << endl;

    return 0;
}
