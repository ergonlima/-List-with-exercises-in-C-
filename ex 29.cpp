#include<iostream>
using namespace std;
int main()
{
    int n=0,x;
    for(int i=1;i<=5;i++)
    {
        cout<<"digite numero: ";
        cin>>x;

        if(x>30)
        {
            n=n+1;
        }
    }
    cout<<"qtd maior que 30: "<<n<<endl;
}
