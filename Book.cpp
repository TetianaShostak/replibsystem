//
// Created by tanya on 07.03.2024.
//
#include "Book.h"
#include <iostream>
using namespace std;

int Book::totalBooks = 0; //initial static field
void Book::printLibraryName() {
    cout << "Library: Memory Library" << endl;
}
//static
Book::Book(const string& _title, const string& _author, int _yearPublished)
        : title(_title), author(_author), yearPublished(_yearPublished) {
    cout << "Book constructor called." << endl;
    totalBooks++;
}

Book::Book() : Book("Unknown", "Unknown", 0) {}

// copy
Book::Book(const Book& other)
        : title(other.title), author(other.author), yearPublished(other.yearPublished) {
    cout << "Book copy constructor called." << endl;
}

Book::~Book() {
    cout << "Book destructor called." << endl;
}

void Book::getTitle() const {
    cout << "Book Title: " << title << endl;
}

void Book::getAuthor() const {
    cout << "Book Author: " << author << endl;
}

void Book::getYearPublished() const {
    cout << "Book Year Published: " << yearPublished << endl;
}

ostream& operator<<(ostream& os, const Book& book) {
    os << "Title: " << book.title << "\n";
    os << "Author: " << book.author << "\n";
    return os;
}

Book& Book::operator++() {
    ++yearPublished;
    return *this;
}



