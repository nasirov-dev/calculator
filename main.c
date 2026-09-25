#include <stdio.h>
#include <windows.h>


void sound_effect(){
	
	Beep(600,500);
	Beep(500, 500);
	Beep(400, 500);
}

int main(){
	
	int choice;
	double number;
	int result;
	int count = 0;
	
	
	
  while (1){
		
		printf("\n  Calculator  \n");
        printf("1. +\n");
        printf("2. -\n");
        printf("3. *\n");
        printf("4. /\n");
        printf("5. Exit\n");
        printf("Choose an operation (1-5): ");
        scanf("%d", &choice);
        
        if (choice == 5){
        	
        	printf("\nHave a good day. Goodbye!");
        	return 0;
		}
		
		if (choice < 1 || choice > 5){
			
			printf("\nYou didn't enter valid number!'");
		}
		
		
		if (choice == 3){
			
			result = 1;
		}
		else {
			
			result = 0;
		}
		
		printf("\nPlease, enter the numbers: ");
		
		
		while (1) {
			
			count = count + 1;
			printf("\nEnter the number %d\n:  ", count);
			scanf("%lf", &number);
			
			
			if (number == 0){
				
				if (choice == 4 && count == 1){
					
					printf("\nThis number can't divide!\n'");
					
					count = count - 1;
					continue;
				}
				break;
			
		}
		
		switch(choice){
			
			case 1:
				result = result + number;
				break;
				
			case 2:
				if (count == 1) {
					
					result = number;
				}
				
				else {
					
					result = result - number;
				}
				break;
			case 3:
				
				result = result * number;
				break;
				
			case 4:
				if (count == 1){
					
					result = number;
				}
				else {
					
					if (number == 0){
						
						printf("Zero can't divide by any number!");
						count = count - 1;
						continue;
					}
					result = result / number;
				}
				break;
		}
		
		printf("\n        \n");
		printf("\n    Result: %d\n", result);
		printf("\n        \n");
		sound_effect();
	}
	return 0;
}

}















