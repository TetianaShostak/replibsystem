//
// Created by tanya on 07.03.2024.
//
#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(const string& _title, const string& _author, int _yearPublished)
        : title(_title), author(_author), yearPublished(_yearPublished) {
    cout << "Book constructor called." << endl;
}

Book::Book() : Book("Unknown", "Unknown", 0) {}

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
