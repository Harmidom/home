#include <iostream>
using namespace std;


int nwd(int a, int b)
{
    while (a != b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}

int main()
{
    int a;
    int b;
    cout << "Wpisz a: ";
    cin >> a;
    cout << "Wpisz b: ";
    cin >> b;

    int c = nwd(a, b);
    cout << "Bok kwadratu: " << c << endl;
    int liczba_kwadratow = (a/c)*(b/c);
    cout << "Liczba kwadratow wynosi: " << liczba_kwadratow << endl;

    return 0;
}
