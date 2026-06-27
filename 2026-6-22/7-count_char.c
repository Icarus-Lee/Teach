#include <stdbool.h>
#include <stdio.h>

bool IsAlpha(char c);
bool IsNumber(char c);
bool IsSpace(char c);
void Count(char* str, int* res);

int main() {
    char str[100] = "Hello World 123!";  // Example input string
    int  res[4]   = {0};                 // Initialize result array to hold counts
    Count(str, res);
    printf("Letters: %d\n", res[0]);
    printf("Numbers: %d\n", res[1]);
    printf("Spaces: %d\n", res[2]);
    printf("Other: %d\n", res[3]);
    return 0;
}

inline bool IsAlpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

inline bool IsNumber(char c) { return c >= '0' && c <= '9'; }

inline bool IsSpace(char c) { return c == ' '; }

/**
 * @brief Count the number of letters, numbers, and spaces in a string.
 *
 * @param str The input string to analyze.
 * @param res An array of three integers where:
 *            res[0] will hold the count of letters,
 *            res[1] will hold the count of numbers,
 *            res[2] will hold the count of spaces.
 *            res[3] will hold the count of other characters.
 */
void Count(char* str, int* res) {
    if (str == NULL || res == NULL) {
        return;  // Handle null pointers gracefully
    }
    // Initialize the result array
    for (int i = 0; i < 4; i++) {
        res[i] = 0;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (IsAlpha(str[i])) {
            res[0]++;
        } else if (IsNumber(str[i])) {
            res[1]++;
        } else if (IsSpace(str[i])) {
            res[2]++;
        } else {
            res[3]++;  // Count other characters
        }
    }
}