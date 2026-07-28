#include <stdio.h> 
void four_operations(float a, float b, float *addres, float *subres, float *divres, float *mulres); 
int main () {
    float operand1, operand2; 
    float add, subtract, divide, multiply; 
    printf("Enter the first operand >>  "); 
    scanf("%f", &operand1); 
    printf("Enter the second operand >>  "); 
    scanf("%f", &operand2);
    four_operations(operand1, operand2, &add, &subtract, &divide, &multiply); 
    printf("The addition of the two operands is %.3f\n", add); 
    printf("The subtraction of the two operands is %.3f\n", subtract); 
    printf("The multiplication of the two operands is %.3f\n", multiply); 
    printf("The division of the two numbers is %.2f\n", divide); 
    return 0; 
}
void four_operations (float a, float b, float *addres, float *subres, float *divres, float *mulres) {
*addres = a + b; 
*subres = a - b;  
*mulres = a * b; 
if (b != 0) {
    *divres = a/b; 
} else { printf("ERROR! The input is invalid!"); 
}
}