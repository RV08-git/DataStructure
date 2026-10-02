#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter a number: ";   
    cin>>n;
    int dummy=n;
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
    if (rev==dummy){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}