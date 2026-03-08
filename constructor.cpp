#include<iostream>
using namespace std;
class constructor{
    private:
    double salary;
    public:
    constructor(double s){
        salary =s;

    }
    double getsalary(){
        return salary;

    }

};


int main(){
    constructor c1(500);
    cout<<"salary"<<c1.getsalary()<<endl;
    


return 0;
}