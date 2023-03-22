#include <stdio.h>
#include "person.h"

int main() {
    Person person1;
    readOnePersonDetails(&person1);
    printOnePerson(person1);
    return 0;
}
