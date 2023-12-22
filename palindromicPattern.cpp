#include<iostream>
using namespace std;
int main(){
     int n;
    cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
        i--;
        if(i==1){
            cout<<"1";
            break;
        }
    }
        for(int j=1;j<=i;j++){
        cout<<i<<" ";
        i++;
        
    }
    cout<<endl;
}


    return 0;
}