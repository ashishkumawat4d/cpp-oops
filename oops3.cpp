//ENCAPSULATION : Encapsulation is the process of hiding data and allowing access to it only through public member functions.

#include <iostream>
#include <string>

using namespace std;

class Teacher{

     private:
           double salary;
    public:

           string name;
           string dept;
           string subject;

void setSalary(double newSalary) {
     salary = newSalary;
}

double getSalary(){
    return salary;
}


};

int main(){
    Teacher t1;
    t1.name = "ashish";
    t1.dept = "science";
    t1.subject = "cse";

    t1.setSalary(23423);

    cout<<"name :"<<t1.name<<endl;
    cout<<"subject :"<<t1.subject<<endl;
    cout<<t1.getSalary()<<endl;
    

    return 0;
}