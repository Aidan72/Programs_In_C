#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fib(int n){

        if(n == 1){
                return 0;

        }else if(n == 2){

                return 1;
        }
        int q = fib(n - 1) + fib(n - 2);

        return q;

}


int main(){

        int n;
        scanf("%d", &n);
        printf("%d\n", fib(n));




        return 0;
}
