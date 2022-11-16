#include <bits/stdc++.h>

using namespace std;
int formingMagicSquare(vector<vector<int>> s)
{
    int result = 0;
    int vsum = 0;
    vector<int> vartical,horizontal;
    int temp =0;
    int Ssum = 0;
    int Stemp=0;
    for(auto j:s){
        for(int k=0;k<j.size();k++){
            if(k==Stemp){
                Ssum += j[k];
            }
        }
        Stemp ++;
    }
    cout<<"SlantSum : "<<Ssum<<endl;
    for (auto i : s)
    {
        int hsum = 0;
        for (auto j : i)
        {
            hsum = hsum + j;
        }
        cout<<"Hsum ("<<temp+1<<"): "<<hsum<<endl;
        horizontal.push_back(hsum);
        int vsum = 0;
        for(auto j:s){
            for(int k=0;k<j.size();k++){
                vsum = vsum + j[temp];
                break;
            }
        }
        cout<<"Vsum ("<<temp+1<<"): "<<vsum<<endl;
        temp++;
        vartical.push_back(vsum);
    }
    int h,v1,v2,v3,s;
    for(int i=0;i<3;i++){
        h = horizontal[i];
        v = vartical[i];
        

    }    
    return result;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

int main()
{
    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++)
    {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++)
        {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

    cout << result << "\n";
}
