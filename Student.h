#pragma once
#include "User.h"
#include <string>

class Student : public User {
private:
    std::string university;

public:

    Student(const std::string& name, int age, const std::string& university);
    Student(const Student& other); // Copy constructor

    Student& operator=(const Student& other);

    ~Student();
    void displayInfo() const;
};
