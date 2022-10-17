// uma estrutura em multiplas variaveis !!!
// voce pode usar uma virgula ( , ) para usar estrutura em muitas variaveis.

// este exemplo mostra como usar uma estrutura em duas variaveis diferentes.

// use uma estrutura para representar dois carros.

#include <iostream>
#include <string>
using namespace std;

int main()
{
              struct
              {
                            string brand;
                            string model;
                            int year;
                            // podemos adicionar variaveis separando - as com uma virgula
              } myCar1, myCar2, myCar3, myCar4, myCar5;
              // Colocar dados na primeira estrutura
              myCar1.brand = "Chevrolett";
              myCar1.model = "Kadett";
              myCar1.year = 1969;

              // inserir dados na segunda estrutura

              myCar2.brand = "Ford";
              myCar2.model = "Mustang";
              myCar2.year = 1987;

              myCar3.brand = "Ford";
              myCar3.model = "fiesta";
              myCar3.year = 2000;

              myCar4.brand = "Ford";
              myCar4.model = "corsel";
              myCar4.year = 1973;

              myCar5.brand = "volksvagen";
              myCar5.model = "fusca";
              myCar5.year = 1987;

              // imprima os membros da strutura

              cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
              cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;
              cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << endl;
              cout << myCar4.brand << " " << myCar4.model << " " << myCar4.year << endl;
              cout << myCar5.brand << " " << myCar5.model << " " << myCar5.year << endl;

              return 0;
}
