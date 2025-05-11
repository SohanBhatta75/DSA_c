#include <stdio.h>
#define max 10
struct queue{
	int front;
	int rear;
	int arr[max];
};
struct queue q;

int inq(int n); // this is the method for insrtion in queue
void deq();// this is the method for deletion in queue
void print(); // this is the method for printing the queue's elements

int main(){
	q.rear = -1;
	q.front= -1;
	inq(1);
	inq(2);
	inq(3);
	inq(4);
	inq(5);
	inq(6);
	deq();
	deq();
	print();
	return 0;
}

int inq(int n){
	if(q.rear == max - 1){
		printf("Queue is full\n");
		return 0;
	}
	else{
		q.rear += 1;
		
		if(q.front == -1){
			q.front = 0;
		}
		q.arr[q.rear] = n;
		return q.arr[q.rear];
	}
}

void deq(){
	if(q.front == -1 || q.front >= q.rear){
		printf("Queue is Empty\n");
	}
	else{
		q.front += 1;
	}
}

void print(){
	for(int i= q.front; i<=q.rear; i++){
		printf("%d\t", q.arr[i]);
	}
}
