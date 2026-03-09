#include<iostream>
using namespace std;
class student {
    public:
    string name;
    string branch;
    double*cgpatpr;
    student(string name,string branch,double cgpa){
    this->name=name;
    this->branch=branch;
    cgpatpr=new double;
    *cgpatpr=cgpa;

    }
    student(student &obj){
        this->name=obj.name;
        this->branch=obj.branch;
        this->cgpatpr=obj.cgpatpr;
        cgpatpr=new double;
        *cgpatpr=*obj.cgpatpr;


    }
    void getinfo(){
        cout<<"name= "<<name<<endl;
        cout<<"branch= "<<branch<<endl;
        cout<<"cgpatpr= "<<*cgpatpr<<endl;
    }


};
int main(){
    student s1("Ram","AIML",8.1);
student s2(s1);
*(s2.cgpatpr)=9.1;
s1.getinfo();
s2.name="shyam";
s2.getinfo();
return 0;
}