#include <iostream>
using namespace std;
class Default_Constructor{
    public:
        int num;
        Default_Constructor(){
            num = 10;
        }
};
int main(){
    Default_Constructor D1;
    cout<<D1.num;
}