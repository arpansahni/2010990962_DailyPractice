#include<iostream>
using namespace std;

class rectangle{
    int base , length;
    public:
    rectangle(int a, int b){
        base = a;
        length = b;
    }
    void area(){
        cout<<"area: "<<base*length<<endl;
    }
};







class triangle{
int base , height;
public:

triangle(){
    base=0;
    height=0;
}


triangle(int b){
    base = b;
    height = b/2;
}
void disp(){
    cout<<"Base is: "<<base<<" "<<"Height is: "<<height<<endl;
}

operator rectangle(){
    rectangle temp(base,height);
    return temp;
}
};

int main(){
    triangle t,y;
    t = 50;
    t.disp();
    y=t;
    rectangle r=t;
    r.area();
    

    return 0;
}