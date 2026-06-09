#include<bits/stdc++.h>
using namespace std;
int main(){
    // int age;
    // cin >> age;
    // if(age >= 18){
    //     cout << "You are adult";
    // }
    // else{
    //     cout << "you are not adult";
    // }




/*
A school has following rules for granding system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 and 100 - A
Ask user to ennter marks and print the corrosponding grade;     
*/
//int marks;
// cin >> marks;
// if(marks <25){
//     cout << "F";
// }
// else if(marks >= 25 && marks <=44){
//     cout << "E";
// }
// else if(marks >= 45 && marks <=49){
//     cout << "D";
// }
// else if(marks >= 50 && marks <=59){
//     cout << "C";
// }
// else if(marks >= 60 && marks <=79){
//     cout << "B";
// }
// else if(marks >= 80 && marks <=100){
//     cout << "A";
// }
// else{
//     cout << "Invalid marks";
// }



/*
Take the age from the user and then decide accordinliy 
1. if age <18, print not eligible for job
2. if age >=18, print eligible for job
3. if age >=55 and age <=57, print eligible for job, but retirement is
4. if age >57, print retirement time
*/
int age;
cin >> age;
if(age < 18){
    cout << "not  eligible for job";
}
else if(age >= 18 ){
    cout << "eligible for job";
}
else if(age >= 55 && age <= 57){
    cout << "eligible for job, but retirement is near";
}
else if(age > 57){
    cout << "retirement time";
}
return 0;
}

