#include "User.h"
#include <iostream>

User::User(const std::string& name, int age) : name(name), age(age) {
    std::cout << "User constructor called." << std::endl;
}

User::User() : User("Unknown", 0) {}

User::~User() {
    std::cout << "User destructor called." << std::endl;
}

std::string User::getName() const {
    return name;
}

int User::getAge() const {
    return age;
}

void User::borrowBook(const Book& book) {
    borrowedBooks.push_back(book);
}
