#include <iostream>
using namespace std;


int main()
{
  char palavra[100],letra[100],palavraAux;
  int pos;
 cout << "Digite a palavra:" << endl;
   cin >> palavra;
  cout<<" digite o numero da posicao a ser alterada" << endl;
  cin >> pos;
  cout << "digite a letra a ser colocada no local" <<endl;
  cin >> letra;
  
  
for (int i = 0; i <= pos; i++) {
        if (i == pos) {
            
            palavra[i] = letra[99];
        }
  }

  cout << palavra;
}
