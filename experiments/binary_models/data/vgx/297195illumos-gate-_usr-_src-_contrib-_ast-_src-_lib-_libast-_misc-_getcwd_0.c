char*
FUN1(char* VAR1, size_t VAR2)
{
size_t		VAR3;
size_t		VAR4;
int		VAR5;

if (VAR1)
return FUN2(VAR1, VAR2) < 0 ? 0 : VAR1;
VAR5 = VAR6;
VAR3 = VAR7;
for (;;)
{
if (!(VAR1 = FUN3(VAR1, char, VAR3, 0)))
FUN4(VAR8);
if (FUN2(VAR1, VAR3) >= 0)
{
if ((VAR4 = strlen(VAR1) + VAR2 + 1) != VAR3 && !(VAR1 = FUN3(VAR1, char, VAR4, 0)))
FUN4(VAR8);
break;
}
if (VAR6 != VAR9)
{
free(VAR1);
return 0;
}
VAR3 += VAR7 / 4;
}
VAR6 = VAR5;
return VAR1;
}