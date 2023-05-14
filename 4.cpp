#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void main()
{
    srand(time(NULL));

    int p = 0, l = 0;

    const int size_3 = 5;
    int mas_1[size_3];

    for (p = 0; p < size_3; p++)
    {
        mas_1[p] = rand() % 20;
    }
    //начальный вид первого массива

    for (p = 0; p < size_3; p++)
    {
        cout << mas_1[p] << " ";
    }
    cout << endl;

    const int size_4 = 5;
    int mas_2[size_4];

    for (l = 0; l < size_4; l++)
    {
        mas_2[l] = rand() % 20;
    }
    //начальный вид второго массива
    for (l = 0; l < size_4; l++)
    {
        cout << mas_2[l] << " ";
    }
    cout << endl;

    int mas_4[size_4];
    int i2, j2, k2 = 0;

    for (i2 = 0; i2 < size_3; i2++)
    {
        for (j2 = 0; j2 < size_4; j2++)
        {
            if (mas_1[i2] == mas_2[j2])
            {
                mas_4[k2] = mas_1[i2];
            }
            else if (mas_1[i2] != mas_2[j2])
            {
                mas_4[k2] == 0;
            }
        }
    }
    for (k2 = 0; k2 < size_4; k2++)
    {
        if (mas_4[k2] != 0)
            cout << mas_4[k2] << " ";
        else
            cout << " ";

    }
    cout << endl;
}