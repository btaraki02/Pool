#include <stdio.h>
 int ft_str_is_alpha(char *str)
 {
    int n = 1;
    while(*str != '\0'){
        if(!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))){
            n = 0;
            break;
        }
        str++;
    }
    return n;
 }
 /*int main(){
    char src[] = "bilal";
    int n = ft_str_is_alpha(src);
    printf("%d\n",n);
 }*/ 