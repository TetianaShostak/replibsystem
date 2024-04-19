#pragma once
#include <vector>
#include "User.h"
#include "Book.h"
using namespace std;

class Library {
private:
    vector<User*> users; // Changed to store pointers to User
    vector<Book> books;

public:
    Library();
    ~Library();

    void addUser(User* user); // Modified to accept User pointers
    void addBook(const Book& book);
};