#include <iostream>
using namespace std;

int encontraRepeticao(int value, int digito)
{
    if (value == 0) {
        return 0;
    } 
    else
    {
        if (value % 10 == digito)
            return 1 + encontraRepeticao(value / 10, digito);
        else
            return encontraRepeticao(value / 10, digito);
    }
}

int main()
{
    int number, digito;

    cout << "Informe um numero natural: " << endl;
    cin >> number;

    cout << "Informe o numero que deseja verificar a ocorrencia: " << endl;
    cin >> digito;

    cout << "O digito " << digito<< " aparece " << encontraRepeticao(number, digito) << " vezes no numero: " << number  << endl;

    return 0;
}