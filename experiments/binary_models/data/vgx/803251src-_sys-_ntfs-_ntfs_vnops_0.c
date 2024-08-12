int
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
FUN2("",
VAR3->VAR4, (long long)VAR3->VAR5);
if (VAR3->VAR6 != NULL)
*VAR3->VAR6 = VAR3->VAR4;
if (VAR3->VAR7 != NULL)
*VAR3->VAR7 = VAR3->VAR5;
if (VAR3->VAR8 != NULL)
*VAR3->VAR8 = 0;
return (0);
}