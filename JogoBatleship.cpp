// Vamos usar um array multidimensional para representar um pequeno jogo de Batleship;

#include <iostream>
using namespace std;

int main()
{
              // colocamos "1" para indicar que existe um navio
              bool ships[4][4] = {
                  {0, 1, 1, 0},
                  {0, 0, 0, 0},
                  {0, 0, 1, 0},
                  {0, 0, 1, 0}};

              // Acompanhe quantos acertos o jogador tem e quantos turnos ele jogou nessas variaveis.

              int hits = 0;
              int numberOfTurns = 0;

              while (hits < 4)
              {
                            int row, column;
                            cout << "Selecionando as cordenadas\n";

                            cout << "Escola um numero de linha entre 0 e 3: ";
                            cin >> row;

                            // Peça ao jogador uma coluna
                            cout << "Escolha um numero de coluna entre 0 e 3: ";
                            cin >> column;

                            // Verifique se existe uma nave nessas coordenadas.
                            if (ships[row][column])
                            {
                                          // se o jogador  atingir um navio, remova o definindo o valor para 0.
                                          ships[row][column] = 0;

                                          // Aumenta o contador de visitas.
                                          hits++;
                                          // Diga ao jogador que ele atingiu um navio e quantos navios ainda restam.
                                          cout << "Hit!" << (4 - hits) << " left.\n\n";
                            }
                            else
                            {
                                          // Diga ao jogador que ele errou
                                          cout << "Miss\n\n";
                            }
                            // Conte quantas voltas o jogador deu
                            numberOfTurns++;
              }
              cout << "Victory!\n";
              cout << "Your won in " << numberOfTurns << " turns";

              return 0;
}