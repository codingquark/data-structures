#include<stdio.h>

int const MAX_SIZE = 3;	//Constatnt defining size of the queue
int queue [3];		//Array to hold queue elements
int count = 0;		//Variable to count currently stored elements in the queue
int head = 0;		//Head pointer, dequeue operation happens at head
int tail = 0;		//Tail pointer, enqueue operations happen at tail
	
void enqueue(int x) {
	queue[tail] = x;
	tail = (tail + 1) % MAX_SIZE;
	count = count + 1;
}

int dequeue () {
	head = head + 1;
	return queue[head - 1];
}

void display () {
	int i = 0;
	if(count != 0) {
		for (i=head; i <= tail; i++) {
			printf("ELEMENT AT POS. %d IS: %d\n", i, queue[i]); 
		}
	}
	else {
		printf("NOTHING TO DISPLAY, QUEUE IS EMPTY!\n");
	}
	printf("\n\n"); 
}

void main() {
int user_input = 0;
int user_choice = 0;

	while(1) {
		printf("==================================================================\n");	
		printf("ENTER YOUR CHOICE: 1.ENQUEUE  |   2.DEQUEUE   |   3.DISPLAY  |   4.EXIT \n");		
		printf("=====================================================================: ");	
		
		scanf("%d", & user_choice);
		
		switch(user_choice) {
			case 1:
				if(count >= MAX_SIZE) {
					printf("CANNOT ENQUEUE, QUEUE IS FULL!\n");
				}
				else {
					printf("ENTER ELEMENT TO ENQUEUE: ");
					scanf("%d", & user_input);
					enqueue(user_input);
					printf("%d INSERTED SUCCESSFULLY!\n\n", user_input);
				}
				break;
			case 2:
				if(count == 0) {
					printf("ERROR: NO ELEMENT IN THE QUEUE!\n");
				}
				else {
					printf("POPPED ELEMENT IS %d\n", dequeue);
				}
				break;
			case 3:
				display();
				break;
			case 4:
				exit();
				break;
			default:
				printf("ENTER A VALID CHOICE!\n");
				break;				
		}

	}
}