// Encapsulamento é garantir que dados "sensiveis" são ocultados dos usuarios. para conseguir isso, voce deve declarar variaveis/atributos de classe como private (nao podes ser acessado de fora da classe) se voce quiser outros leiam ou modifiquem o valor e um membro privado, voce pode fornecer acesso publico e definir metodos.

// acessar membros atributo pricado, use os metodos publicos "get" e "set":

#include <iostream>
using namespace std;

class Employee
{
private:
              // atributo privado
              int salary; // o salary atributo é private, que tem acesso restrito.

public:
              // setter
              void setSalary(int s) // o publico setSalary() o metodo recebe um parametro (s e o atribui ao salary atributo) (salario = s).
              {
                            salary = s;
              }
              // getter
              int getSalary() // o publico getSalary() metodo retorna o valor de privado salary atributo.
              {
                            return salary;
              }
};

int main()
{
              Employee myObj; // dentro do main(), criamos um objeto do employee classe. Agora podemos usar o setSalary() metodo para definir o valor do atributo privado para 50000. entao chamamos o getSalary()metodo no objeto para retornar o valor.
              myObj.setSalary(5000);
              cout << myObj.getSalary();
              return 0;
}

// Por que o encapsulamento?
//é considerado uma boa pratica declarar seus atributos de classe como privados (como quantas vezes puder). o encapsulamento garante um melhor controle de seus dados, porque voce (ou outros pode alterar uma parte do codigo sem afetar outras partes)
// maior segurança dos dados.
