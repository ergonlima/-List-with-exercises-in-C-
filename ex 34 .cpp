#include<iostream>
using namespace std;
int main()
{
    int a,b,i=0;
    cout<<"digite A: ";
    cin>>a;
    cout<<"digite B: ";
    cin>>b;

   while(a>=b)
     {
        a=a-b;
    i++;
     }
     cout<<i;

}

