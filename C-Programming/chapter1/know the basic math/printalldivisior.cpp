#include<bits/stdc++.h>
using namespace std;
void printdivisior(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
             cout << i << " ";
    }

}
}
int main(){
    int n=0;
    cin >> n;
    printdivisior(n);
    return 0;
}