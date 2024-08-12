int
FUN1(
unsigned char	VAR1)
{
int		VAR2;


VAR1 = ~VAR1;


VAR2 = ((VAR1 & VAR3) << 3) + VAR4;
VAR2 <<= ((unsigned)VAR1 & VAR5) >> VAR6;

return ((VAR1 & VAR7) ? (VAR4 - VAR2) : (VAR2 - VAR4));
}