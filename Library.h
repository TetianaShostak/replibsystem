#pragma once
#include <vector>
#include "User.h"
#include "Book.h"

class Library {
private:
    std::vector<User> users;
    std::vector<Book> books;

public:
    Library();
    ~Library();

    void addUser(const User& user);
    void addBook(const Book& book);
};
