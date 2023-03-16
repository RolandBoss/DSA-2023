#include "student.h"
#include <stdio.h>

int main() {
    Student_t student1 = {"Adam Batyam", "AW6H4a", "Targu Mures", {2000, 12, 13}, MALE, 8.45f};
    printStudent(student1);
//    Student_t student2;
//    if (!freopen("students.txt", "r", stdin)) {
//        printf("ERROR");
//        return -1;
//    }
//    readStudentDetails(&student2);
//    freopen("CON", "r", stdin);
//    printStudent(student2);

    Student_t *pStudents;
    int numberOfStudents;
    printf("\n\nAll student:\n");
    readAllStudentsDetails(&pStudents, &numberOfStudents, "students.txt");
    printAllStudents(pStudents, numberOfStudents, "CON");
    printf("\nNumber of MALE students: %i", getNumberOfStudentsByGender(pStudents, numberOfStudents, MALE));
    printf("\nStudents born in Szereda:\n");
    printStudentsFromSpecificCity(pStudents, numberOfStudents, "Szereda");
    Student_t *result = findStudentByNeptunCode(pStudents, numberOfStudents, "QSTRG9");
    if(!result){
        printf("Error with find neptun code!");
    }else {
        printf("\nStudent with QSTRG9 neptun code:\n");
        printStudent(*result);
    }
    sortStudentsByName(pStudents, numberOfStudents);
    printAllStudents(pStudents, numberOfStudents, "abc_order.txt");
    sortStudentsByExam(pStudents, numberOfStudents);
    printAllStudents(pStudents, numberOfStudents, "exam_order.txt");

    return 0;
}
