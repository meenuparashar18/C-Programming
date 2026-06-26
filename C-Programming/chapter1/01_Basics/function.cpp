#include<bits/stdc++.h>
using namespace std;

    //function are  set of code which performs something for u
    //function are used to modularies code
    //function are used to increse readbility
    // function are used to same code multiple times
    //void function -> its doesnt return enything 
    //return
    //parameterised function
    //non parameterised function

//     void printname(){
//         cout <<"Hey Meenu";
//     }
// int main(){
//     printname();

//     return 0;
// }




// add of two number using function

// void twonumber(int number1 , int number2){
//     cout <<"Enter one number ; " << "Enter second number : " << endl;
// }
//     int main(){
//         int number1;
//         int number2;
//         cin >> number1 >> number2;
//             cout <<"Sum of two number is : " << number1 + number2 << endl;
//          twonumber(number1 , number2);

//         return 0;
//     }


//minimum of two number using function
// int minimum(int num1 , int num2){
//     if(num1 >= num2)return num1;
//     else return num2;
//     //agr ham else condition ka use na kre to bhi run krrega pr garwage value dega
//     }

// int main(){
//     int num1 , num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1 , num2);
//     cout << minimum << endl;
//     return 0;
// }   


void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 10;
    cout << num << endl;
}
int main(){
    int num = 10;
    doSomething(num);
    return 0;
}

//when i written in this code doSomething(num) 
// and cout << numm <endl the value is also printed 10 
//whyyy because this is a passed by value'