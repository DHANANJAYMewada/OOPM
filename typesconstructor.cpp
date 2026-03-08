#include<iostream>
using namespace std;
class typesconstructor
{
private:
double salary;
public:
// non parameterized constructor
typesconstructor(){
    salary=0;
}
// parameterized constructor
typesconstructor(double s){
    salary=s;

}
double getsalary(){
    return salary;
}
};




int main(){
    typesconstructor t1;
    cout<<"salary"<<t1.getsalary()<<endl;
    typesconstructor t2(5000);
    cout<<"salary"<<t2.getsalary()<<endl;
    // copy constructor
    typesconstructor t3=t2;
    cout<<"salary"<<t3.getsalary()<<endl;
    


return 0;
}