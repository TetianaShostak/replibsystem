//
// Created by tanya on 07.03.2024.
//

#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H
#include <string>
#include <vector>
#include "Book.h"

using namespace std;
class User {
private:
    string name;
    int age;
    vector<Book> borrowedBooks;

public:
    User(const string& _name, int _age);
    User();
    ~User();
    void getName() const;
    void getAge() const;
    void borrowBook(const Book& book);
};


#endif //UNTITLED_USER_H
