#include<iostream>
using namespace std;
void printpattern(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        for (int j=1;j<=n-1;j++){
            cout<<" ";
        }
        cout<<endl;
       
    }
   
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    printpattern(n);
    return 0;
}