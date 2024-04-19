#include "Book.h"
using namespace std;



int Book::totalBooks = 0;

Book::Book(const string& title, const string& author, int yearPublished)
        : title(title), author(author), yearPublished(yearPublished) {
    cout << "Book constructor called." << endl;
    totalBooks++;
}

Book::Book() : Book("Unknown", "Unknown", 0) {}

Book::Book(const Book& other)
        : title(other.title), author(other.author), yearPublished(other.yearPublished) {
    cout << "Book copy constructor called." << endl;
    totalBooks++;
}

Book::~Book() {
    cout << "Book destructor called." << endl;
    totalBooks--;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return yearPublished;
}

void Book::printLibraryName() {
    cout << "Library: Memory Library" << endl;
}

void Book::displayInfo() const {
    cout << "Title: " << title << ", Author: " << author << ", Year Published: " << yearPublished << endl;
}

int Book::getTotalBooks() {
    return totalBooks;
}

Book& Book::operator++() {
    ++yearPublished;
    return *this;
}

ostream& operator<<(ostream& os, const Book& book) {
    os << "Title: " << book.title << ", Author: " << book.author << ", Year Published: " << book.yearPublished;
    return os;
}
