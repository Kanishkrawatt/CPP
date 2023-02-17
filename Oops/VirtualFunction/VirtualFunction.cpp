# include <iostream>
using namespace std;

// class Base{
//     public:
//         void display(){
//             cout<< "Base class";
//         }
// };

// class derived : public Base {
//     public:
//         void display(){
//             cout<<"Derived Class";
//         }
// } ;

// int main(){
//     Base *bscp;
//     derived d1;
//     bscp = &d1;
//     bscp->display();
// }

//  Output is Base class to  fix this we use Virtual function

class Base{
    public:
        virtual void display(){
            cout<< "Base class";
        }
};

class derived : public Base {
    public:
        void display(){
            cout<<"Derived Class";
        }
} ;

int main(){
    Base *bscp;
    derived d1;
    bscp = &d1;
    bscp->display();
}

//  Output is Derived class