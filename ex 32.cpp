#include<iostream>
using namespace std;
int main()

{
    float a,b,aux;

    cout<<"digite de A: ";
    cin>>a;

    cout<<"digite B: ";
    cin>>b;

    aux=a;

    for(int i=2;i<=b;i++)
    {
        a=aux*a;


    }
    cout<<"igual a: "<<a<<endl;
}
