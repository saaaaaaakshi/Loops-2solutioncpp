/*
Print the factorials of first ‘n’ numbers
Sample Input : 10
*/
#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter value:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<i<<"!="<<fact<<endl;
    }
}

