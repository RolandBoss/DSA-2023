//
// Created by Roland on 2023. 03. 22..
//

#include <stdio.h>
#include "../headers/person.h"

void readOnePersonDetails(Person *pPerson) {
    scanf("\n%[^\n]", pPerson->name);
    scanf("%i", &pPerson->age);
    scanf("%i", &pPerson->gender);
    scanf("\n%[^\n]", pPerson->address);
    scanf("%f", &pPerson->height);
    scanf("%f", &pPerson->weight);
    pPerson->bmi = pPerson->weight / (pPerson->height * pPerson->height);
    printf("%f", pPerson->bmi);
    scanf("\n%i", &pPerson->hasChronicCondition);
    scanf("%i", &pPerson->numberOfSiblings);
    scanf("%i", &pPerson->hasJob);
}

void printOnePerson(Person person) {
    printf("Person: ");
    printf("\n\t\tName: %s", person.name);
    printf("\n\t\tAge: %i", person.age);
    printf("\n\t\tGender: %s", getGenderDescription(person.gender));
    printf("\n\t\tAdress: %s", person.address);
    printf("\n\t\tHeight: %2.f", person.height);
    printf("\n\t\tWeight: %.2f", person.weight);
    printf("\n\t\tvalues: %s", getCategory(person.bmi));
    printf("\n\t\tNumber of ChronicConditions: %i", person.hasChronicCondition);
    printf("\n\t\tNumber of Siblings: %i", person.numberOfSiblings);
    printf("\n\t\tNumber of jobs: %i", person.hasJob);
}

char *getGenderDescription(enum Gender type) {
    switch (type) {
        case 0:
            return "MALE";
        case 1:
            return "FEMALE";
        case 2:
            return "OTHER";
        default:
            return "ERROR GENDER NOT FOUND";
    }
}

char *getCategory(enum Values values) {
    if (values < 24.9 && values > 18.5) {
        return "Normal_range";
    } else {
        if (values < 29.9 && values > 25) {
            return "Overweight";
        } else {
            if (values < 34.9 && values > 30) {
                return "Obese_ClassI";
            } else {
                if (values < 39.9 && values > 35) {
                    return "Obese_ClassII";
                }
            }
        }
    }
}