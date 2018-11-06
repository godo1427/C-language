#include <stdio.h>

int main(void)
{
	char ch = 0;
	while(1)
	{
		ch = getchar();
		
		if(ch=='\n') 
			break;
		else if(ch == ' ')
		{
			putchar(' ');
		}
		else
		{
			if(ch<97)
				ch = ch + 32;
			else
				ch = ch - 32;
		}
		printf("%c", ch);
	}
	
	return 0;
}
