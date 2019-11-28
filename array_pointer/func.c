extern char buffer[100];
void func(void)
{
	
	printf("array addr = %p\n",buffer);
	printf("array data = %s\n",buffer);
	for(int i = 0; i < 100; i++)
		printf("0x%02x ",(unsigned char)buffer[i]);
	printf("\n");
}
