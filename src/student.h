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
        string course;  

//public methods to access private attributes.  
    public:

    //non-parameterized constructor defination. 
        student (); 

    //parameterized constructor defination. 
       student (int a, float m, string n, int r, string c); 

    //getter methods defination.    
        int getAge (); 
        float getMarks (); 
        string getName (); 
        int getRollnum (); 
        string getCourse (); 

    //Setter methods defination. 
        int setAge (int a); 
        float setMarks (int m); 
        string setName (string n); 
        int setRollNum (int r);
        string setCourse (string c);  
};


//here we define the second entity course, having a many-to-many relationship with students. 

class Course {
  private:
    string code;
    string name;
    string intructor;
    int quiz_num;
    int assignments;
    int enrolled_student;

 public:
    Course(); 

    Course(string c, string n, string i, int q, int a, int e); 

    string getCode (); 
    string getName (); 
    string getInstructor(); 
    int getQuizzes(); 
    int getAssignments(); 
    int getEnrolled_students(); 
};
