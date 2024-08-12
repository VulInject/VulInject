int
FUN1(const char* VAR1, char* VAR2, int VAR3)
{
int	VAR4;

if ((VAR4 = readlink(VAR1, VAR2, VAR3)) < 0) return(-1);
if (VAR4 >= VAR3)
{
VAR5 = VAR6;
return(-1);
}
VAR2[VAR4] = 0;
if (FUN2(*VAR2))
{
register char*	VAR7;
register char*	VAR8;
register char*	VAR9;
register char*	VAR10;
int		VAR11 = 0;
char		VAR12[VAR13];

VAR7 = VAR2;
VAR8 = VAR12;
while (FUN3(*++VAR7) || *VAR7 == '' || *VAR7 == '');
if (*VAR7++)
{
for (;;)
{
if (!*VAR7 || FUN2(*VAR7))
{
if (VAR11)
{
*VAR8 = 0;
VAR4 = VAR8 - VAR12;
strcpy(VAR2, VAR12);
}
break;
}
if (VAR8 >= &VAR12[sizeof(VAR12)]) break;
*VAR8++ = *VAR7++;
if (!VAR11 && VAR8 < &VAR12[sizeof(VAR12) - VAR14 + 1]) for (VAR4 = 0; VAR4 < VAR15; VAR4++)
{
if (*(VAR10 = VAR7 - 1) == *(VAR9 = VAR16[VAR4]))
{
while (*VAR9 && *VAR10++ == *VAR9) VAR9++;
if (!*VAR9)
{
VAR11 = 1;
strcpy(VAR8 - 1, VAR17);
VAR8 += VAR14 - 1;
VAR7 = VAR10;
break;
}
}
}
}
}
}
return(VAR4);
}