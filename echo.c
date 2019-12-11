/* 
Copyright 2019. fkillrra@SCP
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void des()
{
	system("clear");
	printf("You just need to send the output number as it is.\n");
	printf("But you will have to enter a number that prints 1000 times.\n\n");
}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int random = 0;
	int ans = 0;
	srand(time(random));

	des();

	for(int i = 0; i < 1000; i++)
	{	
		random = rand();
		printf("%d\n>> ", random % 10);
		scanf("%d", &ans);

		if(ans != (random % 10))
		{
			printf("I think the computer is faster than you.\n");
			exit(1);
		}
	}

	printf("\n\n===========Congratulations!!!===========\n");
	printf("flag is scpCTF{Y0u_are_a_9re4t_pr0gramm3r!}\n");

	return 0;
}