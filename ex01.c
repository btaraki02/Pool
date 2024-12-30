#include <stdio.h>
 char *ft_strncpy(char *dest, char *src, unsigned int n)
 {
        while(*src != '\0' && n > 0){
        *dest = *src;
        src++;
        dest++;
        n--;
    }
    *dest = '\0';
    return dest;
 }
 int main(){
    char src[] = "HI BILAL";
    int size = sizeof(src)/sizeof(src[0]);
    char dest[size];
    unsigned int n = 2;
    ft_strncpy(dest,src,n);
    printf("%s\n",dest);
 }