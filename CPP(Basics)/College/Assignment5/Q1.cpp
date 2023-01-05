// wap the use of object as function arguments in pass by value machanism it perform the addition of distance in feet and inches format
#include <iostream>
using namespace std;
class Distance{
public:
    int Feet, Inches;
    void Addition(Distance d1, Distance d2){
        Feet = d1.Feet + d2.Feet;
        Inches = d1.Inches + d2.Inches;
        if(d1.Inches+d2.Inches>=12){
            Inches = Inches%12;}
        Feet = Feet + (d1.Inches+d2.Inches)/12;}
    void Show(){
        cout<<Feet<<" Feet and "<<Inches<<" Inches "<<endl;}
    void Enter(){
        cout << "Enter the Distance in Feet : ";
        cin >> Feet;
        cout << "Enter the Distance in Inches : ";
        cin >> Inches;}};
int main(){
    Distance d1, d2, d3;
    d1.Enter();
    d2.Enter();
    d3.Addition(d1,d2);
    d3.Show();
    return 0;}
