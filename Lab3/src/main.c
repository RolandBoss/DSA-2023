#include "student.h"
#include <stdio.h>

int main() {
 //   Student_t student1 = {"Adam Batyam", "AW6H4a", "Targu Mures",{2000,12,13}, MALE, 8.45f};
   // printStudent(student1);
    Student_t student2;
    if(!freopen("students.txt", "r", stdin)){
        printf("\nERROR");
        return -1;
    }
    readStudentDetails(&student2);
    freopen("CON", "r", stdin);
    printStudent(student2);

    Student_t *pStudents;
    int numberOfStudents;
    readAllStudentsDetails(&pStudents,&numberOfStudents,"students.txt");
    printf("\n*****************************************\nAll students\n");
    printAllStudents(pStudents, numberOfStudents,"CON");
    return 0;
}
