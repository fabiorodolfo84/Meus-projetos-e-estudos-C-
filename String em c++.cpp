// String s�o usadas para armazenar texto.
// uma string variavel contem uma cole�ao de caracteres entre aspas duplas.
// para usar strings. voce deve incluir um arquivo de cabe�alho adicional no codigo - fonte, a 
//<string> biblioteca.
/*

#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main(){
    
    string saudacao = "Hello fabio";
    cout << saudacao  <<endl;
    
    

    system("PAUSE");
    return EXIT_SUCCESS;
}


// concatena��o de string
// o + operador pode ser usado entre strings para adiciona - los para formar uma nova string. isso � chamado de concatena��o.

#include <iostream>
#include <string>
using namespace std;

int main () {
    string firstName = "Fabio";
    string lastName = "Rodolfo de Oliveira";
    string fullName = firstName + lastName;
    
    cout<< fullName  <<endl;
    system ("pause");
    
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main () {
    string firstName = "Fabio";
    string lastName = "Rodolfo de Oliveira";
    string fullName = firstName + " " + lastName;
    cout << fullName <<endl;
    
    system("pause");
    
    return 0; 
}

// comprimento da string.
// para obter o comprimento de uma string, use a length() fun��o..

#include <iostream>
#include <string>

using namespace std;

int main () {
    string txt = "abecefghigjkj��ajkldjfljaljsldjlf";
    
    string txt2 = "jdkljdfjkljklrj�ajkdjkldjkdljjkdl�jksljakljfkdljdkldjd";
    cout << "O comprimento da string txt length e: " << txt.length()  <<endl;
    cout << "O comprimento da string2 txt2 size e: " << txt2.size() <<endl;
    
    
    
    system("pause");
    return 0;
}



// string de acesso voce pode acessar os caracteres em uma string consultando seu numero de indice entre colchetes[].
// este exemplo imprime o primeiro caractere em mystring.
#include <iostream>
#include <string>

using namespace std;

int main () {
    string minhaString = "fabio";
    cout << minhaString [0] << endl;
    
    system("pause");
    
    return 0;
}



//strings de entrada de usuario
// � possivel usar o operador de extra��o >> on cin para exibir uma string inserida por um usuario:
     //No entanto, cin considera um espa�o (espa�o em branco, tubula�oes, etc) como um caractere de termina�ao.
     //o que significa que ele pode exibir apenas uma unica palavra (mesmo que voce digite muitas palavras),
     
     //A partir do exemplo acima, voce esperaria que o programa imprimisse "john doe, mais imprime apenas "john ".
     //� por isso que , ao trabalhar com strings, geralmente usamos a getline() fun�ao para ler uma linha de texto. 
     //ele toma cin como primeiro parametro e a variavel string como segundo:
           
#include <iostream>
#include <string>

using namespace std;
int main() {
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout<< "your name is: " << fullName  <<endl;
    
    system("pause");
    return 0;
}



// Omitindo namespace
//voc� pode ver alguns programas c++ que s�o executados sem a biblioteca de namespace padr�o. A using namespace std.
// a linha pode ser omitida e substituida pela palavra - std , seguida pelo :: operador para string(e cout) objetos:
     
     
#include <iostream>
#include <string>

int main() {
    std::string greeting = "hello";
    std::cout <<greeting  ;
    
    system("pause");
    
    return 0;
}

//matematica C++ tem muitas fun�oes que permitem realizar tarefeas matematicas em numeros.
//maximo e minimo
// a fun��o pode ser usada para encontrar o maior valor de x e y : max (x,y)
//Ex:
#include <iostream>


int main() {
    cout << min(5,10);
    system("pause");
    return 0;
}


// cabe�alho C++ <cmath>
// outras fun�oes , como sqrt (raiz quadrada), round (arredonda um numero) e log (logaritimo nautral),
//podem ser encontradas no <cmath> arquivo de cabe�alhos.
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    cout<< sqrt (64) << "\n";
    cout<< round(2.6) << "\n";
    cout<< log(2) << "\n";
    
    system("pause");
    return 0;
    
}
*/
// C++ booleans

//Muitas vezes, na programa��o, voce precisara de um tipo de dados que pode ter um de dois valores, como:
         // sim nao
         //ligado desligado
         //verdadeiro falso
         //para isso, C++ possui um bool tipo de dados, que pode assumir os valores tru (1) ou false (0).
         //valores boleanos 
         //uma variavel booleana � declarada com a palavra bool chave � s� pode receber os valores true ou false; 
         //no exemplo abaixo, voce pode ler um true valor retorna 1 e false retorna 0.
         //no entanto, e mais comum retornar valores booleanos de expressoes booleanas (consulte a proxima pagina);
 /*        
#include <iostream>
using namespace std;

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << "\n" ;
    
    cout << isFishTasty;
    
    system("pause");
    return 0;
}  

*/

       
         





















