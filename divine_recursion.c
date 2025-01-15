#include <stdio.h>
#include <stdlib.h>


int sum(int epoch[], int size){
        //basecase
        if(size == 1){
                return epoch[0];
        }
        int x = sum(epoch, size - 1);
        return x + epoch[size - 1];
}
// n! = n(n-1)!
// 1! = 1
int factorialization(int q){
        ///basecase///
        if(q == 1){
                return 1;
        }

        int z = q * factorialization(q - 1);

        return z;
}
int factloop(int n){
        int ans = n;
        for(int i = 1; i < n ; i++){

                ans *= i;
        }
        return ans;
}
int main(){
        //int epoch[5] = {1,2,3,4,5};
        //int s = sum(epoch, 5);
        int n;
        scanf("%d", &n);
        int s = factloop(n);

        printf("%d\n", s);

        return 0;
}
