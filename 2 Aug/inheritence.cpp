#include<iostream>
#include<string>
using namespace std;

class university
{
    public:
    int id;
    string name;

    university(){

    }

    university(int input)
    {
        id = input;
    }
    void disp()
    {
        if(id==1){
            name="XYZ";
        }
        else if(id==2){name="XYZ1";}
        else if(id==3){name="XYZ2";}
        else if(id==4){name="XYZ3";}
        else if(id==5){name="XYZ4";}
        else cout<<"Input invalid ID"<<endl;
        if(id<=5){
            cout<<"Person ID No: "<<id<<endl<<"Person Name: "<<name<<endl;
            }
    }

};

class student:public university{
    public:
    int semester=5;
    student(){

    }
    student(int input){
        id = input;
    }
    void disp2(){
                if(id==1 || id==4){cout<<"Semester: "<<semester<<endl;}
                else  {cout<<"Person is not a Student"<<endl;}

    }

    };

class faculty:public university{
     public:
    string designation;
    faculty(){

    }
    faculty(int input){
        id = input;
    }
    void disp2(){
        if(id==2){designation="head";}
        else if(id==5){designation="junior";}
        else cout<<"Input invalid ID"<<endl;
        if(id==1 || id==5){
            cout<<"faculty ID No: "<<id<<endl<<"faculty designation: "<<designation<<endl;
            }

    }
 
};


class football:public student , public faculty{
    public:
    football(int input){
        semester = input;
    }
    void disp4(){
    if(semester == 2 ||  semester == 5){cout<<"They play football";}
    else{cout<<"They do not play football";}
    }
};




int main(){
    university u(4);
    student s(4);
    faculty f(5);
    football a(5);
    u.disp();
    s.disp2();
    f.disp2();
    a.disp4();


    return 0;
}