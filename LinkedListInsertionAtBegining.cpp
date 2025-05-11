#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* link; // self reoccuring structure
};

void traverse(struct Node* ptr);
struct Node* insertAtBegining(struct Node* head, int n);
int main(){
	struct Node* head = NULL;
	head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* current;
	current = (struct Node*)malloc(sizeof(struct Node));
	
	head -> data = 2;
	head -> link = NULL;
	
	current -> data = 3;
	current -> link = NULL;
	head -> link = current;
		
		head = insertAtBegining(head, 1);
		traverse(head);
		
	return 0;
}

void traverse(struct Node* ptr){
	while(ptr != NULL){
		printf("%d\t", ptr -> data);
		ptr = ptr -> link;
	}
}

struct Node* insertAtBegining(struct Node* head, int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode -> link = head;
	newNode -> data = data;
	return newNode;
}
