#include <iostream>

#include "Librarian.h"
#include "Book.h"
#include "User.h"
using namespace std;

int main() {
    Book book1("1984", "George Orwell", 1949);
    User user1("Mary Dave", 18);
    Librarian librarian1("Jane Sun", 19);

    book1.getTitle();
    book1.getAuthor();
    book1.getYearPublished();

    user1.getName();
    user1.getAge();

    librarian1.getName();
    librarian1.getAge();

    return 0;
}
