/* WAP to print the sum of a given number and its reverse.
Sample Input : 12
Sample Output : 33 [12+21]*/

#include<iostream>
using namespace std;
int main(){
    int n,temp,rev=0,sum;
    cin>>n;
    temp=n;
    while(n>0){
        int mod=n%10;
        rev=rev*10+mod;
        n/=10;
    }
    sum=temp+rev;
    cout<<sum;
}