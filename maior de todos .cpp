#include<iostream>
#include<stdlib.h>

using namespace std;
 int main (){
 float a,b,c,d;

    cout<<"digite A:";
    cin>>a;
    system("cls");

    cout<<"digite B:";
    cin>>b;
    system("cls");

    cout<<"digite C:";
    cin>>c;
    system("cls");

    cout<<"digite D:";
    cin>>a;
    system("cls");

        if(a>=b && a>=c){
            cout<<a<<"(A)eh o maior";
        }else if(b>=a && b>=c){
            cout<<b<<"(b)eh o maior";
        }else if(c>=b && c>=a){
            cout<<c<<"(c)eh o maior";
        }
