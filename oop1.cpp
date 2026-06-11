//TYPE 1ST NON PARAMETERIZED
// #include <iostream>
// #include <string>

// using namespace std;

// class Teacher {
//     public: 
//            Teacher() {
//             cout<<"hii everyone,i am non parameterized constructor";
//            }
//     public:

//         string name;

           
// };

// int main(){
//     Teacher t1;
      
//     t1.name = "ashish";

//     cout<<t1.name<<endl;

    

//     return 0;
// }



//TYPE 2 PARAMETERIZED

#include <iostream>
#include <string>

using namespace std;

class Teacher {
public:
    string name;
    string dept;

    // Parameterized Constructor
    Teacher(string n, string d) {
        name = n;
        dept = d;
    }
};

int main() {
    Teacher t1("Ashish", "CSE");

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;

    return 0;
}