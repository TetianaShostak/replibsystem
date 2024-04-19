#include "User.h"
#include <iostream>

User::User(const string& name, int age) : name(name), age(age) {
    cout << "User constructor called." << endl;
}

User::User() : User("Unknown", 0) {}

User::~User() {
    cout << "User destructor called." << endl;
}

string User::getName() const {
    return name;
}

int User::getAge() const {
    return age;
}

void User::borrowBook(const Book& book) {
    borrowedBooks.push_back(book);
}
