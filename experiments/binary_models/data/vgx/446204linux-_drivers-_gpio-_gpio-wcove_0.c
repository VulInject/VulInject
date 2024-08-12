static inline int FUN1(int VAR1, enum ctrl_register VAR2, unsigned int *VAR3)
{
unsigned int VAR4 = VAR2 == VAR5 ? VAR6 : VAR7;

if (VAR1 < VAR8) {
VAR4 += 0;
*VAR3 = FUN2(VAR1);
} else {
VAR4 += 1;
*VAR3 = FUN2(VAR1 - VAR8);
}

return VAR4;
}