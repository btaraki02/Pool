#include <unistd.h>
void ft_putchar(char CR){
    write(1 ,&CR ,1);
 }
 void ft_number(int n){
    ft_putchar(n / 10 + '0');
                ft_putchar(n % 10 + '0');
 }
void ft_print_comb2(void){
        int i = 0;
        while(i <= 98){
            int j = i + 1;
            while(j <= 99){
                ft_number(i);
                ft_putchar(' ');
                ft_number(j);
                if(j != 99 || i != 98){
                ft_putchar(',');
                ft_putchar(' ');
                }
                j++;
            }
            i++;

        }
}
/*int main(){
    ft_print_comb2();
}