#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/* Overloading * operator */
string operator * (string a, unsigned int b) {
    string output = "";
    while (b--) {
        output += a;
    }
    return output;
}

bool is_prime(long long num){
        long long r = sqrt(num);
      if (num <= 1) {
        cout << "NO\n";
        return false;
    }else if (num == 2){
        cout << "YES\n";
        return true;
    }else if (num % 2 == 0){
            cout << "NO\n";
        return false;
    }else{
        for(int i = 3; i <= r; i = i + 2){
            if (num % i == 0){
                    cout << "NO\n";
                return false;
            }
        }
    }

    cout << "YES\n";
    return true;
}

int main(){
    int n;
    cin >> n;
    string m[n][2];
    for(int i = 0; i < n; i++){
        cin >> m[i][0] >> m[i][1];
    }

    for(int i = 0; i < n; i++){
            if ((m[i][0]*stoi(m[i][1])).length() > 18) {
            cout << "NO\n";
            continue;
        }
        is_prime(stoll(m[i][0]*stoi(m[i][1])));
    }
    return 0;
}
