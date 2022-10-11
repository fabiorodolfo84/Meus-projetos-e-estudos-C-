// Tipos de ddos em C++
//conforme explicado no capitulo variaveis, uma variavel em C++ deve ser um tipo de dado especificado:
           // temos tambem os tipos boleanos que é declarado com a palavra bool = tre ou false. 
           // quando o valor é reornado, treu = 1 e false = 0.
           // outro tipo de dado é o char que tem a entrada de dados como char, é usado um caractere de aspas simples.''.
           //ex: char mygrade = 'B';
           // cout << myGrade;
           // O tipo de dado String é usado para armazenar uma sequencia de caracteres (texto) String devem estar entre aspas duplas. "".
           // string greeting = "HELLO";
           // << getting;
           // OBS: para usar strings, voce deve incluir um arquivo de cabeçalho adicional no codigo- fonte a <string. biblioteca.
           // ex: #include <string>

#include <cstdlib>

#include <iostream>

using namespace std;

int main(){
    // variaveis abaixo
    int meuNum = 5;           //inteiro (numero inteiro)
    float myFloatNum = 5.99;  // numero de ponto flutuante
    
    char minhaLetra = 'D';    //personagem
    bool meuBoleano = true;   //boleano 
    string minhasString = "ola"; //corda
    
    //imprime os valores das variaveis
    
    cout << "int: " << meuNum << "\n";
     cout << "float: " << myFloatNum << "\n";
     
       cout << "char: " << minhaLetra << "\n";
        cout << "bool: " << meuBoleano << "\n";
         cout << "string: " << minhasString << "\n";
          
    
    system("PAUSE");
    return EXIT_SUCCESS;
}



