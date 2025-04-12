#include <iostream>

using namespace std;

struct Student {
    string name;
    int idNumber;
    string Department;

};

void displayStudent(Student student){

    cout << "Name: " << student.name  << endl;
    cout << "ID Number: " << student.idNumber << endl;
    cout << "Department: " << student.Department << endl<< endl;



};

int main()
{
    Student student1;
    student1.name = "Oriemi Obang";
    student1.idNumber = 1385;
    student1.Department = "Software Engineering";

    Student student2;
    student2.name = "Peter Cham";
    student2.idNumber = 1232;
    student2.Department = "Social Worker";

    displayStudent(student1);
    displayStudent(student2);


    return 0;
}
