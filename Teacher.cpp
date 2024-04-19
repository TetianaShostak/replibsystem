#include "Teacher.h"
#include <iostream>
using namespace std;
#include "Teacher.h"
#include <iostream>

Teacher::Teacher(const std::string& name, int age, const std::string& subject)
        : User(name, age), subject(subject) {}

Teacher::~Teacher() {
    std::cout << "Teacher destructor called." << std::endl;
}

void Teacher::displayInfo() const {
    std::cout << "Teacher Name: " << getName() << ", Age: " << getAge() << ", Subject: " << subject << std::endl;
}

void Teacher::processInformation() const {
    std::cout << "Analyzing academic performance data for teacher: " << getName() << std::endl;
}

