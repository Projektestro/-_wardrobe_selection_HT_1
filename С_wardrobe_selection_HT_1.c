#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Задание: Создать основу для чат-бота, предлагающий одежду, которую можно надеть на улицу в зависимости от температуры воздуха, осадков, наличия яркого солнца

int main(int argc, char *argv[]) {
	
	int temp = 0;
	int rain = 0;
	int sun = 0;
	
	int cmd = 0;
	
	do
	{
		printf("Choose action\n");
		printf("1. Choose wardrobe\n");
		printf("0. Exit\n");		
		
		scanf("%i", &cmd);
		
		switch(cmd)
		{
			case 1:
				{
				printf("What temperature outside?\n");
				scanf("%i", &temp);
				
				printf("It's raining (1 - Yes / 0 - No)?\n");
				scanf("%i", &rain);
				
				switch(rain)
				{
					case 1:
						{
						printf("Take an umbrella\n");	
						}
						break;
					case 0:
						{
						printf("Bright sun (1 - Yes / 0 - No)?\n");
						scanf("%i", &sun);
						
						if(sun = 1)
							{
							printf("Wear sunglasses\n");		
							}	
						}
						break;
					default:
						break;
				}
				if(temp <= 5)
					{
					printf("Put on a coat\n");
					}
				else if(temp <= 15)
					{
					printf("Put on a jacket\n");
					}	
				else if(temp > 15)
					{
					printf("Put on a T-shirt\n");	
					}
				printf("Good walk!\n\n");					
				}
				break;
			default:
				break;
		}
	}
	while(cmd);
	
	return 0;
}