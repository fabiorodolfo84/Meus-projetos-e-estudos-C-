#include<iostream>
using namespace std;

int main(){
           
cout <<"SEJA BEM VINDO AO SISTEMA DE ESTACIONAMENTO" <<endl;
int u_input, amount = 0, count = 0;
int moto = 0, onibus = 0, carro = 0;
cout<<"FAVOR DIGITAR UM NUMERO ENTRE 1 A 5" <<endl;

while(true){
             


cout<<"Precione 1 para moto" <<endl;
cout<<"Precione 2 para carro" <<endl;
cout<<"Precione 3 para onibus" <<endl;
cout<<"Precione 4 para mostrar cadastro" <<endl;
cout<<"Precione 5 para deletar" <<endl;

cin>>u_input;


if (u_input ==1)
{
            if(count <=50)
            {
                     moto++;
            amount = amount+100;
            count = count + 1;
            }
            
            else
            cout <<"ESTACIONAMENTO ESTA COMPLETO"<<endl;
            }
else if(u_input==2)
{
              if(count <=50
              ){
              carro++;
              amount = amount + 200;
              count = count + 1;
              }
               else
            cout <<"ESTACIONAMENTO ESTA COMPLETO"<<endl;
            }
else if(u_input==3)
{
              if(count <=50)
              {
              onibus++;          
              amount = amount + 300;
              count = count + 1;
              }
               else
            cout <<"ESTACIONAMENTO ESTA COMPLETO"<<endl;
            }
else if(u_input==4)
{
              cout <<"========================" <<amount <<endl;
              
              cout <<"O TOTAL DE VEICULOS PAGOS =" <<amount <<endl;            
              cout <<"O TOTAL DE VEICULOS ESTACIONADOS SAO:=" <<count <<endl;
              cout <<"NUMERO DE MOTOS ESTACIONADO" <<moto <<endl;
              cout <<"NUMERO DE CARROS ESTACIONADO" <<carro <<endl;
              cout <<"NUMERO DE ONIBUS ESTACIONADO" <<onibus <<endl;
              
              cout <<"========================" <<amount <<endl;
              
              
              }
              
if(u_input==5)
{
              amount = 0;
              count = 0;
              moto = 0;
              carro = 0;
              onibus = 0;
              
                cout <<"========================" <<amount <<endl;
              
              cout <<"CADASTRO DELETADO=" <<amount <<endl;            
              
              
              cout <<"========================" <<amount <<endl;
              
              
              
              }
              
else{
              cout<<"NUMERO INVALIDO"<<endl;
              }
              }
              
        


system("pause");
return 0;

}
