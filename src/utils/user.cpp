#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

// ================= ABSTRACTION =================
class User
{
protected:
    string name;
    string address;
    string phone;
    string email;

public:
    virtual void menu() = 0; // Pure virtual function

    virtual void enterDetails() = 0;

    virtual void viewDetails() = 0;

    virtual ~User() {}
};
