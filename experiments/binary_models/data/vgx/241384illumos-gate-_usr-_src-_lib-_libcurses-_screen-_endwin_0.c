int
FUN1(void)
{
char	VAR1 = VAR2->VAR3;
int	VAR4;



VAR2->VAR3 = VAR5;
VAR4 = FUN2();
VAR2->VAR3 = VAR1;
return (VAR4);
}