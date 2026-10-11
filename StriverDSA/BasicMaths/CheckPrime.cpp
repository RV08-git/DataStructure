#include<iostream>
using namespace std;
void checkprime(int n){
    int count = 0;
    for (int i=1; i*i<=n;i++){
        if(n%i==0){
            count++;
        }
        if((n/i)!=i)
        count++;
    }
    if(count==2){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    checkprime(n);
    return 0;
}