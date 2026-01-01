#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "../admin/admin.h"
#include "menu.h"

namespace Menu
{
    int menu()
    {
        int choice;
        Admin admin;

        // Login validation
        while (!admin.login())
        {
            std::cout << "Invalid login! Try again.\n";
        }

        std::cout << "Login successful!\n";

        do
        {
            std::cout << "\n----- MAIN MENU -----\n";
            std::cout << "1. Property Menu\n";
            std::cout << "2. Seller Menu\n";
            std::cout << "3. Client Menu\n";
            std::cout << "4. Logout\n";
            std::cout << "Enter choice: ";
            std::cin >> choice;

            // User *user; // Base class pointer (Polymorphism)

            switch (choice)
            {
            // case 1:
            // {
            //     Property p;
            //     user = &p;
            //     user->menu();
            //     break;
            // }
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
                std::cout << "Logged out successfully.\n";
                std::cout << "Program ended.\n";
                return 0;

            default:
                std::cout << "Invalid choice!\n";
            }

        } while (true);
    }
}