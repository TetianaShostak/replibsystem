#pragma once
#include <string>
#include <vector>
#include "Book.h"
using namespace std;



class User {

protected:
    string name;
    int age;
    vector<Book> borrowedBooks;

public:
    User(const string& name, int age);
    User();
    virtual ~User(); // Virtual destructor

    string getName() const;
    int getAge() const;
    void borrowBook(const Book& book);

    virtual void displayInfo() const = 0; // pure virtual function
    virtual void processInformation() const = 0; //  pure virtual function
};
