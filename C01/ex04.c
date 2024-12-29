#include <stdio.h>
 void ft_ultimate_div_mod(int *a, int *b)
 {
    int J = *a;
    *a = J / *b;
    *b = J % *b; 
 }
 /*int main(){
    int a =4389;
    int b = 34;
    ft_ultimate_div_mod(&a,&b);
    printf("%d\n%d",a,b);
    return 0;
 }