#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void encode(){
    printf("Введите: ");
    char c;
    while ((c = getchar()) != '\n'){
        
        if(c == ' '){
            continue;
        }

        printf("%x ", c);
    
    }   

}



void decode(){

    printf("Введите: ");

    int c;

    do{
        scanf("%x", &c);
        if(c == ' '){
            printf("%c ", c);
            continue;
        }
        
    
    } while ((char)c!= '\n');
    
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