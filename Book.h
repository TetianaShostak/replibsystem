#pragma once
#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    int yearPublished;
    static int totalBooks;

public:
    // Constructors
    Book(const std::string& title, const std::string& author, int yearPublished);
    Book();
    // Copy constructor
    Book(const Book& other);

    // Destructor
    ~Book();

    // Methods
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    static void printLibraryName();
    void displayInfo() const;
    static int getTotalBooks();

    // Operator overloading
    Book& operator++(); // Prefix increment
    friend std::ostream& operator<<(std::ostream& os, const Book& book);
};
