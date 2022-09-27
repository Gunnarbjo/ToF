#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 200

int main(int argc, char** argv){
    
    char istr[MAX_LENGTH];
    while(scanf("%s", istr) != EOF){
        if(strchr(istr, 120) != NULL){
            for(int i = 0; i < strlen(istr); i++){
                printf("x");
            }
        }else{
            printf("%s",istr);
        }
        printf("\n");
    }
    return 0;
}