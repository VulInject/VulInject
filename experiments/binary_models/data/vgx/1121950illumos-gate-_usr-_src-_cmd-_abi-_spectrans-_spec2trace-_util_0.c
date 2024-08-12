char *
FUN1(char *VAR1)
{
char	*VAR2;

VAR2 = FUN2(VAR1);
VAR2--;
while (VAR2 >= VAR1 && FUN3(*VAR2))
VAR2--;
return (++VAR2);
}