#include <stdio.h>
 char *ft_strupcase(char *str)
 {
    while(*str != '\0'){
        if(*str <= 'z' && *str >= 'a'){
            *str = *str - 32;
        }
        str++;
    }
    return str;
 }
 /*int main(){
    char arr[] = "hi bilal";
    ft_strupcase(arr);
    printf("%s\n",arr);
 }*/