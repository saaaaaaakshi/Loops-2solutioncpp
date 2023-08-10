/*WAP to print the sum of all the even digits of a given number.
Sample Input : 4556
Output: 10*/
#include<iostream>
using namespace std;
int main(){
    int n=4556,sum=0;
    int temp=n;
    while(n>0){
        int mod=n%10;
        if(mod%2==0){
            sum=sum+mod;
        }
        n/=10;
    }
    cout<<sum;
    return 0;
}