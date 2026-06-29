#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int orig =n;
    int sum =0;
    while(n >0){
        int lastdigit = n%10;
        sum = sum+(lastdigit*lastdigit*lastdigit);
        n = n/10;
    }
    if(sum == orig){
        cout << "Armstrong";
    }else{
        cout << "Not Armstrong";
    }
    return 0;
}
