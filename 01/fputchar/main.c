#include <unistd.h>
//write(1, &c, 1);: Inside the function, the write() system call is used.
// This function is used for low-level writing of data to a file descriptor.
// breakdown of its arguments:
//----
//The first argument 1 represents the file descriptor.
// In UNIX and UNIX-like systems, 0 is standard input,
// 1 is standard output, and 2 is standard error.
// So, 1 directs the output to the standard output, which is typically the screen.
//---------
//The second argument &c is the address of the character c.
// The write() function requires a pointer to the buffer containing the data to be written.
// In this case, it's the address of the character variable c.
//--------
//The third argument 1 specifies the number of bytes to write.
// Since a char is 1 byte in size, this argument is set to 1.

void fputchar(char c){
    write(1,&c,1);
}
void fpustring(char* str){
    int length = 0;
    while (str[length]!='\0'){
        length++;
    }
    write(1,str, length);
}

int main() {
    char b = 'W';
    char* str="Hei Hei!\n";

    fputchar(b);
    fputchar('\n');
    fpustring(str);
    return 0;
}
