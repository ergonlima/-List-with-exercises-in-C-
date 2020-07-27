#include<iostream>
using namespace std;
int main()
{
    int a,b,aux;
    cout<<"digite A: ";
    cin>>a;
    cout<<"digite B: ";
    cin>>b;

        aux=a/b;

    for(int i=1; i<=aux; i++)
    {
        a=a-b;

    }
    cout<<"resto: "<<a<<endl;


}
