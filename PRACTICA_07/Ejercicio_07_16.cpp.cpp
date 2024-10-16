/* 
// Materia: Programación I, Paralelo 1
// Autor: Akemi Yilah Machicado Diaz
// Fecha creación: 15/10/2024
// Número de ejercicio: 16
// Problema planteado:Escribe un programa que valide si una expresión matemática tiene los
paréntesis balanceados correctamente. La expresión puede contener los
siguientes tipos de paréntesis: (), {}, [].
"3 * (2 + (7 - 5))" CORRECTO
"3 * (2 + [7 - 5)" NO BALANCEADOS
*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool sonBalanceados(const string& expresion) 
{
    stack<char> pila;
    
    for (char c : expresion) 
    {
        if (c == '(' || c == '{' || c == '[') 
        {
            pila.push(c);
        } else if (c == ')' || c == '}' || c == ']') 
        {
            if (pila.empty()) return false;
            char top = pila.top();
            if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '[')) 
                {
                return false;
            }
            pila.pop();
        }
    }
    
    return pila.empty();
}

int main() 
{
    string expresion;

    cout << "Ingresa una expresion matematica";
    getline(cin, expresion);
    
    if (sonBalanceados(expresion)) 
    {
        cout << "CORRECTO" << endl;
    } else {
        cout << "NO BALANCEADOS" << endl;
    }

    return 0;
}
