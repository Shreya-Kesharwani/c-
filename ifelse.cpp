#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if(savings>5000){
        if(savings>7000){
            cout<<"roadtrip with Neha\n";
        }else{
            cout<<"Shopping with Neha\n";
        }
    }
    else if(savings>2000){
        cout<<"Rashmi\n";
    }
    else{
        cout<<"friends\n";
    }
    return 0;
}