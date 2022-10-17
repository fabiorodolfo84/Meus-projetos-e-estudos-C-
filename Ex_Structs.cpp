#include <iostream>
#include <string>
using namespace std;

int main()
{
              struct
              {
                            string nome;
                            int idade;
                            string cidade;

              } meuNome1, meuNome2, meuNome3;

              meuNome1.nome = "Fabio Rodoolfo de Oliveira";
              meuNome1.idade = 38;
              meuNome1.cidade = "São José dos Campos - SP";

              meuNome2.nome = "Aline Diane dos Santos";
              meuNome2.idade = 36;
              meuNome2.cidade = "Caraguatatuba SP";

              meuNome3.nome = "Jully Oliveira";
              meuNome3.idade = 12;
              meuNome3.cidade = "São José dos Campos - SP";

              cout << meuNome1.nome << " Idade:" << meuNome1.idade << " Cidade: " << meuNome1.cidade << "\n";
              cout << meuNome2.nome << " Idade:" << meuNome2.idade << " Cidade: " << meuNome2.cidade << "\n";
              cout << meuNome3.nome << " Idade:" << meuNome3.idade << " Cidade: " << meuNome3.cidade << "\n";

              return 0;
}
