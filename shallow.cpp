#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    double*cgpaptr;
    student(string name,double cgpa){
        this->name=name;
        cgpaptr= new double;
        *cgpaptr=cgpa;

    }
    student(student&obj){
        this->name=obj.name;
        this->cgpaptr=obj.cgpaptr;
    }
    void getinfo(){
        cout<<name<<endl;
        cout<<*cgpaptr<<endl;
    }
};
int main(){
    student s1("ram",8.0);
    student s2(s1);
    s1.getinfo();
    *(s2.cgpaptr)=9.2;
    s1.getinfo();

return 0;
}