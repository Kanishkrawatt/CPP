#include <iostream>

using namespace std;

class Engine{
    public:
        void start(){
            cout<<"Engine Started"<<endl;
        }
        void stop(){
            cout<<"Engine Stopped"<<endl;
        }
};

class Car{
    private:
        Engine e1;
    public:
        void start(){
            e1.start();
        }
        void stop(){
            e1.stop();
        }
};


int main(){
    Car c1;
    c1.start();
    c1.stop();
}
