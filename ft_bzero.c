void ft_bzero(void *str, unsigned int n)
{
    unsigned char* p = str;
    while(n > 0){
        *p = '\0';
        p++;
        n--;
    }
    
};

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[50];

//     strcpy(str,"This is string.h library function@@!");
//     puts(str);

//     ft_bzero(str,7);
//     puts(str+7);
   
//     return(0);
// }


//bzero does not return value