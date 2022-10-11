// Entrada do usuario C++
//"cin" é uma variavel predefinida que le dados do teclado com o operador de extração (>>).
// No exemplo a seguir, o usuario pode inserir um numero, que e armazenado na variavel x. em seguida,
// imprimimos o valor de x. 

/*ude <cstdlib>
#include <iostream>

using namespace std;

int main(){
    int x; 
    cout << "Digite sua idade: ";
    cin >> x; 
    cout << "Minha idade e: " <<x <<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
*/

// =======================================================================

//Criaremos uma calculadora simples

//Neste exemplo, o usuario deve inserir dois numeros. em seguida, imprimimos a soma calculando (somando os dois numeros:

/*        
#include <iostream>
using namespace std;

int main() {
    int x, y;
    int sum;
    cout <<"Digite um numero : ";
    cin >> x;
    cout << "Digite outro numero: ";
    cin >> y;
    sum = x + y;
    cout << "A soma e: " << sum <<endl;
    system("pause");
    
    return 0;
    
    }     
    */
    
    #include <iostream>
    using namespace std;
    
    int main(){
        int x, y;
        int mult;
        cout <<"Digite um numero: ";
        cin >>x;
        cout <<"Digite outro numero: ";
        cin >>y;
        mult = x * y;
        cout<< "A multiplicacao e: " <<mult <<endl;
        
        system("pause");
        return 0;
        
        }   
    
    
    
    
    
    
    

