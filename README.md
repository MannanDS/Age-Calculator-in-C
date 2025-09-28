
# Age Calculator in C

This is a simple command-line Age Calculator written in C. The program prompts the user to enter their age in years and then calculates and displays the approximate equivalent in months, days, and hours. For simplicity, leap years are skipped in the calculation.

## Features

- Accepts user input for age in years.
- Calculates:
  - Age in months
  - Age in days (assuming 365 days per year)
  - Age in hours
- Performs input validation to ensure only positive integers are accepted.
- Informs the user that leap years are not considered.

## How It Works

1. The program asks for your age in years.
2. It checks if the input is a valid positive integer.
3. It then calculates:
    - Months: `ageYears * 12`
    - Days: `ageYears * 365`
    - Hours: `ageDays * 24`
4. Results are displayed to the user.

## Usage

### Compilation

Compile the program using `gcc` or any standard C compiler:

```bash
gcc age_calculator.c -o age_calculator
```

### Running

Run the compiled executable:

```bash
./age_calculator
```

You will see a prompt like:

```
Enter your age in years:
```

Input your age (e.g., `25`), and you’ll get an output similar to:

```
Skipping Leap Years.
You're approximately 9125 days old.
You're approximately 300 months old.
You're approximately 219000 hours old.
```

## Example Code

```c
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
```

## Notes

- This program does not account for leap years; it assumes every year has exactly 365 days.
- The calculated values are approximations and are for illustrative purposes only.

## License

This project is licensed under the [MIT License](LICENSE).

---

**Author:** [MannanDS](https://github.com/MannanDS)
````