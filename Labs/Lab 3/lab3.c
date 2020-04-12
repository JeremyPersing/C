/*---------------*/
/*Jeremy Persing */
/* Lab 3         */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int age = 20;
    double average = 246.23689;

    printf("\nJeremy Persing. Lab 3.\n");
    printf("\nJoe went to the store.\n");
    printf("\nMy friend is %2i years old.\n", age);
    printf("\n\"Sometimes you will never know the value of a moment unitl it becomes a memory.\"\n - Dr. Suess\n");
    printf("\nThe average = %5.1f\n", average);
    printf("\nThe average = %7.3f\n", average);
    printf("\nThe average = %8.2e\n", average);
    printf("\nThe average = %f\n\n", average);

    return EXIT_SUCCESS; 
}

