#include <bits/stdc++.h>
    using namespace std;
    int * CostToArray(int * arr,int cost,int size){
        int newarr[50];
        
        return newarr;
    }
    int main(){
        #ifndef ONLINE_JUDGE
            freopen("in.txt","r",stdin);
            freopen("out.txt","w",stdout);
        #endif
    
        std::ios::sync_with_stdio(false);
        
        int Cases;
        cin >> Cases;
        for(int i=1;i<=Cases;i++){
            int SizeofList;
            int & n = SizeofList;
            int Cost;
            cin >> SizeofList;
            cin >> Cost;

            if(Cost< n-1 || (n*(n+1))/2-1< Cost) {
                cout << "Case #"<< i<< ": IMPOSSIBLE"<<endl;
            }
            else{
                if(Cost ==(n*(n+1))/2-1){
                    int arr[50];
                    string str=" ";
                    for(int j=0;j<int(n/2);j++){
                        arr[j] = (j+1)*2;
                    }

                    for(int j=n-1,m=1;j>=int(n/2);j--,m+=2){
                        arr[j] = m;
                    }
                    for(int j=0;j<n;j++){
                        str = str+to_string(arr[j])+" ";
                    }
                    cout << "Case #"<<i<<":"<<str<<endl;
                }
                else if(Cost == (n-1)){
                    string str=" ";
                    for(int j =0;j<n;j++){ 
                        str = str+to_string(j+1)+" ";
                    }
                    cout << "Case #"<<i<<":"<<str<<endl;
                }
                else{
                    int arr[50];
                    for(int j=0;j<n;j++){
                        arr[j] = j+1;
                    }
                    int newarr[50] = CostToArray();
                    cout << "Else Case"<< endl;
                }
            }
        }
    }