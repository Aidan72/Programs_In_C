#include <stdio.h>
#include <stdlib.h>


void printmenu(){
	printf("0=delete list\n");
	printf("insert 1 [index] [value]\n");
	printf("delete 2 [index]\n");
	printf("print 3\n");
	printf("-1\n");

}
struct Node{
	int data;
	struct Node* next;
}; 

struct Node* create_node(int value){
	struct Node* node = malloc(sizeof(struct Node));
		
	node->data = value;

	node->next = NULL;

	return node;
}


struct Node* traverse(struct Node* list,int index){
	struct Node* node = list;
	for(int i=0; i<index; i++){
		node = node-> next;
	}
	return node; 
}

struct Node* delete(struct Node* node, int index){

	
}
void print_list(struct Node* list){
	if(list == NULL){
		printf("NULL\n");
		return;
	}
	struct Node* node = list;
	while(node != NULL){
		printf("%d ", node->data);
		node = node->next;
	}
	printf("\n");
}

int main(){
	
	int input = 0;
	struct Node* list = NULL;
	int size = 0;

	while( input != -1){
		scanf("%d", &input);
	
		if(input == 1){
	
			int index;
			int value;

			scanf("%d", &index);
			scanf("%d", &value);
			if(index>size){
				printf("%d is out of bounds\n",index);
			}
			else{
			size++;	
			if(list == NULL){
				list = create_node(value);

			}
			//insert beginning	
			else if(index == 0){
			
				struct Node* node = create_node(value);
				node->next = list;
				list = node;
			}
			else if(index!=-1){
				struct Node* cur= traverse(list,index-1);

				struct Node* node = create_node(value);
				node->next=cur->next;
				cur->next=node;
			}else if(index == -1){
				struct Node* node = create_node(value);
				struct Node* temp = list; 
				while(temp-> next != NULL){
					temp = temp->next;
				}

				temp-> next = node;
			}
			}
				

		} else if(input == 2){
			int index;
			scanf("%d", &index);

			if(index>size-1){
				printf("%d is out of bounds\n",index);
			}
			else{
				size--;
			if(index == 0){
				struct Node* temp = list;
				list=list->next;
				free(temp);
			}
			else if(index!=-1&&index<size){
				struct Node* cur= traverse(list,index-1);
				struct Node* temp = cur->next;
				cur->next=cur->next->next;
				free(temp);
			}else if(index == -1||index==size){
				struct Node* temp = list; 
				while(temp-> next->next != NULL){
					temp = temp->next;
				}

				free(temp->next);
				temp->next=NULL;
			}
			}



		} else if(input == 3){

		 
			print_list(list);
		
		
		}else if(input == 0){

			while(list != NULL){
				struct Node* temp = list;
				list = list-> next;
				free(temp);	
			}
		}


	}
	

	return 0;

}
