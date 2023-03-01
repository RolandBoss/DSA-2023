//
// Created by Roland on 2023. 03. 01..
//

#ifndef LAB3_STUDENT_H
#define LAB3_STUDENT_H
#include <stdio.h>
typedef enum{
    MALE,FEMALE
}Gender;

typedef struct {
    int year, month, day
}Date_t;

typedef struct {
    char name[50];
    char neptunCode[8];
    char birthPlace[25];
    Date_t dateOfBirth;
    Gender gender;
    float examResult;
}Student_t;

#endif //LAB3_STUDENT_H

char* getGenderDescription(Gender gender);
void readStudentDetails(Student_t *pStudent);
void printStudent(Student_t student);
