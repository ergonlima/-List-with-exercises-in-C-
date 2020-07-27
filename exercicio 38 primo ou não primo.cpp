#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    bool primo=true ;

    cout<<"digite n: ";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
    {
        primo=false;
    }
    }
    if(primo)
    {
        cout<<"eh primo";
    }
    else
        cout<<"nao eh primo";
}
