#include <stdio.h>
 char *ft_strlowcase(char *str)
 {
    while(*str != '\0'){
        if(*str <= 'Z' && *str >= 'A'){
            *str = *str + 32;
        }
        str++;
    }
    return str;
 }
 /*int main(){
    char arr[] = "HI BILAL";
    ft_strlowcase(arr);
    printf("%s\n",arr);
 }*/