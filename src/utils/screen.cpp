#include <iostream>
#include <cstdlib>

using namespace std;

namespace Screen
{
    void clearScreen()
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        cout << "**Unable to clear screen!**" << endl;
    }
}