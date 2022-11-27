// neste programa tem por finalidade apresentar um texto dividido em duas linhas utilizando o caractere especial \n em vez de utilizar o nalipulador de saida endl.

#include <iostream>
using namespace std;

int main()
{
              char Nome[40];
              cout << "Informe seu \nNome: ";
              cin >> Nome;
              cout << "Ola, \n";
              cout << Nome << "\n";
              return 0;
}