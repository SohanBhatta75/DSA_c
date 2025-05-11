#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* link; // self reoccuring structure
};

void traverse(struct Node* ptr);
struct Node* insertAtEnd(struct Node* head, int data);
int main(){
	struct Node* head = NULL;
	head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* current;
	current = (struct Node*)malloc(sizeof(struct Node));
	
	head -> data = 1;
	head -> link = NULL;
	
	current -> data = 2;
	current -> link = NULL;
	head -> link = current;
	
	head = insertAtEnd(head, 4);
		traverse(head);
	return 0;
}

void traverse(struct Node* ptr){
	while(ptr != NULL){
		printf("%d\t", ptr -> data);
		ptr = ptr -> link;
	}
}

struct Node* insertAtEnd(struct Node* head, int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	struct Node* prev = head;
	while(prev -> link != NULL){
		prev = prev -> link;
	}
	newNode -> data = data;
	prev -> link = newNode;
	newNode -> link = NULL;
	
	return head;
	
}
