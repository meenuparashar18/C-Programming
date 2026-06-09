#include<bits/stdc++.h>
using namespace std;    
int main(){
   // Take the day no and print the corrosponding day name
   // for  1 - print  Monday
    // for  2 - print Tuesday 
     int day;
     cin >> day;
     switch(day){
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        default:
        cout << "Invalid day";
     }
     cout << "check"; 
    return 0;
}