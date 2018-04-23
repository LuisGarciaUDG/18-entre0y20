/* programa_18 Imprimir los numeros entre el 0 y el 20
estructura: ciclica
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 24 de febrero del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    x=2;
    cout<<"\n Programa que imprime los numeros entre el 0 y el 20";
    cout<<"\n\n Estrucutra de control while\n\n";
    while (x<20)
        {
        cout<<"\n "<<x;
        x=x+2;
        }
        cout<<"\n\n Presione enter para salir...\n\n";
        system ("pause");

    return 0;
}
