#pragma once
#include <vector>
#include "User.h"
#include "Book.h"
using namespace std;

class Librarian : public User {
private:
    string libraryName;
    vector<Book> libraryBooks;

public:
    Librarian(const string& name, int age, const string& libraryName);
    virtual ~Librarian();

    void addBookToLibrary(const Book& book);
    void removeBookFromLibrary(const string& bookTitle);
    void displayInfo() const override;
    void processInformation() const override;

   // string getLibraryName() const;
};
