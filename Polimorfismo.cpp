// Polimorfismo

/*
Polimorfismo significa "muitas formas", e ocorre quando temos muitas classes que estão relacionadas entre si por herança.

Como especificamos no capitulo anterior; A herança nos permite herdar atributos e metodos de outra classe. Polimorfismo usa esses metodos para executar tarefas diferentes. isso nos permite realizar uma unica ação de diferentes maneiras.

por exemplo, pense em uma classe base chamada, Animal que tem um metodo chamado animalSound(). classes derivadas de animais podem ser porcos, gatos, cachorros, passaraos - e eles tambem tem sua propria implementação de um som animal (o porco uiva, o gato mia, etc.);

*/

#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
              void animalSound()
              {
                            cout << "The animal makes a sound \n";
              }
};

class Pig : public Animal
{
public:
              void animalSound()
              {
                            cout << "The pit says: wee wee \n";
              }
};

class Dog : public Animal
{
public:
              void animalSound()
              {
                            cout << "The dog says: bow wow \n";
              }
};

int main()
{
              Animal myAnimal;
              Pig myPig;
              Dog myDog;

              myAnimal.animalSound();
              myPig.animalSound();
              myDog.animalSound();
              return 0;
}
