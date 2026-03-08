#include<iostream>
using namespace std;
class teacher{
    private:
    double salary;
     public:
    double setsalary(double s){
        salary=s;

    }
    double getsalary(){
        return salary;

    }
};
int main(){
    teacher t1;
   t1.setsalary(5000);
   cout<<"salary"<<t1.getsalary()<<endl;


return 0;
}