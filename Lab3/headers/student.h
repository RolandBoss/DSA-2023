//
// Created by Roland on 2023. 03. 01..
//

#ifndef LAB3_STUDENT_H
#define LAB3_STUDENT_H
enum Gender {MALE,FEMALE, OTHER};

typedef struct {
    int year, month, day;
}Date_t;

typedef struct {
    char name[50];
    char neptunCode[8];
    char birthPlace[25];
    Date_t dateOfBirth;
    enum Gender gender;
    float examResult;
}Student_t;

#endif //LAB3_STUDENT_H

char* getGenderDescription(enum Gender type);
void readStudentDetails(Student_t *pStudent);
void printStudent(Student_t student);
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents);
void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents, const char *input);
void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination);