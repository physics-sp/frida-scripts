#include <stdio.h>
#include <unistd.h>


int main(int argc, char * argv[])
{
	int a = 12345;
	printf("%d\n", a);
	sleep(10);
	printf("%d\n", a);
	return 0;
}