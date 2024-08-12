static char **
FUN1(const char *VAR1, int *VAR2)
{
int			VAR3;
int			VAR4;
char	  **VAR5;
char	   *VAR6;
char	   *VAR7;
int			VAR8;
int			VAR9;
int			VAR10;
struct stat VAR11;

*VAR2 = 0;				


VAR3 = open(VAR1, VAR12 | VAR13, 0);
if (VAR3 < 0)
return NULL;
if (FUN2(VAR3, &VAR11) < 0)
{
close(VAR3);
return NULL;
}
if (VAR11.VAR14 == 0)
{

close(VAR3);
VAR5 = (char **) FUN3(sizeof(char *));
*VAR5 = NULL;
return VAR5;
}
VAR6 = FUN3(VAR11.VAR14 + 1);

VAR10 = read(VAR3, VAR6, VAR11.VAR14 + 1);
close(VAR3);
if (VAR10 != VAR11.VAR14)
{

free(VAR6);
return NULL;
}


VAR4 = 0;
for (VAR8 = 0; VAR8 < VAR10; VAR8++)
{
if (VAR6[VAR8] == '')
VAR4++;
}


VAR5 = (char **) FUN3((VAR4 + 1) * sizeof(char *));
*VAR2 = VAR4;


VAR7 = VAR6;
VAR9 = 0;
for (VAR8 = 0; VAR8 < VAR10; VAR8++)
{
if (VAR6[VAR8] == '')
{
int			VAR15 = &VAR6[VAR8] - VAR7;
char	   *VAR16 = FUN3(VAR15 + 1);

memcpy(VAR16, VAR7, VAR15);

if (VAR15 > 0 && VAR16[VAR15 - 1] == '')
VAR15--;
VAR16[VAR15] = '';
VAR5[VAR9++] = VAR16;
VAR7 = &VAR6[VAR8 + 1];
}
}
VAR5[VAR9] = NULL;

free(VAR6);

return VAR5;
}