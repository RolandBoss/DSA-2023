//
// Created by Roland on 2023. 03. 01..
//

#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readStudentDetails(Student_t *pStudent){
    scanf("\n%[^\n]", pStudent->name);
    scanf("%s\n", pStudent->neptunCode);
    scanf("%[^\n]", pStudent->birthPlace);
    scanf("%i%i%i", &pStudent->dateOfBirth.year,&pStudent->dateOfBirth.month, &pStudent->dateOfBirth.day);
    scanf("%i", &pStudent->gender);
    scanf("%f", &pStudent->examResult);
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
    printf("    %s:\n", student.name);
    printf("\t-Neptun code: %s\n", student.neptunCode);
    printf("\t-Birth place: %s\n", student.birthPlace);
    printf("\t-Date of birt: %i.%i.%i\n", student.dateOfBirth.year,student.dateOfBirth.month,student.dateOfBirth.day);
    printf("\t-Gender: %s\n", getGenderDescription(student.gender));
    printf("\t-Exam result: %.2f\n", student.examResult);
}
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents) {
    *dpStudents = (Student_t*) malloc(numberOfStudents * sizeof(Student_t));
    if(!(*dpStudents)){
        printf("ERROR ALLOCATE MEMORY");
        exit(-1);
    }
}

void readAllStudentsDetails(Student_t **dpStudents, int *pNumberOfStudents, const char *input) {
    if(!freopen(input, "r", stdin)){
        printf("FILE OPENING ERROR");
        exit(-2);
    }
    scanf("%i", pNumberOfStudents);
    allocateMemoryForStudents(dpStudents, *pNumberOfStudents);
    for (int i = 0; i < *pNumberOfStudents; ++i) {
        readStudentDetails((*dpStudents)+i);
    }
    freopen("CON", "r", stdin);

}

void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination) {
    freopen(destination, "w", stdout);
    for (int i = 0; i < numberOfStudents; ++i) {
        printStudent((pStudents)[i]);
    }
    freopen("CON", "w", stdout);
}

int getNumberOfStudentsByGender(Student_t *pStudents, int numberOfStudents, enum Gender gender) {
    int counter = 0;
    for (int i = 0; i < numberOfStudents; ++i) {
        if(pStudents[i].gender == gender){
            counter++;
        }
    }
    return counter;
}

void printStudentsFromSpecificCity(Student_t *pStudents, int numberOfStudents, const char *city) {
    for (int i = 0; i < numberOfStudents; ++i) {
        if(strcmp(pStudents[i].birthPlace, city) == 0){
            printStudent(pStudents[i]);
        }
    }
}

void *findStudentByNeptunCode(Student_t *pStudents, int numberOfStudents, const char *neptunCode) {
    for (int i = 0; i < numberOfStudents; ++i) {
        if (strcmp(pStudents[i].neptunCode, neptunCode) == 0){
            return pStudents + i;
        }
    }
    return NULL;
}

int compareByName(const void* a, const void* b){
    Student_t *aErtek = (Student_t*)a;
    Student_t *bErtek = (Student_t*)b;
    return strcmp(aErtek->name, bErtek->name);

}
void sortStudentsByName(Student_t *pStudents, int numberOfStudents) {
    qsort(pStudents, numberOfStudents, sizeof (Student_t), compareByName);
}
int compareByExamResult(const void* a, const void* b){
    Student_t *aExam = (Student_t*)a;
    Student_t *bExam = (Student_t*)b;
    if(aExam->examResult > bExam->examResult){
        return 1;
    }else{
        if(bExam->examResult > aExam->examResult){
            return -1;
        }else{return 0;}
    }
}
void sortStudentsByExam(Student_t *pStudents, int numberOfStudents) {
    qsort(pStudents, numberOfStudents, sizeof(Student_t), compareByExamResult);
}

