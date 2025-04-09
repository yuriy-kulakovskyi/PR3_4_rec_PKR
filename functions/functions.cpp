#include <iostream>
#include "functions.h"

using namespace std;

// Рекурсивне додавання в кінець списку
void insert(Elem*& L, Info value, Elem* first, Elem* current) {
    if (L == nullptr) {
        Elem* tmp = new Elem{ nullptr, value };
        tmp->link = tmp;
        L = tmp;
        return;
    }

    if (first == nullptr) {
        first = L;
        current = L;
    }

    if (current->link == first) {
        Elem* tmp = new Elem{ first, value };
        current->link = tmp;
        return;
    }

    insert(L, value, first, current->link);
}

// Рекурсивний вивід списку
void display(Elem* L, Elem* current, bool firstPass) {
    if (L == nullptr) {
        cout << "Список порожній" << endl;
        return;
    }

    if (current == nullptr)
        current = L;

    cout << current->info << " ";

    if (current->link == L && !firstPass) {
        cout << endl;
        return;
    }

    display(L, current->link, false);
}

// Рекурсивне очищення пам’яті
void remove(Elem*& L, Elem* current, Elem* first) {
    if (L == nullptr) return;

    if (current == nullptr) {
        first = L;
        current = L->link;
    }
    else if (current == first) {
        delete first;
        L = nullptr;
        return;
    }

    Elem* next = current->link;
    delete current;
    remove(L, next, first);
}

// Рекурсивна функція для попарного обміну елементів
void swapPairs(Elem* L, Elem* current, Elem* first, bool firstPass) {
    if (!L || L->link == L) return; // Порожній або один елемент

    if (current == nullptr) {
        current = L;
        first = L;
    }

    Elem* next = current->link;

    if (next == first) return; // якщо друга ланка в парі — початок списку, і це завершення обходу

    // обмін значень
    swap(current->info, next->info);

    // якщо наступна пара повертає до початку — зупинити
    if (next->link == first)
        return;

    swapPairs(L, next->link, first, false);
}