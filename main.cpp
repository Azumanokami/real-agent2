#include <iostream>
#include <cstdlib>
#include "src/menu/menu.h"

using namespace std;

// ================= MAIN FUNCTION =================
int main()
{
  cout << "╔════════════════════════════════════════╗\n";
  cout << "║     REAL ESTATE MANAGEMENT SYSTEM      ║\n";
  cout << "╚════════════════════════════════════════╝\n";

  Menu::menu();

  return 0;
}
