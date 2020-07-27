#include<iostream>
using namespace std;
int main()
{
    int aux=0,a,z;
    cout<<"digite o inicio do intervalo: ";
    cin>>a;

    cout<<"digite o fim do intervalo: ";
    cin>>z;

    for(int i=a+1;i<z;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
            aux=i+aux;
        }
    }
    cout<<"somatorio: "<<aux<<endl;
}
