//
// Created by Roland on 2023. 03. 01..
//

#include "student.h"
#include <stdio.h>
#include <malloc.h>

void readStudentDetails(Student_t *pStudent){
    scanf("%[^\n]", pStudent->name);
    scanf("%s\n", pStudent->neptunCode);
    scanf("%[^\n]\n", pStudent->birthPlace);
    scanf("%i%i%i", &pStudent->dateOfBirth.year,&pStudent->dateOfBirth.month, &pStudent->dateOfBirth.day);
    scanf("%i\n", &pStudent->gender);
    scanf("%f\n", &pStudent->examResult);
}

void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents){
    *dpStudents = (Student_t*)malloc(numberOfStudents * sizeof (Student_t));
    if(!(*dpStudents)){
        printf("\nError");
        exit(-1);
    }
}
char* getGenderDescription(enum Gender type){
    switch (type) {
        case 0: return "MALE";
        case 1: return "FEMALE";
        case 2: return "OTHER";
        default: return "ERROR GENDER NOT FOUND";
    }
}

void printStudent(Student_t student){
    printf("Student name: %s\n", student.name);
    printf("Student neptun code: %s\n", student.neptunCode);
    printf("Student birth place: %s\n", student.birthPlace);
    printf("Student date of birt: %i.%i.%i\n", student.dateOfBirth.year,student.dateOfBirth.month,student.dateOfBirth.day);
    printf("Gender: %s\n", getGenderDescription(student.gender));
    printf("Exam result: %.2f\n", student.examResult);
}

void readAllStudentsDetails(Student_t **dpStudents, int *pnumberOfStudents, const char *input){
    if(!freopen("input","r", stdin)){
        printf("ERROREEEE");
        exit(-2);
    }
    scanf("%i", pnumberOfStudents);
    allocateMemoryForStudents(dpStudents, *pnumberOfStudents);
    for (int i = 0; i < *pnumberOfStudents; ++i) {
        readStudentDetails((*dpStudents)+i);
    }
    freopen("CON", "r", stdin);

}
void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination){
    freopen("destination", "w", stdout);
    for (int i = 0; i < numberOfStudents; ++i) {
        printStudent(pStudents[i]);
    }
    freopen("CON", "w", stdout);
}

