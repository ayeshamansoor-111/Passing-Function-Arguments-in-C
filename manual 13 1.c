#include <stdio.h> 
void swap(int *m, int *n, int *l, int *k); 
int main () { 
    int a = 43; 
    int b = 76; 
    int c = 32; 
    int d = 11; 
    printf("The numbers in random order are: a = %d and b = %d and c = %d and d = %d", a, b, c, d);
    swap(&a, &b, &c, &d);
    printf("The ascending order is a = %d and b = %d and c = %d and d = %d", a, b, c, d);
    return 0;
} 
void swap(int *m, int *n, int *l, int *k) {
    int temp; 
    temp = *m;
    if (*m > *n) {temp = *m; *m = *n; *n = temp; } 
    if (*m > *l) {temp = *m; *m = *l; *l = temp;} 
    if (*m > *k) {temp = *m; *m = *k; *k = temp;}
    if (*n > *l) {temp = *n; *n = *l; *l = temp;} 
    if (*n > *k) {temp = *n; *n = *k; *k = temp;} 
    if (*l > *k) {temp = *l; *l = *k; *k = temp;} 
}