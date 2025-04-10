
#include <stdio.h>
#include <string.h>

	int
main(int argc, char **argv)
{
	char buffer[BUFSIZ];
	char *p;

	while (fgets(buffer, BUFSIZ, stdin) != NULL)
	{
		for (p = buffer; *p != 0; p++)
		{
			if (strncmp(p, "charset=utf-8", 13) == 0
				|| strncmp(p, "charset=UTF-8", 13) == 0)
			{
				fputs("charset=CP932", stdout);
				p += 12;
			}
			else if (strncmp(p, "# Original translations", 23) == 0)
			{
				fputs("# Generated from ja.po, DO NOT EDIT.", stdout);
				while (p[1] != '\n')
					++p;
			}
			else if (*(unsigned char *)p == 0x81 && p[1] == '_')
			{
				putchar('\\');
				++p;
			}
			else
			{
				if (*p & 0x80)
				{
					putchar(*p++);
					if (*p == '\\')
						putchar(*p);
				}
				putchar(*p);
			}
		}
	}
}
