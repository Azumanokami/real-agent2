#include <iostream>
#include <cstdlib>
#include <string>
#include "./src/utils/user.cpp"
using namespace std;

class Property
{
public:
    Property()
    {
        cout << "\n";
        cout << "╔════════════════════════════════════════╗\n";
        cout << "║     Property Management Menu           ║\n";
        cout << "╚════════════════════════════════════════╝\n";
        cout << "1. Add Property\n";
        cout << "2. View Property\n";
        cout << "3. Back to Main Menu\n";
    }
};
