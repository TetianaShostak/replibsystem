#pragma once
#include "User.h"
#include <string>
using namespace std;


class Teacher final : public User {
private:
    std::string subject;

public:
    Teacher(const std::string& name, int age, const std::string& subject); // Change here
    ~Teacher();

    void displayInfo() const override;
    void processInformation() const override;
};