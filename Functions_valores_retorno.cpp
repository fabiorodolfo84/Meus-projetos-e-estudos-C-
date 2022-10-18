// Valores de retorno
//  O void palavra chave , usada nos exemplos anteriores, indica que a função não deve retornar um valor. Se voce deseja que a funçao retorne um valor, voce pode usar um tipo de dados (como  int, string , etc) em vez de void, use o return palabra chave dentro da função.

#include <iostream>
using namespace std;
/*
int myFunction(int x)
{
              return 10 * x;
}

int main()
{
              cout << myFunction(3);

              return 0;
}
*/

// este exemplo retorna a soma de uma funcao com dois parametros.

/*

int myFunction(int x, int y)
{
              return x + y;
}

int main()
{
              cout << myFunction(5, 3);
              return 0;
}

*/

int myFunction(int x, int y)
{
              return x * y;
}

int main()
{
              int z = myFunction(10, 4);
              int a = myFunction(25, 25);
              cout << z << endl;
              cout << a << endl;
              return 0;
}