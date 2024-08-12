int FUN1(const VAR1 *VAR2, unsigned int VAR3,
unsigned long VAR4, unsigned long VAR5,
unsigned long *VAR6, unsigned int *VAR7)
{
if (FUN2(VAR3 < 1 || VAR3 > 2))
return -VAR8;
if (VAR3 == 2 && VAR2[1] == 1) {
VAR4 = FUN3(VAR5);
if (VAR4 < VAR9)
*VAR6 = VAR4;
else
return -VAR8;
} else {
*VAR6 = VAR4;
}
*VAR7 = VAR10;
return 0;
}