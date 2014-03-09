#include<stdio.h>

int const MAX_SIZE = 5;
int stack [5];
int top = -1;
int user_input = 0;
int user_choice = 0;
	
int push(int x) {
	if (top == (MAX_SIZE - 1)) {
		return -1;
	}
	else {
		stack [++top] = x;
		return 0;
	}
}

int pop () {
	if(top == 0) {
		return -1;
	}
	else {
		return stack [top--];
	}
}

void display () {
	int i = 0;
	for (i=top; i>=0; i--) {
		printf("ELEMENT AT POS. %d IS: %d\n", i, stack[i]); 
	}
	printf("\n\n"); 
}

void main() {
	int result = 0;
	while(1) {
		printf("==================================================================\n");	
		printf("ENTER YOUR CHOICE: 1.PUSH  |   2.POP   |   3.DISPLAY  |   4.EXIT \n");		
		printf("=====================================================================: ");	
		
		scanf("%d", & user_choice);
		
		switch(user_choice) {
			case 1:
				printf("ENTER ELEMENT TO PUSH: ");
				scanf("%d", & user_input);
				result = push(user_input);
				if(result == -1) {
					printf("ERROR: STACK OVRFLOW! CANNOT PUSH!\n");
				}
				else {
					printf("%d INSERTED SUCCESSFULLY!\n\n", user_input);
				}
				break;
			case 2:
				result = pop ();
				if(result == -1) {
					printf("ERROR: STACK UNDERFLOW! NOTHING TO POP!\n");
				}
				else {
					printf("POPPED ELEMENT IS %d\n", result);
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