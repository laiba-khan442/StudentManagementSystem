// This is a student management application's method declaration file. 
#include "student.h"
using namespace std; 

//declaration of non-parameterized construtor. 
student::student (){
    age = 0;
    marks = 0.0; 
    name = "";  
    roll_num = 0;  
} 

//declaration of parameterized construtor. 
student::student (int a, float m, string n, int r){
    age = a;
    marks = m; 
    name = n;  
    roll_num = r;  
}

//declaration of getter methods. 
int student::getAge(){
    return age; 
}; 