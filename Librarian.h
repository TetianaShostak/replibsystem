#pragma once
#include <vector>
#include "User.h"
#include "Book.h"

class Librarian : public User {
private:
    std::string libraryName;
    std::vector<Book> libraryBooks;

public:
    Librarian(const std::string& name, int age, const std::string& libraryName);
    Librarian();

    ~Librarian();

    void addBookToLibrary(const Book& book);
    void removeBookFromLibrary(const std::string& bookTitle);
    void displayInfo() const;

    std::string getLibraryName() const;
};
