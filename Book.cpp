#include "Book.h"

int Book::totalBooks = 0;

Book::Book(const std::string& title, const std::string& author, int yearPublished)
        : title(title), author(author), yearPublished(yearPublished) {
    std::cout << "Book constructor called." << std::endl;
    totalBooks++;
}

Book::Book() : Book("Unknown", "Unknown", 0) {}

Book::Book(const Book& other)
        : title(other.title), author(other.author), yearPublished(other.yearPublished) {
    std::cout << "Book copy constructor called." << std::endl;
    totalBooks++;
}

Book::~Book() {
    std::cout << "Book destructor called." << std::endl;
    totalBooks--;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return yearPublished;
}

void Book::printLibraryName() {
    std::cout << "Library: Memory Library" << std::endl;
}

void Book::displayInfo() const {
    std::cout << "Title: " << title << ", Author: " << author << ", Year Published: " << yearPublished << std::endl;
}

int Book::getTotalBooks() {
    return totalBooks;
}

Book& Book::operator++() {
    ++yearPublished;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << ", Author: " << book.author << ", Year Published: " << book.yearPublished;
    return os;
}
