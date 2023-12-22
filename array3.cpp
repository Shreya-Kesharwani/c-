#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cin>>array[i];
}
int maxNo=INT_MIn;
int minNo=INT_Max;
for(int i=0;i<n;i++){
    if(array[i]>maxNo){
        maxNo=array[i];
    }
    if(array[i]<minNo){
        minNo=arr[i];
    }
}
    return 0;
}