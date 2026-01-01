#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Admin
{
private:
    string username;
    string password;

public:
    Admin()
    {
        username = "admin";
        password = "1234";
    }

    bool login()
    {
        string u, p;
        cout << "\n--- Admin Login ---\n";
        system("cls");
        cout << "Username: ";
        cin >> u;
        cout << "Password: ";
        cin >> p;

        if (u == username && p == password)
            return true;
        else
            return false;
    }
};
