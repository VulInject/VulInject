int FUN1(VAR1 *VAR2,
VAR3 *VAR4)
{
unsigned long long VAR5;
int VAR6;

*VAR4 = -1;
VAR6 = FUN2(VAR2->VAR7,
VAR2->VAR8,
VAR9,
&VAR5);
if (VAR6 <= 0)
return VAR6;

*VAR4 = (VAR3)VAR5;

return 1;
}