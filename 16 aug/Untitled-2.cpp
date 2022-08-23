#include<iostream>
using namespace std;

int main(){
    try
    {
        int*ptr = new int(10000000);

    }
    catch(exception& e)
    {
        cout<< e.what()<< "\nexception Occured\n";
    }
    return 0;
    
}