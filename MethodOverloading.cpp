#include<iostream>

using namespace std;

int add(int a , int b){
    return(a+b);
}
int add(int a , int b ,int c){
    return(a+b+c);
}
double add(double a , double b ,double c){
    return(a+b+c);
}
int main() {
     int a,d,e,c,f,q;
     double w,x,y,z;
     do {
     cout<< "Press 1 To Add Two Integers \n Press 2 To Add Three Integers \n Press 3 To Add Three decimals \n";
     cin>>a;
     switch(a) {
         case 1: 
          cout<<"Enter First Value : \n";
          cin>>d;
          cout<<"Enter Second Value : \n";
          cin>>e;
          c = add(d, e);

         cout<<"Addition : "<<c<<endl;
         break;
        case 2:
          cout<<"Enter First Value : \n";
          cin>>d;
          cout<<"Enter Second Value : \n";
          cin>>e;
          cout<<"Enter Third Value : \n";
          cin>>f;
          c = add(d, e, f);

          cout<<"Addition : "<<c<<endl;
          break;
          case 3: 
          cout<<"Enter First Value : \n";
          cin>>x;
          cout<<"Enter Second Value : \n";
          cin>>y;
          cout<<"Enter Third Value : \n";
          cin>>z;
          w = add(x, y, z);

          cout<<"Addition : "<<w<<endl;
          break;
          default:
          cout<<"INVALID SELECTION";
     }
     cout<<"Press 1 To Continue \n Press Any Key To EXIT \n";
     cin>>q;
     }while(q == 1);
   return 0;
}