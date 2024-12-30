#include <stdio.h>
 char *ft_strcapitalize(char *str)
 {
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] <= 'Z' && str[i] >= 'A'){
            str[i] +=32; 
        }
        i++;
    }
    i = 0;
    if(str[i] <= 'z' && str[i] >= 'a'){
        str[i] -=32;
    }
    while(str[i] != '\0'){
        if(str[i] == 32 || str[i] == 43 || str[i] == 45){
            if(str[i + 1]<= 'z' && str[i + 1] >= 'a'){
            str[i + 1] -=32;
        }}
        i++;
    }
    return str;
 }
 /*int main(){
    char arr[] = " salut, coMment tu vas ? 42mots quarMnte-deux; cinquante+et+un";
    ft_strcapitalize(arr);
    printf("%s\n",arr);
 }*/