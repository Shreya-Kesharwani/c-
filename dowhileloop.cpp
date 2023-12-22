#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number"<<endl;

   cin>>n;
   do{
    cout<<n<<endl;
    cout<<"Enter another number"<<endl;
    cin>>n;
   }
   while(n>0);

    return 0;
}