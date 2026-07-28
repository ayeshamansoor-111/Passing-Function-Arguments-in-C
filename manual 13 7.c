#include <stdio.h> 
int Perfect_Number (int num); 
int main() {
    int n, result; 
    printf("Enter a number >>  "); 
    scanf("%d", &n); 
    result = Perfect_Number(n); 
    if (result == 1) {
        printf("This number is perfect!\n"); 
    } else {
        printf("This number is not perfect!\n"); 
    }
    return 0; 
}
int Perfect_Number(int num) {
    int i, sum = 0; 
    if (num <= 0) {
        return 0; 
    }
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i; 
        }
    }
    if (sum == num) {
        return 1; 
    } else {
        return 0; 
    }
}