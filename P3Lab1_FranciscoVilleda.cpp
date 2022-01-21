// P3Lab1_FranciscoVilleda.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int primo(int n);

int main()
{
    int num;
    while (true) {
        cout << "Ingrese un numero menor a 100: ";
        cin >> num;
        if (num < 2 || num > 100) cout << "El numero debe ser menor a 100" << endl;
        else break;
    }

    int cont = 4;

    while (cont <= num) {
        for (int n = 2; n <= cont - 2; n++) {
            if (primo(n) && primo(cont - n)) {
                cout << n << " + " << cont - n << " = " << cont << endl;
                break;
            }
        }
        cont += 2;
    }

}

int primo(int n) {
    int cont = 2;
    while (cont < n) {
        if (!(n % cont))
            return 0;
        else 
            cont++;
    }
    return n;
}



