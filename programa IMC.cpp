#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    
  
    float imc, peso, altura;  // declaramos uma variavel do tipo float com imc, peso e altura do paciente.
   
    string nome = "";
    
    cout<< "\n Digite seu nome: ";
     cin>> nome; 
    
     cout<<"\n Digite seu peso!\n"; //neste campo o programa vai imprimir a msg na tela.
    
    cin>> peso; // funcao de entrada cin para digitar o peso. 
    
    cout<<"Digite sua altura!\n"; // o programa vai imprimir na tela para o usuario digitar a altura.
    
    cin>>altura; // funcao de entrada para digitar a altura.
    
    imc = peso/(altura*altura);  // nesta linha declaramos a variavel imc = peso e dividimos altura*altura.
    
    cout<<fixed<<setprecision(1); // essa linha serve para definir a quantidade de casas decimais ao mostrar o resultado,
    //o numero passado em setprecision indica a quantidade de casas que a gente quer.
    
    cout<< "\n indice de massa corporal = "<<imc<<endl; 
    
    if(imc<18.5 && imc<24) // usamos a condicional "if" para comprar os valores definidos para o nosso programa.
    {
                cout<< nome + ":" +  "Parabens voce esta com o peso correto. \n";;
                
                }
                            if(imc>=24 && imc<29)
                            {
                                       cout<<  nome + ":" +  "Cuidado voce esta acima do peso \n";
                                       }
                                       if(imc>29)
                                       {
                                                 cout<< nome + ":" +  "Cuidado voce esta obeso \n";
                                                 }
                                                 
    
    system("PAUSE");
    return 0;
}
