/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 15
// Problema planteado:. Escribe un programa que valide si una cadena ingresada cumple con el
formato básico de una dirección de correo electrónico (por ejemplo,
contiene exactamente un '@' y al menos un punto '.' después del '@').
// Entrada: "usuario@example.com"
// Salida: "Correo electrónico válido"
*/
#include <iostream>
#include <string>

using namespace std;

bool validarEmail(const string& email) 
{
    size_t posicionArroba = email.find('@');
    size_t posicionPunto = email.find('.', posicionArroba);

    return posicionArroba != string::npos && 
           posicionPunto != string::npos && 
           posicionPunto > posicionArroba + 1 && 
           posicionArroba > 0 && 
           posicionArroba < email.length() - 1;
}

int main() 
{
    string email;

    cout << "Ingresa un correo electronico ";
    getline(cin, email);
    
    if (validarEmail(email)) 
    {
        cout << "Correo electronico valido" << endl;
    } else {
        cout << "Correo electronico invalido" << endl;
    }

    return 0;
}
