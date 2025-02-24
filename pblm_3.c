// Write a program to calulate fiboncii series up to n numbers

#include <stdio.h>

// Function to generate Fibonacci series
void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    // Taking input from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        fibonacci(n);
    }

    return 0;
}
