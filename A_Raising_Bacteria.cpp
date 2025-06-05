#include <iostream>
//TEST 4
using namespace std;
int main(){
    int long long x;
    int count = 0;
    cin >> x;
    if (x == 0){
        cout << "0";
        exit(0);
    }
    
    int i = 1;
    while(i <= x){
        i *=2;
    }
    i /= 2;
    while((i + count) != x){
        count++;
    }

    cout << count+1;
}
