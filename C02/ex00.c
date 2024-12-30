#include <stdio.h>
 char *ft_strcpy(char *dest, char *src)
 {
    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return dest;
 }
 /*int main(){
    char src[] = "HI BILAL";
    int size = sizeof(src)/sizeof(src[0]);
    char dest[size];
    ft_strcpy(dest,src);
    printf("%s\n",dest);
 }
 */