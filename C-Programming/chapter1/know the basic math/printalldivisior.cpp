#include<bits/stdc++.h>
using namespace std;
//time complexity is O(n);

// void printdivisior(int n){
//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//              cout << i << " ";
//     }

// }
// }
// int main(){
//     int n=0;
//     cin >> n;
//     printdivisior(n);
//     return 0;
// }

//2nd method reduce the time complexity
void printdivisior(int n){
    vector<int>ls;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            ls.push_back(i);
        }
        if((n/i)!=i){
            ls.push_back(n/i);
        }
    }

//sorting the list
sort(ls.begin(),ls.end());
for(auto it : ls)
cout << it << " ";
}
int main(){
    int n;
    cin >> n;
    printdivisior(n);
}
