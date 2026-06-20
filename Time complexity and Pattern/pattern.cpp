//Ques1----------------------------------------------------------------------
/*
****
****
****
****
*/

#include<bits/stdtr1c++.h>
using namespace std;
// void print1(){
//     for(int i =0; i<4; i++){
//         for(int j=0; j<4; j++){
//             cout <<"* ";
//         }
//         cout <<endl;
//     }
// }
//     int main(){
//         print1();
//     }
 //---------------------------------------------------------------------------------------------
//same ques by user input
// void print1(int n){
//     for(int i=1; i<4; i++){
//         for(int j=1; j<4; j++){
//             cout << "*";

//         }
//         cout <<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print1(n);
// }


//Ques2---------------------------------------------------------------
/*
*
**
***
****
*/
//normal function

// void print2(int n){
//     for(int i=1; i <= n; i++){
//         for(int j=1; j<=i;  j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print2(4);
// }
//--------------------------------------------------------------------------------------------
//same ques by user input 
// void print2(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >>n;
//     print2(n);
// }


//ques3-----------------------------------------------
/*
1
12
123
1234
12345
    */
   ///nrmal 
//    void print3(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//    }
//    int main(){
//     print3(5);
//    }
//-------------------------------------------------
//user input 
// void print3(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j << "";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     print3(n);
// }



//Ques-4------------------------------------------------------------------------------------
/*
1
2 2
3 3 3 
4 4 4 4
5 5 5 5 5
*/
//normal solution
// void print4(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print4(5);
// }

//user input-----------------------------------------
// void print4(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << i << " ";

//         }
//         cout <<endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     print4(n);
// }


//Ques5---------------------------------------------------------
/*
*****
****
***
**
*
*/
// void print5(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print5(5);
// }


//user input
// void print5(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >>n;
//     print5(n);
// }

//ques6-------------------------------------------------------------
/*
  12345
  1234
  123
  12
  1
*/
//normal ans
// void print6(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout << j <<"";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     print6(5);
// }

//user input--------------------------------------------------------------------
// void print6(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout << j <<"";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >>n;
//     print6(n);
// }

//Ques-7----------------------------------------------------------
/*
*
***
*****
*******
*********
*/
// void print7(int n){
//     for(int i=0; i<n; i++){
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         //star
//         for(int j=0; j<2*i+1; j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         cout <<endl;

//     }
// }

// int main(){
//     print7(5);
// }


//user input---------------------------------------------------------- 
// void print7(int n){
//     for(int i=0; i<n; i++){
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         //star
//         for(int j=0; j<2*i+1; j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         cout <<endl;

//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     print7(n);
// }


//Ques8----------------------------------------------------------------
/*
*********
*******
*****
***
*
*/

// void print8(int n){
//     for(int i=0; i<n; i++){
// //space
// for(int j=0; j<i; j++){
//     cout<< " ";
// }
// //star
// for(int j=0; j<2*n-(2*i+1); j++){
//     cout << "*";
// }
// for(int j=0; j<i; j++){
//     cout<< " ";
// }
// cout <<endl;
//     }
// //
//     }
//     int main(){
//         print8(5);
//     }

//user input-------------------------------------------------------------
// void print8(int n){
//     for(int i=0; i<n; i++){
// //space
// for(int j=0; j<i; j++){
//     cout<< " ";
// }
// //star
// for(int j=0; j<2*n-(2*i+1); j++){
//     cout << "*";
// }
// for(int j=0; j<i; j++){
//     cout<< " ";
// }
// cout <<endl;
//     }
//     }
// int main(){
//     int n;
//     cin >>n;
//     print8(n);
// }

//QUES9-------------------------------------
/*
*
***
*****
*******
*********
*********
*******
*****
***
*
//Apporach its combine pattern of 8 and 9 so merge the both coded 

*/

//normal
void print7(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout <<endl;

    }
}
void print8(int n){
    for(int i=0; i<n; i++){
//space
for(int j=0; j<i; j++){
    cout<< " ";
}
//star
for(int j=0; j<2*n-(2*i+1); j++){
    cout << "*";
}
for(int j=0; j<i; j++){
    cout<< " ";
}
cout <<endl;
    }
//
    }
    int main(){
        print7(5);
         print8(5);
    }
