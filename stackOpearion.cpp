#include <stdio.h>
#define max 10
struct stack{
	int top;
	int arr[max];
};

struct stack s;


int push(int n);
void pop();
void print();

int main(){
	s.top = -1;
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	pop();
	pop();
	print();
	return 0;
}

// for the push operation

int push(int n){
	if(s.top == max-1){
		printf("Stack is full\n");
		return 0;
	}
	else{
		s.top += 1;
		s.arr[s.top] = n;
		return s.arr[s.top];
	}
}

void pop(){
	if(s.top == -1){
		printf("stack is empty\n");
	}
	else{
		s.arr[s.top] = s.arr[s.top - 1];
		s.top -= 1;
	}
}

void print(){
	for(int i= 0; i<=s.top; i++){
		printf("%d\t", s.arr[i]);
	}
}

