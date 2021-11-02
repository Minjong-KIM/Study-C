#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare_victory(int com, int me)
{
	if (com == 0)
	{
		printf("computer : scissors\n\n");
		if (me == 0) return 2;
		else if (me == 1) return 1;
		else if (me == 2) return 0;
	}

	else if (com == 1)
	{
		printf("computer : rock\n\n");
		if (me == 0) return 0;
		else if (me == 1) return 2;
		else if (me == 2) return 1;
	}

	else if (com == 2)
	{
		printf("computer : paper\n\n");
		if (me == 0) return 1;
		else if (me == 1) return 0;
		else if (me == 2) return 2;
	}
}

void main()
{
	int com = 0;
	int me = 0;
	char ask_finish;
	int human = 0, computer = 0, draw = 0;
	int tmp = 0;

	srand(time(NULL));

	while (1)
	{
		com = rand() % 3;
		
		printf("0 : scissors, 1 : rock, 2 : paper\n:");
		scanf("%d", &me);

		if (me == 0) printf("you : scissors\n");
		else if (me == 1) printf("you : rock\n");
		else if (me == 2) printf("you : paper\n");
		else
		{
			printf("again\n\n");
			continue;
		}

		tmp = compare_victory(com, me);

		if (tmp == 0)
		{
			printf("computer win\n");
			computer++;
		}
		else if (tmp == 1)
		{
			printf("human win\n");
			human++;
		}
		else if (tmp == 2)
		{
			printf("draw\n");
			draw++;
		}

		printf("\ncomputer win : %d, human win : %d, draw : %d\n\n", computer, human, draw);

		printf("Would you like to play again? (y/n) : ");

		do
		{
			ask_finish = getchar();
		} while (ask_finish == '\n');

		if (ask_finish == 'n')
		{
			break;
		}

		printf("\n");
	}
}