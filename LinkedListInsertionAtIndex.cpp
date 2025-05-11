#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* link; // self reoccuring structure
};

void traverse(struct Node* ptr);
struct Node* insertAtIndex(struct Node* head, int data, int index);
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
	
	head = insertAtIndex(head, 3, 1);
		traverse(head);
	return 0;
}

void traverse(struct Node* ptr){
	while(ptr != NULL){
		printf("%d\t", ptr -> data);
		ptr = ptr -> link;
	}
}

struct Node* insertAtIndex(struct Node* head, int data, int index){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	struct Node* prev = head;
	int i = 0;
	while(i != index -1){
		prev = prev -> link;
		i++;
	}
	newNode -> data = data;
	newNode -> link = prev -> link;
	prev -> link = newNode;
	return head;
}
