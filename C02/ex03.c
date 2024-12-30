#include <stdio.h>
 int ft_str_is_numeric(char *str)
 {
        int n = 1;
    while(*str != '\0'){
        if(!(*str >= '0' && *str <= '9')){
            n = 0;
            break;
        }
        str++;
    }
    return n;
    
 }
  /*int main(){
    char src[] = "1337";
    int n = ft_str_is_numeric(src);
    printf("%d\n",n);
 }*/