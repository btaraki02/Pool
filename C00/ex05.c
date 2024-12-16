#include <unistd.h>
 void ft_print_comb(void){
    int i = '0';
    while(i <= '7'){
        int j = 1 + i;
        while(j <= '8'){
            int k = j + 1;
            while(k <= '9'){
                char numbers[] = {i,j,k};
                write( 1, numbers ,3);
                if( i != '7' || j != '8' || k != '9'){
                    write(1 ,", ", 2);
                }
                k++;
            }
            j++;
        }
        i++;
    }
 }
 /*int main(){
    ft_print_comb();
    return 0;
 }