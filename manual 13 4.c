#include <stdio.h> 
int Number_of_Digits(int a);
int main() {
    int val; 
    int digits; 
    printf("Enter a number >>  ");
    scanf("%d", &val); 
    digits = Number_of_Digits(val); 
    printf("The number of digits are %d", digits); 
    return 0; 
}
int Number_of_Digits(int a) {
    int count = 0; 
    if (a == 0) {
        return 1;
    }
    if (a < 0) {
        a = -a; 
    }
    while (a != 0) {
        a = a / 10; 
        count++; 
    }
    return count; 
}