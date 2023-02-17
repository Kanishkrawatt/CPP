# include <iostream>
# include <fstream>
using namespace std;

int main(){
    ifstream file("text.txt");
    char ch;
    // file.get(ch);//charater by character
    // cout<<ch;
    // file.close();

    while (file.eof()==0)
    {
        file.get(ch);
        cout<<ch;
    }
    file.close();
}
