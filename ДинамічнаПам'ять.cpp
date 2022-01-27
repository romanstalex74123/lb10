using namespace std;
#include <iostream>
#include <conio.h> 
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "rus");
    const int n = 9;
    int* mas;
    int i, k = 0;
    float s = 0; 
    mas = new int[n];
    cout << "enter mark: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> mas[i];
    }

    for (i = 0; i < n; i++)
    {
        s = s + mas[i];
        if (mas[i] == 5)
            k = k + 1;
    }
    cout << endl;
    cout.precision(3);
    cout << "avarage mark = " << s / n << endl;
    cout << "kilkistb otlichnikiv = " << k << endl;
    delete[]mas;
    /*int n, m;
    cout << "Введіть кількість рядків: ";
    cin >> n;
    cout << "Введіть кількість стовбців: ";
    cin >> m;
    int** a = new int* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[n][m];
        }
        cout << endl;
    }*/
}
