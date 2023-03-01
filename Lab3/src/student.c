//
// Created by Roland on 2023. 03. 01..
//

#include "student.h"

void readStudentDetails(Student_t *pStudent){
    scanf("%[^\n]\n", pStudent->name);
    scanf("%s\n", pStudent->neptunCode);
    scanf("%[^\n]\n", pStudent->birthPlace);
    scanf("%i", pStudent->dateOfBirth.year);
    scanf("%i", pStudent->dateOfBirth.month);
    scanf("%i", pStudent->dateOfBirth.day);
    scanf("%i", pStudent->gender);
    scanf("%f", pStudent->examResult);
}
char* getGenderDescription(Gender gender){
    switch (gender) {
        case 0: return "MALE";
        case 1: return "FEMALE";
        default: return "ERROR GENDER NOT FOUND";
    }
}

void printStudent(Student_t student){
    printf("Student name: %s\n", student.name);
    printf("Student neptun code: %s\n", student.neptunCode);
    printf("Student birth place: %s\n", student.birthPlace);
    printf("Student date of birt: %i.%i.%i\n", student.dateOfBirth.year,student.dateOfBirth.month,student.dateOfBirth.day);
    printf("Gender: %s", getGenderDescription(student.gender));
    printf("Exam result: %f\n", student.examResult);
}

