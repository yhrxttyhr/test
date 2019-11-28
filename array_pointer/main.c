
char *buffer = "abcdefghi";


extern void func(void);

int main(void)
{
	printf("pointer date = %s\n",buffer);
	printf("pointer addr = %p\n",buffer);
	func();	
}
