#include <stdio.h>
int main()
{
	int a = 13, b = -5;
	if((a^b)>>31 == 0)
	{
	    printf("same");
	}
	else
	printf("different");
	return 0;
}

//Here iam in branch 
