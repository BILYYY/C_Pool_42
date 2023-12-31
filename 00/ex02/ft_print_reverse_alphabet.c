#include <unistd.h>
void ft_putchar(char c){
    char nl=' ';
    write (1,&c,sizeof(char));
    write(1,&nl,1);
 }
void ft_print_reverse_alphabets(){
    char c;
    c='z';
    while (c>='a')
    {
        ft_putchar(c);
        c--;
    }
}
int main(){
    ft_print_reverse_alphabets();
}
//z y x w v u t s r q p o n m l k j i h g f e d c b a 