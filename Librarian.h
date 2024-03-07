//
// Created by tanya on 07.03.2024.
//

#ifndef UNTITLED_LIBRARIAN_H
#define UNTITLED_LIBRARIAN_H
#include <string>
#include "Book.h"
using namespace std;

class Librarian {
private:
    string name;
    int age;

public:
    Librarian(const string& _name, int _age);
    Librarian();
    ~Librarian();

    void getName() const;
    void getAge() const;

    void addBookToLibrary(Book& book);
    void removeBookFromLibrary(Book& book);
};

#endif //UNTITLED_LIBRARIAN_H
