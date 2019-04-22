#include<stdio.h>

int main(){
	char str[100];
	printf("enter a string\n");
	scanf("%s",str);
	int i=0;
	int state=0;
	while(str[i]!='\0'){
		if(str[i]=='1' && state==0){
			state=1;
		}
		else if(str[i]=='2' && state==0){
			state=2;
		}
		else if(str[i]=='3' && state==0){
			state=3;
		}
		else if(str[i]=='1' && state==1){
			state=1;
		}
		else if(str[i]=='2' && state==1){
			state=2;
		}
		else if(str[i]=='3' && state==1){
			state=3;
			}
		else if(str[i]=='1' && state==2){
			state=1;
		}
		else if(str[i]=='2' && state==2){
			state=2;
		}
		else if(str[i]=='3' && state==2){
			state=3;
		}
		else if(str[i]=='3' && state==3){
			state=3;
		}
		else if(str[i]=='2' && state==3){
			state=4;
		}else if(str[i]=='1' && state==3){
			state=4;
		}
		
		i++;
	}
	if(state==1||state==2||state==3){
		printf("valid \n");
		
	}
	else if(state==0||state==4){
		printf("invalid\n");
	} 
}
