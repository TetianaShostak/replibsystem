#include "Librarian.h"
#include <iostream>
#include <algorithm>
using namespace std;

Librarian::Librarian(const string& name, int age, const string& libraryName)
        : User(name, age), libraryName(libraryName) {
   // cout << "Librarian constructor called." << std::endl;
}

// Librarian::Librarian() : Librarian("Unknown", 0, "Unknown Library") {}

Librarian::~Librarian() {
    cout << "Librarian destructor called." << endl;
}

void Librarian::addBookToLibrary(const Book& book) {
    libraryBooks.push_back(book);
}

void Librarian::removeBookFromLibrary(const string& bookTitle) {
    libraryBooks.erase(std::remove_if(libraryBooks.begin(), libraryBooks.end(), [&](const Book& book) {
        return book.getTitle() == bookTitle;
    }), libraryBooks.end());
}

void Librarian::displayInfo() const {
    cout << "Librarian: " << getName() << ", Age: " << getAge() << ", Library Name: " << libraryName << endl;
}

void Librarian::processInformation() const {
    cout << "Organizing library data for: " << libraryName << endl;
}