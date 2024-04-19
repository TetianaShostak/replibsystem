#pragma once
#include "User.h"
#include <string>
using namespace std;

class Student : public User {
private:
    string university;

public:
    Student(const string& name, int age, const string& university);
    virtual ~Student();

    void displayInfo() const override;
    void processInformation() const override;
};
