/*Rajesh is a computer science student, and he wants to write a program to calculate the total marks and average marks of his three friends. However, he wants to write the program using the static storage class. 



Help him to complete the program.

Input format :
The input consists of three integers representing the marks, separated by spaces.

Output format :
The first line of output displays the sum of the marks.

The second line of output displays the average of the marks as a double value, with two decimal places.*/

#include <stdio.h>

void sumAndAverage(){
    static int num1, num2, num3;
    static int count = 1;
    if (count == 1)
        scanf("%d %d %d", &num1, &num2, &num3);
    int result_sum = num1 + num2 + num3;
    double result_avg = (double)result_sum / 3;
    printf("%d\n", result_sum);
    printf("%.2f", result_avg);
    count++;
}

int main(){
    sumAndAverage();
    return 0;
}
