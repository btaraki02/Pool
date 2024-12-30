#include <stdio.h>
  int ft_str_is_lowercase(char *str)
 {
    int n = 1;
    while(*str != '\0'){
        if(!(*str >= 'a' && *str <= 'z')){
            n = 0;
            break;
        }
        str++;
    }
    return n;
 }
 int main(){
    char src[] = "bilal";
    int n = ft_str_is_lowercase(src);
    printf("%d\n",n);
 } 