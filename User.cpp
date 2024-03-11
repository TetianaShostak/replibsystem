//
// Created by tanya on 07.03.2024.
//

#include "User.h"
#include <iostream>
using namespace std;

User::User(const string& _name, int _age)
        : name(_name), age(_age) {
    cout << "User constructor called." << endl;
}
User::User(User&& other) noexcept
        : name(move(other.name)), age(other.age) {
    cout << "User move constructor called." << endl;
    // переміщую вміст borrowedBooks
    borrowedBooks = move(other.borrowedBooks);
    // очищаю вміст other
    other.age = 0;
}

User::User() : User("Unknown", 0) {}
//deligation

User::~User() {
    cout << "User destructor called." << endl;
}

void User::getName() const {
    cout << "User Name: " << name << endl;
}

void User::getAge() const {
    cout << "User Age: " << age << endl;
}

void User::borrowBook(const Book& book) {
    borrowedBooks.push_back(book);
}