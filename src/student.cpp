// This is a student management application's method declaration file. 
#include "student.h"
using namespace std; 

//declaration of non-parameterized construtor. 
student::student (){
    age = 0;
    marks = 0.0; 
    name = "";  
    roll_num = 0;
    course = "";  
} 

//declaration of parameterized construtor. 
student::student (int a, float m, string n, int r, string c){
    age = a;
    marks = m; 
    name = n;  
    roll_num = r; 
    course = c;
}

//declaration of getter methods. 
int student::getAge(){
    return age; 
}; 

float student::getMarks() {
    return marks; 
};

string student::getName(){
    return name; 
}

int student::getRollnum(){
    return roll_num; 
}

string student::getCourse(){
    return course; 
}



//declaration of setter methods. 
int student::setAge(int a){
    a = age; 
}

float student::setMarks(int m){
    m = marks; 
}

string student::setName(string n){
    n = name; 
}

int student::setRollNum(int r){
    r = roll_num; 
}

string student::setCourse(string c){
    c = course; 
}