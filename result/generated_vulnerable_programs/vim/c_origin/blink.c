

#include <stdio.h>
#include <unistd.h>

	int
main(void)
{
	while (1)
	{
		printf("\e[?25h");
		fflush(stdout);
		usleep(400000);		
		printf("\e[?25l");
		fflush(stdout);
		usleep(250000);		
	}
	return 0;
}
