//
// Created by Yurii Kulakovskyi on 09.04.2025.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef int Info;

typedef int Info;

struct Elem {
  Elem* link;
  Info info;
};

void insert(Elem*& L, Info value, Elem* first = nullptr, Elem* current = nullptr);
void display(Elem* L, Elem* current = nullptr, bool firstPass = true);
void clear(Elem*& L);
void remove(Elem*& L, Elem* current = nullptr, Elem* first = nullptr);
void swapPairs(Elem* L, Elem* current = nullptr, Elem* first = nullptr, bool firstPass = true);

#endif //FUNCTIONS_H
