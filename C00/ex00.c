#include <unistd.h>
 void ft_putchar(char CR){
    write(1 ,&CR ,1);
 }
 /*int main(){
    ft_putchar('B');
    return 0;
 }