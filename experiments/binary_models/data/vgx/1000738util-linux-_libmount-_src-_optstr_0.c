static int FUN1((FUN2(1,2,3)))
FUN3(char **VAR1, char *VAR2, const char *VAR3, char **VAR4)
{
size_t VAR5 = strlen(VAR3);			
size_t VAR6 = strlen(*VAR1);
size_t VAR7 = strlen(VAR2);
size_t VAR8;
char *VAR9;
int VAR10;


VAR10 = !(VAR2 > *VAR1 && *(VAR2 - 1) == '');


VAR8 = VAR2 - *VAR1;

VAR9 = realloc(*VAR1, VAR6 + VAR10 + VAR5 + 1);
if (!VAR9)
return -VAR11;


memset(VAR9 + VAR6, 0, VAR10 + VAR5 + 1);


*VAR1 = VAR9;
VAR2 = VAR9 + VAR8;

if (VAR7)

memmove(VAR2 + VAR5 + VAR10, VAR2, VAR7 + 1);
if (VAR10)
*VAR2++ = '';

memcpy(VAR2, VAR3, VAR5);

if (VAR4) {

*VAR4 = VAR2 + VAR5;
if (**VAR4 == '')
(*VAR4)++;
}
return 0;
}