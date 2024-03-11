#include <iostream>

#include "Librarian.h"
#include "Book.h"
#include "User.h"
using namespace std;

int main() {
    Book book1("1984", "George Orwell", 1949);

    Book book2 = book1; //creating book2, which is copy of book1
    ++book1;

    //виклик стат поля
    cout << "Total number of books: " << Book::totalBooks << endl;

    Book::printLibraryName();

    User user1("Mary Dave", 18);
    Librarian librarian1("Jane Sun", 21);

    book1.getTitle();
    book1.getAuthor();
    book1.getYearPublished();

    user1.getName();
    user1.getAge();

    librarian1.getName();
    librarian1.getAge();

    //викликаю перев. дружній оператор 
    Book book("Da Vinci Code", "Dan Brown", 2003);
    cout << book;

    // Викликаю метод з вказівником this
    librarian1.displayInfo();

    return 0;
}