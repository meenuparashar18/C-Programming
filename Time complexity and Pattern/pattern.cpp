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
//         print7(5);
//          print8(5);
//     }


//Ques-10--------------------------------
/*
*
**
***
****
*****
****
***
**
*
*/
//normal-----------------------------------------------
// void print10(int n){
//     for(int i=1; i<=2*n-1; i++){
//      int stars = i;
//      if(i >n ) stars = 2*n - i;
//      for(int j=1; j<=stars; j++){
//         cout<< "*";
//      }
//      cout << endl;
//     }
// }
// int main() {
//  int t;
//  cin >> t;
//  for(int i=0; i<t; i++){
//     int n;
//     cin >> n;
//     print10(n);
//  }
// }

/*\
Ques11----------------------------------------------------------
1
10
101
0101
10101
*/
//user input-------------------------------------
// void print11(int n){
//     for(int i=0; i<n; i++){
//         int start =1;
//         if(i %2 ==0)start =1;
//         else start =0;
//         for(int j=0; j<=i; j++){
//             cout << start <<  " ";
//             start = 1-start;

//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     print11(5);
// }

/*
Ques`12----------------------------------------------------------------------------
1       1
12     21
123   321
12344321
*/

// void pattern(int n) {
//     for(int i = 1; i <= n; i++) {
        
//         // increasing numbers
//         for(int j = 1; j <= i; j++) {
//             cout << j;
//         }

//         // spaces
//         for(int j = 1; j <= 2 * (n - i); j++) {
//             cout << " ";
//         }

//         // decreasing numbers
//         for(int j = i; j >= 1; j--) {
//             cout << j;
//         }

//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     pattern(n);
//     return 0;
// }
//Ques13------------------------------------------------------------------
/*
1
2  3
4  5  6
7  8  9  10
11 12 13 14 15
*/
// void print13(int n){
//     int num = 1;
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             cout << num << " ";
//             num = num + 1;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int n;
//     cin >>n;
//     print13(n);
// }

//Ques14-------------------------------------------------------------------
/*
A
AB
ABC
ABCD
ABCDE
*/
// void print14(int n){
//     for(int i=0; i<=n; i++){
//         for(char ch= 'A'; ch <='A'+i; ch++){
//             cout << ch << " ";
//         }
//             cout << endl;

//         }
//     }
// int main(){
//     print14(5);
// }


///Ques15---------------------------------------------------------------
/*
ABCDE
ABCD
ABC
AB
A
*/
// void print15(int n){
//     for(int i=0; i<=n; i++){
//         for(char ch ='A'; ch <= 'A' +(n-i-1); ch++){
//             cout <<ch << " ";

//         }
//         cout <<endl;
//     }
// }
// int main(){
//     print15(5);
// }

//Ques16--------------------------------------------------------------------
/*
A
BB
CCC
DDDD
EEEEE
*/

// void print16(int n){
//     for(int i=0; i<=n; i++){
//         char ch = 'A'+i;
//         for(int j=0; j<=i; j++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
// int main(){
//     print16(5);
// }



//Ques17----------------------------------------------------------------------
/*
A
ABA
ABCBA
ABCDCBA
*/

// void print17(int n){
//     for(int i=0; i<n; i++){
//         //spaces
// for(int j=0; j<n-i-1; j++){
//     cout << " ";
// }
//     //char
//     char ch = 'A';
//     int breakpoint = (2*i+1) / 2;
//     for(int j=1; j<= 2*i +1; j++){
//         cout << ch;
//         if(j <= breakpoint) ch++;
//         else ch--;
//     }
//     for(int j=0; j<n-i-1; j++){
//     cout << " ";
// }
// cout << endl;

// }
//     }
//     int main(){
//         print17(5);
//     }


//Ques18-------------------------------------------------------------
/*
E
DE
CDE
BCDE
ABCDE
*/

// void print18(int n){
//     for(int i=0; i<n; i++){
// for(char ch= 'E' -i; ch <= 'E'; ch++){
//     cout << ch <<" ";
// }
// cout << endl;
//     } 

// }
// int main(){
//     print18(5);
// }


//Ques19-------------------------------------------------------------------
/*
**********
****  ****
***    ***
**      **
*       *
*       *
**      **
***     ***
****    ****
**********
*/
//stars
//space
//star
void print19(int n){
    //upper 
    int inis = 0;
    for(int i =0; i<n; i++){
    //star
    for(int j=1; j<=n-i; j++){
        cout << "*";
    }
    //space
    for(int j=0; j<inis; j++){
        cout << " ";
    }
    //star
    for(int j=1; j<=n-i; j++){
        cout << "*";
}
inis += 2;
cout << endl;

    }
    //lower
    inis = 8;
    for(int i=0; i<=n; i++){
           //star
    for(int j=1; j<=i; j++){
        cout << "*";
    }
    //space
    for(int j=0; j<inis; j++){
        cout << " ";
    }
    //star
    for(int j=1; j<=i; j++){
        cout << "*";
}
inis -= 2;
cout << endl;
    }
}

int main(){
    print19(5);
}

