#include "Library.h"

Library::Library() {}

Library::~Library() {}

void Library::addUser(const User& user) {
    users.push_back(user);
}

void Library::addBook(const Book& book) {
    books.push_back(book);
}
