#include <iostream>
#include <cstdlib>
#include <string>
#include "./src/utils/user.cpp"
using namespace std;

class Client : public User
{
public:
    void menu()
    {
        cout << "\n";
        cout << "╔════════════════════════════════════════╗\n";
        cout << "║     Client Management Menu             ║\n";
        cout << "╚════════════════════════════════════════╝\n";
        cout << "1. Add Client\n";
        cout << "2. View Client\n";
        cout << "3. Back to Main Menu\n";
    }
};
