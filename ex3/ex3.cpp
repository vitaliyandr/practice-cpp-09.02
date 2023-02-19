#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    // оголошення змінних
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string product = "нові наушники";
    float price = 499.99;
    string seller = "ООО Техніка";
    string phone = "+380123456789";

    // виведення оголошення на екран
    cout << "** ОГОЛОШЕННЯ **\n\n";
    cout << "Продаю " << product << " за ціною " << price << " грн.\n";
    cout << "Продавець: " << seller << "\n";
    cout << "Телефон: " << phone << "\n\n";
    cout << "**\n";

    return 0;
}