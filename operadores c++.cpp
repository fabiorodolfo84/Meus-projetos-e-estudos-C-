// operadores C++ sao usados para realizar operacoes em variaveis e valores. 
//no expemplo abaixo usamos o + operador para somar dois valores. 

/*

#include <cstdlib>

#include <iostream>

using namespace std;

int main(){
    
    int x = 100 + 50;
    cout << x <<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}


#include <iostream>
using namespace std;

int main () {
    int soma1 = 100 + 50; // 150
    int soma2 = soma1 + 250; // soma 1 que é 150 + 250 = 400
    int soma3 = soma2 + soma2; // soma 2 = 400 + soma 2 = 400 total 800
    cout << soma1 << "\n";
    cout << soma2 << "\n";
    cout << soma3 << "\n";
    
    system("pause");
    
    return 0; 
    
    
}



// abaixo tempo o operador de atribuição.

#include <iostream>
using namespace std;

int main () {
    int x = 10;
    x += 5;
    cout <<x  <<endl ; 
    system("pause");
    
    return 0;
    
}


// Operadores de comparacao são usados para comparar dois valores.
//obs: o valor de retorno de uma comparação é verdadeiro (1) ou falso (0).
//no exemplo a seguir, usamos o operador maior que > () para descobrir se 5 é maior que 3.
// veja o exemplo abaixo.

#include <iostream>
using namespace std;

int main () {
    int x = 5;
    int y = 3;
    cout << (x > y) << endl ; // retorna 1 (true) porque 5 é maior que 3. se for (false) retorna 0.
    
    system("pause");
    return 0;
}
// operadores == igual
// != diferente 
// > maior
// < menor
// >= maior igual
// <= menor igual
// operadores logicos, sao usados para determinar a logica entre variaveis ou valores. 

&& 
||
!
veja nos exemplos abaixo.
*/
/*
#include <iostream>
using namespace std; 

int main () {
    int x = 5;
    int y = 3;
    cout<< (x >3 && x < 10) <<endl; // retorna true (1) porque 5 é maior que 3 e 5 é menor que 10.
    
    system("pause");
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 3;
    cout << (x > 3 || x < 4 ) << endl ; // retorna verdadeiro (1) porque uma das condicoes é verdadeira (5 é maior que 3, mas 5 não é menor que 4).
    
    system("pause");
    
  
   return 0;
}

*/

#include <iostream>
using namespace std; 
 
 int main () {
     int x = 5;
     int y = 3;
     cout << (!(x > 3 && x < 10 )) <<endl; // retorna falso (0) porque ! (not) é usado para reverter o resultado.
     
     system ("pause");
     return 0;
     
     }
















