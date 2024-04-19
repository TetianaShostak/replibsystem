#include "Student.h"
#include <iostream>
using namespace std;;

Student::Student(const string& name, int age, const string& university)
        : User(name, age), university(university) {}

Student::~Student() {
    cout << "Student destructor called" << endl;
}
void Student::displayInfo() const {
    cout << "Student Name: " << getName() << ", Age: " << getAge() << ", University: " << university << endl;
}

void Student::processInformation() const {
    cout << "Processing student information for: " << getName() << endl;
}

//Student& Student::operator=(const Student& other) {
   // if (this != &other) {
       // User::operator=(other);
      //  university = other.university;
       // std::cout << "Assignment operator called for Student: " << other.getName() << std::endl;
 //   }
//    return *this;
//}

//void Student::displayInfo() const {
  //  cout << "Name: " << getName() << ", Age: " << getAge()
 //             << ", University: " << university << std::endl;
//}
