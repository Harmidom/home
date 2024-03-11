#include <iostream>
#include <stdio.h>
#include <cstdlib> 
#include <time.h>
#include <unistd.h>

using namespace std;

void find_min_and_max(int numbers[], int numbers_length, int &min, int &max)
{
    // Wychodzę, jeśli nie ma liczb w tablicy.
    if (numbers_length <= 0)
    {
        return;
    }
    // Jeśli jest jedna liczba, to min=max.
    else if (numbers_length == 1)
    {
        min = numbers[0];
        max = numbers[0];
    }
    else 
    {
        // Biorę 2 pierwsze liczby z tablicy.
        if (numbers[0] < numbers[1]) 
        {
            min = numbers[0];
            max = numbers[1];
        }
        else 
        {
            min = numbers[1];
            max = numbers[0];
        }
        // Dla kojenych robię porónanie w pętli.
        for (int i = 2; i < numbers_length; ++i)
        {
            if (numbers[i] < min)
            {
                min = numbers[i];
            }
            else if (numbers[i] > max)
            {
                max = numbers[i];
            }
        }
    }
}

int main()
{
    // Tablica składa się z n elementów.
    int n = 5;
    // Tworzę tablicę n-elementową.
    int numbers[n] = { -1, 7, -1, -1, -1 };
    
    // Wyświetlam liczby w tablicy, aby móc wzrokowo zweryfikować algorytm.
    for (int i = 0; i < n; i++)
    {
        // Wyświetam liczbę i dodaj koniec linii w konsoli.
        cout << numbers[i] << endl;
    }
    
    // Poszukiwana najmniejsza liczba w zbiorze liczb z tabeli.
    int min;
    // Poszukiwana największa liczba w zbiorze liczb z tabeli.
    int max;
    // Odszukuję min i max w tabeli "numbers".
    find_min_and_max(numbers, n, min, max);
    
    cout << "Wynik:" << endl;
    cout << "min: " << min << ", min: " << min << endl; 
    
    return 0;
}
