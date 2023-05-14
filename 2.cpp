#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");
    string input_str;
    int word_count = 0;

    cout << "Введите строку: ";
    getline(cin, input_str);

    stringstream ss(input_str);

    while (ss >> input_str) {
        word_count++;
    }

    cout << "Количество слов: " << word_count << endl;

    return 0;
}