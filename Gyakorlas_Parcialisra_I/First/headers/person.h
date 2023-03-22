//
// Created by Roland on 2023. 03. 22..
//

#ifndef FIRST_PERSON_H
#define FIRST_PERSON_H

typedef struct {
    char name[50];
    int age;
    int gender;
    char address[100];
    float height;
    float weight;
    float bmi;
    int hasChronicCondition;
    int numberOfSiblings;
    int hasJob;
} Person;

enum Gender{MALE, FEMALE, OTHER};
enum Values{Normal_range,Overweight,Obese_ClassI, Obese_ClassII};

char*getCategory(enum Values values);
char*getGenderDescription(enum Gender type);
void readOnePersonDetails(Person *pPerson);
void printOnePerson(Person person);
float getBmiIndex(Person person);
void allocateMemoryForAllPersons(Person **dpPersons, int numberOfPersons);
void readAllPersons(Person **dpPresons, int *numberOfPersons,const char *input);
void printAllPersons(Person *pPersons, int numberOfPersons, const char *destination);
int getNumberOfPersons(Person *pPersons, int numberOfPerson);
void sortByName(Person *pPersons, int numberOfPerson);



#endif //FIRST_PERSON_H
