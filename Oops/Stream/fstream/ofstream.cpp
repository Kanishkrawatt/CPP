# include <iostream>
# include <fstream>

using namespace std;

int main(){
    ofstream file("text.txt");
    // file.put('A'); //charater by character
    file<<"Hello World";
    file.write("Hello World", 11);
    file.close();
}
