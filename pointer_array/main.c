
char buffer[32] = "abcdefghi";


extern void func(void);

int main(void)
{
	printf("array date = %s\n",buffer);
	printf("array addr = %p\n",buffer);
	func();	
}
