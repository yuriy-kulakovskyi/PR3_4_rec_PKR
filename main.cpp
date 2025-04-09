#include <iostream>
#include "functions/functions.h"
using namespace std;

int main() {
    Elem* L = nullptr;

    // Формування списку
    insert(L, 1);
    insert(L, 2);
    insert(L, 3);
    insert(L, 4);
    insert(L, 5);
    insert(L, 6);
    insert(L, 7); // непарна кількість для перевірки

    cout << "Початковий список: ";
    display(L);

    swapPairs(L); // Попарний обмін

    cout << "Після обміну попарно: ";
    display(L);

    // Очищення пам'яті
    remove(L);
    return 0;
}