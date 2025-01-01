#include <stdio.h>
 unsigned int ft_strlen( char *str){
    unsigned int n = 0;
    while(*str != '\0'){
      str++;
      n++;
    }
    return n;
 }
 unsigned int ft_strlcpy(char *dest,char *src, unsigned int size)
 {
    unsigned int i = 0;
     unsigned int str_len = ft_strlen(src);
    if (size == 0){
      return str_len;
    }
    while(src[i] != '\0' &&  i < size - 1){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return str_len; 
 }
 /*int main(){
    char src[] = "hi bilal taraki";
    unsigned int size = sizeof(src) / sizeof(src[0]);
    char dest[10];
    unsigned int n = ft_strlcpy(dest,src,size);
    printf("this is array[1] : %s\n",src);
    printf("this is array[2] : %s\n",dest);
     printf("Length of src: %u\n", n);
    return 0;
 }*/