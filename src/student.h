//This is a Student Header File
#include <iostream>
#include <string> 
using namespace std; 

//here we define a class student with it's private attributes such as: age, marks, name and roll number. 

class student{
    private: 
        int age; 
        float marks; 
        string name; 
        int roll_num; 

//public methods to access private attributes.  
    public:

    //non-parameterized constructor defination. 
        student (); 

    //parameterized constructor defination. 
       student (int a, float m, string n, int r); 

    //getter methods defination.    
        int getAge (); 
        float getMarks (); 
        string getName (); 
        int getRollnum (); 

    //Setter methods defination. 
        int setAge (int a); 
        float setMarks (int m); 
        string setName (int n); 
        int setRollNum (int r); 
}; 
