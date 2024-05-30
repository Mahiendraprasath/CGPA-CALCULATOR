#include <stdio.h>

#define MAX_COURSES 10

float calculate_cgpa(float grades[], int credits[], int num_courses) {
    float total_points = 0;
    int total_credits = 0;

    for (int i = 0; i < num_courses; i++) {
        total_points += grades[i] * credits[i];
        total_credits += credits[i];
    }

    return total_points / total_credits;
}

int main() {
    int num_courses;
    int cg;

    // Ensure the number of courses does not exceed the maximum allowed
    do {
        printf("Enter the number of courses: ");
        scanf("%d", &num_courses);
    } while (num_courses <= 0 || num_courses > MAX_COURSES);

    float grades[MAX_COURSES];
    int credits[MAX_COURSES];

    for (int i = 0; i < num_courses; i++) {
        printf("Enter the mark for course %d: ", i + 1);
        scanf("%f", &grades[i]);
        printf("Enter the credit hours for course %d: ", i + 1);
        scanf("%d", &credits[i]);
    }

    float cgpa = calculate_cgpa(grades, credits, num_courses);
    printf("Your CGPA is: %.2f\n", cgpa/10);

    return 0;
}
