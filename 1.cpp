#include <iostream>
#include <string>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");
    int decimal_num;
    cout << "Введите десятичное число: ";
    cin >> decimal_num;

    string hex_num;

    while (decimal_num > 0) {
        int remainder = decimal_num % 16;
        if (remainder < 10) {
            hex_num.insert(0, to_string(remainder));
        }
        else {
            hex_num.insert(0, 1, char('A' + remainder - 10));
        }
        decimal_num /= 16;
    }

    cout << "Результат: " << hex_num << endl;

    return 0;
}