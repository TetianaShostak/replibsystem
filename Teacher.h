#pragma once
#include "User.h"
#include <string>

class Teacher : public User {
private:
    std::string subject;

public:
    Teacher(const std::string& name, int age, const std::string& subject);
    ~Teacher();

    void displayInfo() const;
};
