#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int scientificnotation(int n){

	if( n > 0 && n < 10 ){

		return 0;
	}else{

		return 1 + scientificnotation(n / 10);
	}
	
}
int main(){

