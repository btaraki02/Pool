#include <unistd.h>
void ft_putchar(char n){
    write( 1 ,&n , 1);
}
void ft_putnbr(int nb){
    if(nb ==   0){
        ft_putchar('0');
        return;
    }
    if(nb == -2147483648){
        write( 1,"-2147483648",11);
        return;
    }
    if(nb < 0){
        ft_putchar('-');
        nb = -nb;
    }
    if(nb >=10){
        ft_putnbr(nb / 10);
        }
        ft_putchar(nb % 10 + '0');// or(nb %v10 +48)  --->48 = '0';
    }

/*int main(){
    ft_putnbr(67);
    ft_putchar('\n');
}