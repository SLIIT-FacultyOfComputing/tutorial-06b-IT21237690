#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pstudentId, const char pname[]) 
{
  studentId = pstudentId;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"---------------------------------"<<endl;
  cout<<"student id: "<<studentId<<endl;
  cout<<"student name: "<<name<<endl;
  cout<<"---------------------------------"<<endl;
  
  
}
