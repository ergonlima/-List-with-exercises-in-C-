#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    bool primo=true;
    cout<<"digite A: ";
    cin>>a;
    cout<<"digite B: ";
    cin>>b;
    for(i=a-1;i>1;i--)
    {
        if(a%i==0)
        {
            if(b%i==0)
            {
                cout<<"nao sao primos entre si";
                primo=false;
            }
        }

    } if(primo=true)
        {
            cout<<"primos entre si";
        }
}
