#include<iostream>
using namespace std;


inline int add(int a, int b){
    return(a+b);
}


int main() {
    int d,e,c;
    cout<<"Enter First Value : \n";
    cin>>d;
    cout<<"Enter Second Value : \n";
    cin>>e;
   c = add(d, e);
   cout<<"Addition : "<<c<<endl;
   return 0;
}