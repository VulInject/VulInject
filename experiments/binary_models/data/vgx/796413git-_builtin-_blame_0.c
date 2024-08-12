static int FUN1(const struct VAR1 *VAR1, const char *VAR2, int VAR3)
{
int *VAR4 = VAR1->VAR5;

FUN2(VAR3);


if (*VAR4 & VAR6)
*VAR4 |= VAR7;
if (*VAR4 & VAR8)
*VAR4 |= VAR6;
*VAR4 |= VAR8 | VAR9;

if (VAR2)
VAR10 = FUN3(VAR2);
return 0;
}