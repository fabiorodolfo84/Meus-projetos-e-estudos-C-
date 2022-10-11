// Variaveis sao conteineres para armazenar valores dados. 
// em c++, existem diferentes tipos de variaveis( definidas com diferentes palavras-chave), por exemplo:
      //int - armazena inteiros (numeros inteiros), sem decimais, como 123 ou -123.
      //double - armazena numeros de ponto flutuante, como decimais, como 19,99 ou -19,99.
      //char - armazena caracteres unicos como 'a' ou 'b'. os valores de caractere s]ao cercados por aspas simples.
      //string - armasena texto, como "hello world". os valores de string sao cercados por aspas duplas.
      // boll - armazena valores com dois estados : verdadeiro ou falso.
      
/*#include <iostream>
using namespace std;

int main (){
    int myNum = 15;
    cout <<myNum; 
    
    system ("pause");
    
    return 0;   
    
}

*/
//================================================================================


// observe que, se voce atribuir um novo valor a uma variavel existente, ele substituira o valor anterior.

/*#include <iostream>
using namespace std;

int main () {
    int myNum =15; // o numero dessa variavel e 15.
    myNum =10; // agora minha variavel esta valendo 10.
    cout << myNum <<endl;

    system ("pause");
    return 0;
}
*/

//=================================================================================
// Declarar multiplas variaceis
//para declarar mais de uma variavel do mesmo tipo, use uma lista separada por virgulas;

#include <iostream>
using namespace std;

int main(){
    int x = 5, y = 6, z = 50;
    cout << x + y + z <<endl;
    system("pause");
    return 0;   
}

// constantes!! quando voce nao quiser que outros(ou voce mesmo) substituam os valores de variaveis existentes, use a  palavra 
//const chave (isso declara a variavel como "constante", o que siginifica imutavel e somente leitura).
// ex: const int myNnum = 15;
// myNum = 10;

//====================================================================================


    
    

