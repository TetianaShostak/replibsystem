#include <iostream>
#include "Book.h"
#include "User.h"
#include "Student.h"
#include "Teacher.h"
#include "Librarian.h"
#include "Library.h"
using namespace std;

int main() {

    Book book1("1984", "George Orwell", 1949);
    Book book2("The Day That Taught Me to Live", "Laurent Gounelle", 2019);

    cout << "Before assignment:" << endl;
    cout << book2 << endl;
    book2 = book1;

    cout << "After assignment:" << endl;
    cout << book2 << endl;

    cout << "Total books(static): " << Book::getTotalBooks() << endl;

    Student student1("Olha Anderson", 18, "Harvard University");
    Student studentCopy = student1;
    cout << "Original Student:" << endl;
    student1.displayInfo();
    cout << "Copied Student:" << endl;
    studentCopy.displayInfo();

    Student student2("Ksenia Shevchenko", 21, "Harvard");
    Student student3("Alice Smith", 19, "Oxford");
    cout << "Before assignment:" << endl;
    student3.displayInfo();
    student3 = student2;
    cout << "After assignment:" << endl;
    student3.displayInfo();

    Teacher teacher1("Mia Shostak", 20, "Physics");
    teacher1.displayInfo();

    Librarian librarian1("Emily Matveychuk", 21, "MEMORY Library");
    librarian1.addBookToLibrary(book1);
    librarian1.addBookToLibrary(book2);
    librarian1.displayInfo();

    User user1("John Doe", 23);
    cout << "User Name: " << user1.getName() << ", Age: " << user1.getAge() << endl;

    Library library;

    return 0;
}
