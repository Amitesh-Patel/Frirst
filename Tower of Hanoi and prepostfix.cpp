/*
infix , postfix , prefix
computers find it difficult to parse as the computer needs a lot of information to evaluate the expression. 
Information is needed about operator precedence and associativity rules, and brackets which override these rules.
So, computers work more efficiently with expressions written using prefix and postfix notations
*/
 
 
 //tower of hanoi
 
 #include <stdio.h>
 
 #include <stdlib.h>
 
 void move(int n,char source,char dest,char spare){
 	if(n==1){
 		printf("\n Move from %c to %c",source,dest);
	 }
	 else{
	 	move(n-1,source,spare,dest);
	 	move(1,source,dest,spare);
	 	move(n-1,spare,dest,source);
	 }
 }
 
  int main(){
 	int n;
 	printf("Enter the number of towers\n");
 	scanf("%d",&n);
 	move(n,'A','B','C');
 	return 0;
 }
