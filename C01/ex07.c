#include <stdio.h>
 void ft_rev_int_tab(int *tab, int size)
 {
    int i = size - 1;
    int j = 0;
    while(j < i){
        int swap = tab[j];
        tab[j] = tab[i];
        tab[i] = swap;
        j++;
        i--;
    }
 }
 /*int main(){
    int array[] = {1,2,3};
    int size = sizeof(array) /sizeof(array[0]); 
    ft_rev_int_tab(array,size);
    int i = 0;
    while(i < size){
        printf("%d\n",array[i]);
        i++;
    }
    return 0 ;
 }