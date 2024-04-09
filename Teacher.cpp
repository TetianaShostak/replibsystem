#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(const string& name, int age, const string& subject)
        : User(name, age), subject(subject) {}

Teacher::~Teacher() {}

void Teacher::displayInfo() const {
    std::cout << "Teacher Name: " << getName() << ", Age: " << getAge()
              << ", Subject: " << subject << std::endl;
}
