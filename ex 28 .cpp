#include<iostream>
using namespace std;
int main()
{
    int n=0,m=0,x;
    for(int i=1; i<=10;i++)
    {//*n=qtd de numeros pares;m=qtd de numeros impares;
          cout<<"digite um numero: ";
          cin>>x;

          if(x%2==0)
          {
            n=n+1;
          }
          else if(x%2!=0)
          {
            m=m+1;
          }

    }cout<<"qtd pares: "<<n<<endl;
    cout<<"qtd de impares: "<<m<<endl;
}
