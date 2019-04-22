#include<stdio.h>

int main(){
	char str[100];
	printf("enter a string\n");
	scanf("%s",str);
	int i=0;
	int state=0;
	while(str[i]!='\0'){
		if(str[i]=='a' && state==0){
			state=1;
		}
		else if(str[i]=='b' && state==0){
			state=0;
		}
		else if(str[i]=='a' && state==1){
			state=1;
		}
		else if(str[i]=='b' && state==1){
			state=2;
		}
		else if(str[i]=='a' && state==2){
			state=1;
		}
		else if(str[i]=='b' && state==2){
			state=3;
		}
		else if(str[i]=='a' && state==3){
			state=1;
		}
		else if(str[i]=='b' && state==3){
			state=0;
		}
		i++;
	}
	if(state==3){
		printf("valid \n");
		
	}
	else{
		printf("invalid\n");
	} 
}
