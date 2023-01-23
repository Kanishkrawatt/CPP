#include <iostream>
using namespace std;
class publication{
    public:
        std::string title;
        float price;
        void getData(){
            std::cout<<"Enter title : ";
            std::cin>>title;
            std::cout<<"Enter price : ";
            std::cin>>price;
        }
        void display(){
            std::cout<<"Title : "<<title<<std::endl;
            std::cout<<"Price : "<<price<<std::endl;
        }
};
class sales {
    public:
        float sales[3];
        void getSales(){
            std::cout<<"Enter sales of 3 months : "<<std::endl;
            for(int i=0; i<3; i++){
                std::cin>>sales[i];
            }
        }
        void display(){
            std::cout<<"Sales of 3 months : "<<std::endl;
            for(int i=0; i<3; i++){
                std::cout<<sales[i]<<std::endl;
            }
        }
};

class book : public publication, public sales{
    public:
        int pages;
        void getBook(){
            getData();
            getSales();
            std::cout<<"Enter pages : ";
            std::cin>>pages;
        }
        void display(){
            publication::display();
            sales::display();
            std::cout<<"Pages : "<<pages<<std::endl;
        }
};
class tape : public publication, public sales{
    public:
        float time;
        void getTape(){
            getData();
            getSales();
            std::cout<<"Enter time : ";
            std::cin>>time;
        }
        void display(){
            publication::display();
            sales::display();
            std::cout<<"Time : "<<time<<std::endl;
        }
};

class pamphlet:public publication{
    public:
    void getdata()
    {
        publication::getData();
    }
    void putdata()
    {
        publication::display();
    }
};
class notice:public pamphlet{
    string whom;
    public:
    void getdata()
    {
        pamphlet::getdata();
        cout<<"Enter whom: ";
        cin>>whom;
    }
    void putdata()
    {
        pamphlet::putdata();
        cout<<"Whom: "<<whom<<endl;
    }
};
int main(){
    book B1;
    cout<<"Book"<<endl;
    B1.getBook();
    B1.display();
    tape T1;
    cout<<"Tape"<<endl;
    T1.getTape();
    T1.display();
    notice N1;
    cout<<"Notice"<<endl;
    N1.getdata();
    N1.putdata();
    return 0;
}

