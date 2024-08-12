int
FUN1(wchar_t *VAR1)
{
struct	VAR2 *VAR3, *VAR4;

if ((VAR3 = FUN2(VAR1))->VAR5 == NULL)
return (0);
VAR4 = VAR6[VAR7];	
if (VAR4 == VAR3)	
VAR6[VAR7] = VAR4->VAR8;
else {
while (VAR4->VAR8 != VAR3)
VAR4 = VAR4->VAR8;

VAR4->VAR8 = VAR3->VAR8;
}
free(VAR3->VAR5);
free(VAR3->VAR9);
free(VAR3);
return (1);
}