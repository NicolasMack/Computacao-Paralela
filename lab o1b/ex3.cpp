#include <iostream>
using namespace std;

int main() {
  int x, i, j;

  cout << "Digite um numero impar para ser o maximo do triangulo:\n";
  cin >> x;
  
  for( i = 0; i<= (x / 2) + 1; i++)
        {
            for ( j = i+1 ; j <= x - i; j++ )
            {
                cout <<j;
            }
            cout << endl;

            for ( j = 0; j < (i + 1); j++ )
              cout<<" ";
          }    
}
