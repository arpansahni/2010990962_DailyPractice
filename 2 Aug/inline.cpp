#include<iostream>
using namespace std;

inline int Max(int x, int y){
    return (x>y)?x:y;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<Max(a,b);

    return 0;
}