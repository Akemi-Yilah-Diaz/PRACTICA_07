/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 12
// Problema planteado:. . Escribe un programa que divida una cadena en tokens (subcadenas)
separadas por un delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas
*/
#include <iostream>
#include <string>

using namespace std;

void dividirEnTokens(const string& frase, char delimitador) {
    string token;
    for (char c : frase) {
        if (c == delimitador) {
            cout << token << endl;
            token.clear();
        } else {
            token += c;
        }
    }
    cout << token << endl;
}

int main() {
    string frase;
    char delimitador;
    
    cout << "Ingresa una frase: ";
    getline(cin, frase);
    
    cout << "Ingresa el delimitador: ";
    cin >> delimitador;
    
    dividirEnTokens(frase, delimitador);

    return 0;
}
