#include <stdio.h>
#include <string.h>

int main(void){
    char word[31];
    char *end, *pos;

    while(scanf("%s", word) != EOF){

        end = &word[strlen(word) -1];
        while(end >= word){
            pos = strstr(word, end);
            if(pos + strlen(end) == end){ 
                *end = '\0';
                break;
            }
            end--;
        }
        puts(word);
    }
    

    return 0;
}