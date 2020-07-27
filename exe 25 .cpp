#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
    int maior,aux,maior2;

    cout<<"digite um numero : ";
    cin>>maior;

    cout<<"digite um numero : ";
    cin>>aux;


    if(maior>=aux)
    {
        maior2=aux;
    }
    else if(aux>=maior)
    {
        maior=aux;
        maior2=maior;
    }
    for(int i=1; i<=8; i++)
    {
        cout<<"digite um numero : ";
        cin>>aux;

        if(aux>=maior2)
        {
            if(aux>maior)
            {
                maior2=maior;
                maior=aux;
            }
            else
                maior2=aux;
        }
    }cout<<"maior: "<<maior<<endl;
    cout<<"segundo maior: "<<maior2<<endl;



}

