#include<iostream>
using namespace std;
int main()
{
    int a,b,aux;
    cout<<"digite A: ";
    cin>>a;

    cout<<"digite B: ";
    cin>>b;

    aux=a;

    for(int i=2;i<=b;i++)
    {
       a=a+aux;
    }
    cout<<"multiplicacao: "<<a<<endl;
}
