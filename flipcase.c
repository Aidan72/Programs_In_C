#include <stdio.h>
#include <math.h>
#include <string.h>

char flipCase(char c);

void readLine(char string[], int size){

        fgets(string, size, stdin);

        int i = atoi("3");

        int len = strlen(string);
}
int main(){

        char c;
        scanf("%c", &c);
        c = flipCase(c);
        printf("%c", c);

        return 0;
}
char flipCase(char c){
        char a;
        if(c >= 'a' && c <= 'z'){
                return c - 32;
        } else if(c >= 'A' && c <= 'Z'){
                return c + 32;
        } else {
                return c;
        }
        return a;
}
