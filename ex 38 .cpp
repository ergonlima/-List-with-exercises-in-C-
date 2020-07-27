#include<iostream>
using namespace std;
int main()
{
    int a,i=2;
    bool primo=true;
    cout<<"digite A: ";
    cin>>a;
   while(i<a)
   {
       if(a%i==0)
       {
           primo=false;
       }
       i++;
   }if(primo==true)
   {
       cout<<"numero primo";
   }else
   {
       cout<<"numero nao primo";
   }
}
