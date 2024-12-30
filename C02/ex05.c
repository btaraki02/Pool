#include <stdio.h>
  int ft_str_is_uppercase(char *str)
 {
    int n = 1;
    while(*str != '\0'){
        if(!(*str >= 'A' && *str <= 'Z')){
            n = 0;
            break;
        }
        str++;
    }
    return n;
 }
 /*int main(){
    char src[] = "BILAL";
    int n = ft_str_is_uppercase(src);
    printf("%d\n",n);
 } */