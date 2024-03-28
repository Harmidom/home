#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int suma_kwadratow = 0;

    cout << "Wpisz pierwsza dlugosc boku a (calkowita i większa od zera): " << endl;
    cin >> a;
    cout << "Wpisz druga dlugosc boku b (calkowita i większa od zera):" << endl;
    cin >> b;

    while (a != 0)
    {
        if(a < b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        cout << "a=" << a << ", b=" << b << endl;

        int liczba_kwadratow = a / b;
        cout << "Mamy " << liczba_kwadratow << " o wymiarach " << b << "x" << b  << endl;

        suma_kwadratow += liczba_kwadratow;
        a = a % b;
    }

    cout << "znaleziono: " << suma_kwadratow << endl;

    return 0;
}
