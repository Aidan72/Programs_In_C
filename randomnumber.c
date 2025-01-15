#include <stdio.h>
#include <stdlib.h>
//int r = rand() % (max - min) + min; defining a range looks like this
#include <time.h>



int main(){

        srand(time(NULL));

        int r = rand() % 50;

        printf("%d\n", r);

        r = rand() % 50;

        printf("%d\n", r);

        return 0;


}
