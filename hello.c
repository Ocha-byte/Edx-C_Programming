/*
 * Course: C Programming: Getting Started
 * Completion Time: 1.5 hrs. 29 October 2025.
 * Code written by Charles Underwood
 * Compiled using GCC: gcc hello.c -o hello
 * This file contains code for the entire course.
 */

// Libraries
#include <stdio.h>

// Main function
int main(void) {

    // Print statements
    printf("Hello world,\n");
    printf("Let's make something!");

    // For loop
    /* You should be able to
     * use i += 1 instead of
     * i = i + 1;
     */
    for (int i = 0; i < 3; i += 1) { // This is correct!
        printf("\nOh come on");
    }
    printf("\n");

    // format specifier
    int j = 10; int k = 2;
    printf("j = %d\n", j);
    printf("j * k = %d\n", j * k);

    // using loop for x8 times tables
    for (int i = 0; i < 11; i++) {
            printf("%dx8 = %d\n", i, i*8);
    }

    // user input using scanf
    int num;
    printf("enter a number: ");
    scanf("%d",&age);
    printf("you entered: %d", age);

    // Return statement
    return 0;

}

/*
#include <stdio.h>

int main (void) {
    int deploy;
    int enginePower;
    int resistance;
    int weight;
    int height;
    int i;
    int rating = 0;

    scanf("%d", &deploy);

    for (i = 0; i < deploy; i++) {
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        rating = rating + (enginePower + resistance) * (weight - height);
    }

    printf("%d\n",rating);

    return 0;

}
*/

/*
#include <stdio.h>

int main (void) {
    char letter1 = 'i';
    char letter2 = 'n';
    char letter3 = 'C';

    printf("Programming %c%c %c\n", letter1, letter2, letter3);

    return 0;
}
*/

/*
#include <stdio.h>

int main (void) {
    char input;
    scanf("%c",&input);
    printf("++++%c++++\n", input);
    printf("+++%c%c%c+++\n", input, input, input);
    printf("++%c%c%c%c%c++\n", input, input, input, input, input);
    printf("+%c%c%c%c%c%c%c+\n", input, input, input, input, input, input, input);
    printf("%c%c%c%c%c%c%c%c%c",input, input, input, input, input, input, input, input, input);
    return 0;
}
*/

/*
#include <stdio.h>

int main (void) {
    double input;
    scanf("%lf",&input);
    double miles = input * 0.621371;
    printf("%0.6f", miles);
    return 0;
}
*/

/*
#include <stdio.h>

int main (void) {
    double input;
    scanf("%lf",&input);
    double imperial = ( (input * 9.0) / 5.0) + 32.0;
    printf("%0.1f", imperial);
    return 0;
}
*/

/*
#include <stdio.h>

int main (void) {
    int num_of_Matches;
    int box_size;
    int num_of_boxes;
    int remain_matches;

    scanf("%d",&num_of_Matches);
    scanf("%d",&box_size);

    num_of_boxes = num_of_Matches / box_size;
    remain_matches = num_of_Matches % box_size;

    printf("%d\n", num_of_boxes);
    printf("%d", remain_matches);

    return 0;

}
*/

/*
#include <stdio.h>

int main (void) {
    int num_of_grades;
    int grad1;
    int grad2;
    int grad3;
    int grad4;
    double average;
    int sum;

    scanf("%d", &num_of_grades);
    scanf("%d", &grad1);
    scanf("%d", &grad2);
    scanf("%d", &grad3);
    scanf("%d", &grad4);

    sum = (grad1+grad2+grad3+grad4);
    average = (double) sum/num_of_grades;

    printf("%0.2lf", average);

    return 0;

}
*/

/*
#include <stdio.h>

int main (void) {
    int num_of_people;
    double percent;
    double growth;
    int expected;

    scanf("%d", &num_of_people);
    scanf("%lf", &percent);

    growth = (double) num_of_people * (percent/100.0);
    expected = num_of_people + (int) growth;

    printf("%d", expected);

    return 0;

}
*/

/*
#include <stdio.h>

int main (void) {
    double money;
    double price;
    int num_of_books;

    scanf("%lf", &money);
    scanf("%lf", &price);

    num_of_books = (int) (money / price);

    printf("%d", num_of_books);

    return 0;

}
*/

/*
#include <stdio.h>

int main (void) {
    double needed_cement;
    int total_cost;
    double bags_needed_f;
    int bags_needed;

    scanf("%lf", &needed_cement);

    bags_needed_f = needed_cement/120.0;
    bags_needed = (int) bags_needed_f +1;
    total_cost = bags_needed * 45;

    printf("%d", (int) total_cost);
    return 0;
}
*/

// End of Course
