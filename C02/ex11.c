#include <stdio.h>
#include <unistd.h>
void ft_putchar(char x)
{
    write(1 , &x ,1);
}
 void ft_putstr_non_printable(char *str)
 {
     unsigned char tem;
     char hex_symbols[]= "0123456789abcdef";
    while(*str != '\0'){
    if(*str <= '~' && *str >= ' '){
        write(1,str,1);
        }
        else{
           ft_putchar('\\');
            tem = *str / 16;
            ft_putchar(hex_symbols[tem]);
            tem = *str % 16;
            ft_putchar(hex_symbols[tem]);
        }
    str++;
 }
 }
 /*int main(){
    char array[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(array);
    return 0;
 }*/