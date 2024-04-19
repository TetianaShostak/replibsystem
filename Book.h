
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int yearPublished;
    static int totalBooks;

public:
    // Constructors
    Book(const std::string& title, const std::string& author, int yearPublished);
    Book();
    // Copy constructor
    Book(const Book& other);

    // Destructor
    virtual ~Book(); // Virtual to support polymorphic delete

    // Methods
    string getTitle() const;
    string getAuthor() const;
    int getYear() const;
    static void printLibraryName();
    void displayInfo() const;
    static int getTotalBooks();

    // Operator overloading
    Book& operator++(); // Prefix increment
    friend ostream& operator<<(ostream& os, const Book& book);
};
