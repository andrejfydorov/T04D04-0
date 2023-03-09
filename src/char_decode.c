#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void encode(){

    char c;
    while ((c = getchar()) != '\n'){
        
        if(c == ' '){
            continue;
        }

        printf("%x ", c);
    
    }   

}



void decode(){

    char c;

    printf("Введите: ");

    char c;
    char str[10];
    int i = 0;
    while ((c = getchar()) != '\n'){
        
        if(c == ' '){
            printf("%s ", str);
            continue;
        }
        
        str[i] = c;
        i++;
    
    } 
    
}


int main(int argc, char *argv[])
{
    if(argc!=2) {
        printf("Вы забыли ввести свое аргументы.\n");
        exit(1);
    }
    

    if(atoi(argv[1]) == 0) {
        encode();
    }

    if(atoi(argv[1]) == 1) {
        decode();
    }
    

  return 0;
    
 
    return 0;
}