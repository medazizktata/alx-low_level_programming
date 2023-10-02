#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int m=0;
	if (argc==1)
		printf("%d\n", 0);
	else 
	{
	for (int i=0; i<argc; i++){
		int n=atoi(argv[i]);
		if (n<0)
			m+=n;

	}
		printf("%d\n", m);
		return 0;
	}
}
