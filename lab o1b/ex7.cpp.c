//codigo baseado em www.inf.pucrs.br/~pinho/LaproI/Structs/Structs.htm

#include <iostream>

using namespace std;

int main() {

     struct pessoas {

        char nome[20];
        int idade;
        float peso;
        float altura;

    };

    struct pessoas pessoa[3];

    for (int i=0; i<=2; i++)
    {
        cout <<"\nDigite seu nome: ";
        cin>>pessoa[i].nome;

       cout<<"\nDigite sua idade: ";
        cin>>pessoa[i].idade;
        
       cout<<"\nDigite seu peso: ";
        cin>>pessoa[i].peso;
       

       cout<<"\nDigite sua altura: ";
        cin>>pessoa[i].altura;
      
       
    }

    for (int i=0; i<=2; i++)
    {
      cout << pessoa[i].nome << ", idade: "<< pessoa[i].idade<< ", peso: " << pessoa[i].peso<< ", altura: " <<pessoa[i].altura<< endl;

    }
    
    return 0;
}