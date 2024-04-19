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

    //  до та після оператора присвоєння
    cout << "Before assignment:" << endl;
    cout << book2 << endl;
    book2 = book1;

    cout << "After assignment:" << endl;
    cout << book2 << endl;

    cout << "Total books(static): " << Book::getTotalBooks() << endl;

    // створюю об'єкти користувачів
    Student student1("Olha Anderson", 18, "Harvard University");
    Student studentCopy = student1;  // Використання конструктора копіювання
    cout << "Original Student:" << endl;
    student1.displayInfo();
    student1.processInformation();
    cout << "Copied Student:" << endl;
    studentCopy.displayInfo();
    studentCopy.processInformation();

    Student student2("Ksenia Shevchenko", 21, "Harvard");
    Student student3("Alice Smith", 19, "Oxford");
    cout << "Before assignment:" << endl;
    student3.displayInfo();
    student3.processInformation();
    student3 = student2;
    cout << "After assignment:" << endl;
    student3.displayInfo();
    student3.processInformation();

    Teacher teacher1("Mia Shostak", 20, "Physics");
    teacher1.displayInfo();
    teacher1.processInformation();

    Librarian librarian1("Emily Matveychuk", 21, "MEMORY Library");
    librarian1.addBookToLibrary(book1);
    librarian1.addBookToLibrary(book2);
    librarian1.displayInfo();
    librarian1.processInformation();

    Library library;
    library.addUser(&student1);
    library.addUser(&teacher1);
    library.addUser(&librarian1);

    //  вказівник на базовий клас
    User* userPtr = &student1;
    userPtr->displayInfo();
    userPtr->processInformation();

    User& userRef = teacher1;
    userRef.displayInfo();
    userRef.processInformation();  // викликаю через посилання на базовий клас

    userPtr = &librarian1;
    userPtr->displayInfo();
    userPtr->processInformation();

    return 0;
}
