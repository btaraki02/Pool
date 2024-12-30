#include <stdio.h>
 int ft_str_is_printable(char *str)
  {
    int n = 1;
    while(*str != '\0'){
        if((*str >= 0 && *str <= 31) || (*str == 127)){
            n = 0;
            break;
        }
        str++;
    }
    return n;
 }
 /*int main(){
    char src[] = "BILALh";
    int n = ft_str_is_printable(src);
    printf("%d\n",n);

 }*/