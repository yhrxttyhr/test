#include<stdio.h>

void func(unsigned char *buffer_in, int length_in,  int number1, int number2, int number3, unsigned char *buffer_out, int length_out)
{
	unsigned char *buffer_tmp = NULL;
	int i = 0;
	int j = 0;
	int k = 0;

	buffer_tmp = (unsigned char*)malloc(length_in);
	if(!buffer_tmp)
	{
		printf("malloc error\n");
		return;
	}

	unsigned char *str = buffer_tmp;

	for(i = number1 - 1; i >= 0; i--)
	{
		for(j = 0; j < number2; j++)
		{
			for(k = 0; k < number3; k++)
			{
				*str = *(buffer_in + j * number1 * number3 + k + i * number3);
				str++;
			}
		}
	}

	memcpy(buffer_out, buffer_tmp, length_in);
	free(buffer_tmp);
}

int main()
{
	int i = 0;
	unsigned char buffer_raw[45] = {0};
	unsigned char buffer_out[45] = {0};

	for(i = 0; i < 45; i++)
		buffer_raw[i] = i;

	func(buffer_raw, sizeof(buffer_raw), 3, 5, 3, buffer_out, sizeof(buffer_out));
	
	for(i = 0; i < sizeof(buffer_out); i++)
		printf("%d ", buffer_out[i]);
	printf("\n");

	return 0;
}
