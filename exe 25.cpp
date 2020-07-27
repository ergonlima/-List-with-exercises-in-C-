#include<iostream>
#include<stdlib.h>
using namespace std;
int main ()
{
    int maior,maior2,aux;
    cout<<"digite um numero: ";
    cin>>maior;
    cout<<"digite un numero: ";
    cin>>aux;

    if(maior>=aux)
    {
        maior2=aux;
    }
    else if(aux>maior)
    {
        maior2=maior;
        maior=aux;
    }
    for(int i=1;i<=8;i++)
    {
        cout<<"digite um numero: ";
        cin>>aux;

        if(aux>=maior2)
        {
            if(aux>=maior)
            {
                maior2=maior;
                maior=aux;
            }else
                {
                    maior2=aux;
                }
        }

    }cout<<"maior: "<<maior<<endl;
    cout<<"segundo maior: "<<maior2<<endl;
}
