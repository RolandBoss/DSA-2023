//
// Created by palma on 2/19/2023.
//

#ifndef STUDENTS_STUDENT_H
#define STUDENTS_STUDENT_H

typedef struct{
    int year;
    int month;
    int day;
}Date_t;

enum Gender{MALE, FEMALE, OTHER};

typedef struct {
    char name[50];
    char neptunCode[8];
    char birthPlace[25];
    Date_t dateOfBirth;
    enum Gender gender;
    float examResult;


}Student_t;

char* getGenderDescription(enum Gender type);
void readStudentDetails(Student_t *pStudent);
void printStudent(Student_t student);
void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents);
void readAllStudentsDetails(Student_t **dpStudents, int *pNumberOfStudents, const char *input);
void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination);
int getNumberOfStudentsByGender(Student_t *pStudents, int numberOfStudents, enum Gender gender);
void printStudentsFromSpecificCity(Student_t *pStudents, int numberOfStudents, const char *city);
void* findStudentByNeptunCode(Student_t *pStudents, int numberOfStudents, const char* neptunCode);
void sortStudentsByName(Student_t *pStudents, int numberOfStudents);
void sortStudentsByExam(Student_t *pStudents, int numberOfStudents);

#endif //STUDENTS_STUDENT_H
