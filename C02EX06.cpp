// O programa solicita o nome e o sobrenome de uma pessoa e apresenta uma mensagem de saudação com o nome completo da pessoa.

#include <iostream>
using namespace std;

int main()
{
              char Nome[50], Sobrenome[20];
              cout << "Informe seu nome ... : ";
              cin.getline(Nome, sizeof(Nome));
              cout << "Informe sobrenome ... : ";
              cin >> Sobrenome;
              cout << "Ola, \n "
                   << Nome << " " << Sobrenome;

              return 0;
}