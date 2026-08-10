#include<stdio.h>
int main(){
    int star='*';
    int *ptr=&star;
printf("ptr=%u\n",ptr);
ptr++;
printf("ptr=%u\n",ptr);
return 0;

}