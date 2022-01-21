// P3Lab1_FranciscoVilleda.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int primo(int n);

int main()
{
    int num;
    int suma = 4;

    while (true) {
        cout << "Ingrese un numero menor a 100: ";
        cin >> num;
        if (num < 2 || num >= 100) 
            cout << "El numero debe ser al menos 2 y menor a 100" << endl;
        else 
            break;
    }

    while (suma <= num) {
        for (int n = 2; n <= suma - 2; n++) {
            if (primo(n) && primo(suma - n)) {
                cout << n << " + " << suma - n << " = " << suma << endl;
                break;
            }
        }
        suma += 2;
    }

}

int primo(int n) {
    //Funcion que determina si n es un primo
    int cont = 2;
    while (cont < n) {
        if (!(n % cont))
            return 0;
        else 
            cont++;
    }
    return n;
}



