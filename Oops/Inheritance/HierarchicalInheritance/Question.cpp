#include <iostream>
using namespace std;
class Vehicle{
public:
    int topSpeed;
    Vehicle(){
        topSpeed = 0;}
    Vehicle(int a){
        topSpeed = a;}
    void getTopSpeed(){
        cout << topSpeed << endl;}};
class HeavyMotor : public Vehicle{
public:
    HeavyMotor(){}
    HeavyMotor(int a) : Vehicle(a){}
    void getMotorType(){
        cout << "MotorType : Heavy Motor" << endl;}};
class LightMotor : public Vehicle{
public:
    LightMotor(){}
    LightMotor(int a) : Vehicle(a){}
    void getMotorType(){
        cout << "MotorType : LightMotor" << endl;}};
class Passenger : public HeavyMotor{
public:
    Passenger(){ }
    Passenger(int a) : HeavyMotor(a){}
    void getPourpose(){
        cout << "Purpose : For Passenger" << endl;}};
class Goods : public HeavyMotor{
public:
    Goods(){}
    Goods(int a) : HeavyMotor(a){}
    void getPurpose(){
        cout << "Purpose : For Goods" << endl;}};
class Gear : public LightMotor{
public:
    Gear() {}
    Gear(int a) : LightMotor(a){}
    void getCategory(){
        cout << "Category :  Gear" << endl; }};
class NonGear : public LightMotor{
public:
    NonGear() {}
    NonGear(int a) : LightMotor(a){}
    void getCategory(){
        cout << "Category :  Non Gear" << endl;}};
int main(){
    Gear v1(10);
    v1.getCategory();
    v1.getMotorType();
    v1.getTopSpeed();
    Passenger p1(8);
    p1.getPourpose();
    p1.getMotorType();
    p1.getTopSpeed();}