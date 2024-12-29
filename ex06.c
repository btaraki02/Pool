#include <stdio.h>
 int ft_strlen(char *str)
 {
    int n = 0;
    while(*str != '\0'){
        str++;
        n++;
    }
    return n;
 }
 /*int main(void){
    int n = ft_strlen("bilal in 1337");
    printf("%d",n);
 }