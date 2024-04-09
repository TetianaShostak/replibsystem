#pragma once
#include <string>
#include <vector>
#include "Book.h"

class User {
private:
    std::string name;
    int age;
    std::vector<Book> borrowedBooks;

public:
    User(const std::string& name, int age);
    User();
    ~User();

    std::string getName() const;
    int getAge() const;
    void borrowBook(const Book& book);
};
