int
FUN1(VAR1 *VAR2)
{
uint32_t	new, VAR3;

do {
VAR3 = *VAR2;
new = VAR3 & ~(VAR4 | VAR5);
} while (FUN2(VAR2, VAR3, new) != VAR3);

return ((VAR3 & VAR4) != 0);
}