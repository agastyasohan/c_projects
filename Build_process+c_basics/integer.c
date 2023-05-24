#include<stdio.h>
#include<math.h>


int isPrime(int number){
	if(number<=1){
		return 0;
	}
	
	for(int i=2;i<=sqrt(number);i++){
		if(number%i == 0){
			return 0;
		}
	}
	
	return 1;

}

int main(){
	
	int number;
	printf("Enter an Integer between 1 to 100: ");
	scanf("%d",&number);
	
	if(number>1 && number<100){
	
		printf("Hexadecimal value: 0x%x\n",number);
		printf("Octal value: O%o\n",number);
		
		if(isPrime(number)){
			printf("Prime Number\n");
		}
		else{
			printf("Composite Number\n");
		}
	}
	else{
		printf("Not in Range\n");
	}
	
	return 0;

}
