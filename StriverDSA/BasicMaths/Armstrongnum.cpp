#include<iostream>
using namespace std;
int main(){

   int n;
   cout<<"Enter a number: ";
    cin>>n;
    int dummy=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==dummy){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}