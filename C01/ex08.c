#include <stdio.h>
 void ft_sort_int_tab(int *tab, int size)
 {
   int i = 0;
    int j ;
    while(i < size){
        j = 0;
        while(j < size ){
            if(tab[i] < tab[j]){
                int swap = tab[j];
                tab[j] = tab[i];
                tab[i] = swap;
            }
            j++;
        }
        i++;
    }
 }
  /*int main(){
    int array[] = {21,32,4,56,0,1};
    int size = sizeof(array) /sizeof(array[0]); 
    ft_sort_int_tab(array,size);
    int i = 0;
    while(i < size){
        printf("%d\n",array[i]);
        i++;
    }
    return 0 ;
 }