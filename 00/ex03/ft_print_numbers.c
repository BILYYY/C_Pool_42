#include<unistd.h>
void ft_print_numbers(){
    char a = '0';
    while (a<=57)//ascii of 9
    {
        char space =' ';
        write(1,&a,1);
        write(1,&space,1);
        a++;
    }
    
}
int main(){
    ft_print_numbers();//0 1 2 3 4 5 6 7 8 9 
}