#include <stdio.h>

#include <stdlib.h>

int main(void)

{

	int year;

	printf("��J�@�Ӧ褸�~�ơG");

	scanf("%d" , &year);

	if(year % 400 == 0 )

			printf("%d�~�O�|�~\n",year);  

	else if(year % 100 == 0)

			printf("%d�~�O���~\n",year);

	else if(year % 4 == 0)

			printf("%d�~�O�|�~\n",year);

	else

			printf("%d�~�O���~\n",year);

    system("pause");

    return 0; 

}
