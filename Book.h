//
// Created by tanya on 07.03.2024.
//

#ifndef UNTITLED_BOOK_H
#define UNTITLED_BOOK_H
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int yearPublished;

public:
    Book(const string& _title, const string& _author, int _yearPublished);
    Book();

    // copy
    Book(const Book& other);
    static void printLibraryName();

    static int totalBooks;


    ~Book();
    void getTitle() const;
    void getAuthor() const;
    void getYearPublished() const;

    Book& operator++();
    friend ostream& operator<<(ostream& os, const Book& book);

};

#endif //UNTITLED_BOOK_H
