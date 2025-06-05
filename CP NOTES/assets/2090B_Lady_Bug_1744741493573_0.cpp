// https://codeforces.com/problemset/problem/2092/B
#include <iostream>

using namespace std;

int main(){

    //taking input
    int t;
    cin >> t;
    int n[t];
    int m;
    string a,b;
    string s[t][2];
    for(int i = 0; i < t; i++){
        cin >> n[i] >> s[i][0] >> s[i][1];
        }

    //Solving problem
    for(int i = 0; i < t;i++){
        m = n[i];
        a = s[i][0];
        b = s[i][1];
        bool k = false;
        bool o = true;
        for(int j = 0; j < m; j++){
            if (a[j]=='1'){
                o = false;
            }
        }
        if(o){
            cout << "YES\n";
            continue;
        }
        for(int j = 0; j < m; j++){
            if(j == 0){if(a[j]== '1' && (b[j+1]==0)){
               k = true;
            }}else{
                if(a[j]== '1' && (b[j-1]==0||b[j+1]==0)){
                k = true;
                }
            }

        }
        if(k){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
