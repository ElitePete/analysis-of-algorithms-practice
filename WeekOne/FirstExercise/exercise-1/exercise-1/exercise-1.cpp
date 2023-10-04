// exercise-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "studentType.h"

using namespace std;

int main()
{
    studentType student;
    student.setStudent("Johnny", "Knoxville", 'A', 89, 92, 3.57);



    studentType newStudent("Steve", "O", '*', 85, 95, 3.89);

    student.print();
    cout << "***************" << endl << endl;

    newStudent.print();
    cout << "***************" << endl << endl;

    return 0;
}
