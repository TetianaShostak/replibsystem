#include "Library.h"

Library::Library() {}

Library::~Library() {
    for (User* user : users) {
        delete user; // Ensure proper cleanup
    }
    users.clear(); //Опціонально очистіть вектор для скидання його стану
}

void Library::addUser(User* user) {
    users.push_back(user);
}

void Library::addBook(const Book& book) {
    books.push_back(book);
}
