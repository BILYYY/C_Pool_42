#include <unistd.h>
void ft_putchar(char c){
    char nl=' ';
    write (1,&c,sizeof(char));
    write(1,&nl,1);
 }
void ft_print_alphabets(){
    char c;
    c='a';
    while (c<='z')
    {
        ft_putchar(c);
        c++;
    }
}
int main(){
    ft_print_alphabets();
}
