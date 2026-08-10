#include<stdio.h>
int main(){
    int num=76;
    int first_digit,last_digit,swapped_number;
    last_digit=num%10;
    first_digit=num/10;
    swapped_number=last_digit*10+first_digit;
    
    printf("after swapping:a=%d,b=%d\n",swapped_number,num);


return 0;


}
