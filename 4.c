#include<stdio.h>
void display(int no);
void main(){
	
int no;
printf("Enter the number: ");
scanf("%d",&no);

display(no);

	
}

void display(int no){
	
	if(no==0){
		return;
	}
	
	printf("hello world\n");
	display(no-1);
	 
	
}

