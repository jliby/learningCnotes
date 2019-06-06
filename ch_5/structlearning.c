#include <stdio.h>

/* nesting structs */
struct preferences {
    const char *food;
    int exercise_hours;
};

struct fish { 
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

struct fish snappy = {
"Snappy", "Piranha", 69, 4, {"Meat", 7}

};

int main() {
printf("The name of the fish is %s. And  %s loves to eat %s exercise %i hours a day." , snappy.name, snappy.name, snappy.care.food, snappy.care.exercise_hours);

}

