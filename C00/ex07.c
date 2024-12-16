#include <unistd.h>
void ft_putchar(char M){
    write( 1 , &M , 1);
}
void ft_putnbr(int nb){
    if(nb == -2147483648){
        write( 1 ,"-2147483648",11);
        return;
    }
    if( nb < 0){
        ft_putchar('-');
            nb = -nb;
    }
    if (nb > 9) {
        ft_putnbr(nb / 10);
    }
    ft_putchar(nb % 10 + '0');
}

/*int main(){
    ft_putnbr(-2147483648);
    return 0;
}