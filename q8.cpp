/*
Print first ‘n’ fibonacci numbers.
Sample Input : 10
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value:";
    cin>>n;
    int a=1,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;

    }
}