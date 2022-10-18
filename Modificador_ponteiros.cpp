#include <iostream>
#include <string>

using namespace std;

int main()
{
              string food = "Donuts";
              string *ptr = &food;

              cout << food << "\n";

              cout << &food << "\n";

              cout << *ptr << "\n";

              *ptr = "cupcake";

              cout << *ptr << "\n";

              cout << food << "\n";

              return 0;
}