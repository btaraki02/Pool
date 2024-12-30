#include <stdio.h>
 unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
 {
    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return 
 }
 int main(){
    char src[] = "hi bilal taraki";
    unsigned int size = sizeof(src) / sizeof(src[0]);
    char dest[size];
    ft_strlcpy(dest,src,size);
    printf("this is array[1] : %s\n",src);
    printf("this is array[2] : %s\n",dest);
    return 0;
 }