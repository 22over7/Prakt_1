#include <stdio.h>

int main()
{
	int pins = 1;
	int i;

	while (i <= 9999)
	{

		if (pins < 10)
		{
			printf("000%d\n",pins);
			pins = (pins + 1);
			i++;
		}
		else if (pins < 100)
		{
			printf("00%d\n",pins);
			pins = (pins + 1);
			i++;
		}
		else if (pins < 1000)
		{
			printf("0%d\n",pins);
			pins = (pins + 1);
			i++;
		}
		else if (pins <= 9999)
		{
			printf("%d\n",pins);
			pins = (pins + 1);
			i++;
		}


	}

	return 0;


}
