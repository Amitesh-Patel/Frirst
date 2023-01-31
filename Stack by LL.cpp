#include <stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	struct Node *next;
	}*top=NULL;

void push(int x){
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	if(t==NULL)
		printf("stack is full\n");  //linked list me to stack full hone ke bahut kam chances h
	else{
		t->data=x;
		t->next=top;
		top=t;
		}
}
int pop(){
	struct Node *t;
	int x=-1;
	if(top==NULL)
		printf("Stack is Empty\n");
	else{
		t=top;
		top=top->next;
		x=t->data;
		free(t);
	}
	return x;
}
void Display(){
	struct Node *p;
	p=top;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
}
printf("\n");
}



//reversing a array by stack
int main(){
	int val, n, i,
	arr[10];
	//clrscr();
	printf("\n Enter the number of elements in the array : ");
	scanf("%d", &n);
	printf("\n Enter the elements of the array : ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<n;i++)
		push(arr[i]);
	for(i=0;i<n;i++){
		val = pop();
		arr[i] = val;
}
	printf("\n The reversed array is : ");
	for(i=0;i<n;i++)
	printf("\n %d", arr[i]);
	return 0;
}

/*
int main()
{
push(10);
push(20);
push(30);
Display();
printf("%d ",pop());
return 0;
}
*/
