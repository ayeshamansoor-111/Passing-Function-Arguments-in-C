#include <stdio.h>
#include <math.h> 
int k_Digit(int n, int k); 
int main() {
    int num, digit, result; 
    printf("Enter a number >>  "); 
    scanf("%d", &num); 
    printf("Enter the digit number >> "); 
    scanf("%d", &digit); 
    result = k_Digit(num, digit); 
    printf("%dth digit of %d is %d\n", digit, num, result); 
    return 0; 
}
int k_Digit(int n, int k) {
    int i; 
    if (n < 0) {
        n = -n; 
    }
for (i = 1; i < k; i++) {
    n = n / 10; 
}
if (n == 0 && k > 1) {
    return 0; 
}
    return n % 10; 
}