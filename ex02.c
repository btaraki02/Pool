#include <stdio.h>
 void ft_swap(int *a, int *b)
 {
   int swap = *a ;
   *a = *b;
   *b = swap; 
 }
 /*int main(){
    int a = 100;
    int b = 1000;
    int *p = &a;
    int *k = &b;
    ft_swap(p,k);
    printf("a = %d\nb = %d\n",a,b);
    return 0;
 }