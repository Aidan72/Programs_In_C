#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int size;
	int capacity;
	int* arr;

} Vector;
void print_vector(Vector* vec){

	for(int i=0 ; i< vec->size ; i++){
		printf("%d " , vec->arr[i]);
	}

}
void initialize_vector(Vector* vec, int size, int capacity){
	vec->size=size;
	vec->capacity=capacity;
	vec->arr=malloc(capacity*sizeof(int));	
}	

int main(){
	int input;
	scanf("%d", &input);

	Vector vec = {.size=0, .capacity=0, .arr=NULL};
	initialize_vector(&vec, 0,6);

	while(input != -1){
		if(input==0){
			//remove last (pop)
			vec.size -= 1;
		}
		else if(input == 1){
			//push (add element to the end)
			int x;
			scanf("%d", &x);
			if(vec.size<vec.capacity){
				vec.size++;
				vec.arr[vec.size-1]=x;
			}

			else if (vec.size==vec.capacity){
				vec.arr=realloc(vec.arr, 2*vec.capacity* sizeof(int));
				vec.capacity*=2;
				vec.size++;
				vec.arr[vec.size-1]=x;
			}

		}
		scanf("%d", &input);


	}
	print_vector(&vec);



	return 0;
}
