#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "./src/admin/admin.h"

using namespace std;

namespace Menu
{
    void menu()
    {
        int choice;
        Admin admin;

        // Login validation
        while (!admin.login())
        {
            cout << "Invalid login! Try again.\n";
        }

        cout << "Login successful!\n";

        do
        {
            cout << "\n----- MAIN MENU -----\n";
            cout << "1. Property Menu\n";
            cout << "2. Seller Menu\n";
            cout << "3. Client Menu\n";
            cout << "4. Logout\n";
            cout << "Enter choice: ";
            cin >> choice;

            // User *user; // Base class pointer (Polymorphism)

            switch (choice)
            {
            case 1:
            {
                Property p;
                user = &p;
                user->menu();
                break;
            }
            // Disable for now
            //  case 2:
            //  {
            //      Seller s;
            //      user = &s;
            //      user->menu();
            //      break;
            //  }
            //  case 3:
            //  {
            //      Client c;
            //      user = &c;
            //      user->menu();
            //      break;
            //  }
            case 4:
                cout << "Logged out successfully.\n";
                cout << "Program ended.\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
            }

        } while (true);
    }
}