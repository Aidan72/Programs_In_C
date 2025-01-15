// This is a program I built which utilizes a multidimensional array to handle student grades in a gradebook
// Initially I thought of this program as a 3 dimensional excel file with data x(number of classes), y(number of assignments), z(number of students) all equal to (3,3,3)
// You can build this multidimensional array to any parameters and constraints youd like

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	int numclasses;
	int numassignments;
	int numstudents;

	scanf("%d %d %d", &numclasses, &numassignments, &numstudents);
	
	int data[numclasses][numassignments][numstudents];
	
	for(int c = 0 ; c < numclasses ; c++){
		for(int a = 0 ; a < numassignments ; a++){
			for(int s = 0 ; s < numstudents ; s++){
				scanf("%d", &data[c][a][s]); 
			}
		}
	}
	
	for(int c = 0 ; c < numclasses ; c++){

		float totalov = 0;
	
		for(int a = 0 ; a < numassignments ; a++){
	
			float total = 0;
	
			for(int s = 0 ; s < numstudents ; s++){
				
				 total += data[c][a][s];

							
			}
	
		
		float average = total / numstudents;
		
		printf("%.2f " , average);


		
		}
	printf("\n");
	}
	for(int s = 0 ; s < numstudents ; s++){
		int total = 0;
		for(int a = 0 ; a < numassignments ; a++){
			for(int c = 0 ; c < numclasses ; c++){
				total += data[c][a][s];
			}
		}
	printf("%d ", total);
	}

	return 0;
}
