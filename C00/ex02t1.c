#include <unistd.h>
 void ft_print_reverse_alphabet(void){
    int i = 'z';
    while(i >= 'a'){
        write(1 , &i , 1);
        i--;
    }
}
/*int main(){
    ft_print_reverse_alphabet();
    return 0;
}