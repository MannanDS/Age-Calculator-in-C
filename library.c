#include <stdio.h>

int main(void) {
    int ageYears;

    printf("Enter your age in years: ");
    if (scanf("%d", &ageYears) != 1 || ageYears <= 0) {
        printf("Invalid age entered.\n");
        return 0;
    }

    int ageMonths = ageYears * 12;
    int ageDays = ageYears * 365;
    int ageHours = ageDays * 24;

    printf("Skipping Leap Years.\n");
    printf("You're approximately %d days old.\n", ageDays);
    printf("You're approximately %d months old.\n", ageMonths);
    printf("You're approximately %d hours old.\n", ageHours);

    return 0;
}
