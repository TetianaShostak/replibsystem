#include "Student.h"
#include <iostream>
using namespace std;;
Student::Student(const std::string& name, int age, const std::string& university)
        : User(name, age), university(university) {}

Student::Student(const Student& other)
        : User(other), university(other.university) {
    std::cout << "Copy constructor called for Student: " << other.getName() << std::endl;
}


Student::~Student() {}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        User::operator=(other);
        university = other.university;
        std::cout << "Assignment operator called for Student: " << other.getName() << std::endl;
    }
    return *this;
}

void Student::displayInfo() const {
    cout << "Name: " << getName() << ", Age: " << getAge()
              << ", University: " << university << std::endl;
}
