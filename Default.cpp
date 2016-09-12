#include<iostream>

using namespace std;

int add(int a, int b , int c=0) {
    int d;
    d = a + b + c;
    return d;
}


int main() {
    int u;
    u = add(10,5,10);
    cout<<u<<"\n";
    return 0;
    }