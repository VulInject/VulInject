static inline void FUN1(struct VAR1 *VAR2,
VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR7->VAR8[VAR2->VAR9];
struct VAR10 *VAR11 = &VAR6->VAR11[VAR6->VAR12];
unsigned int VAR13 = VAR2->VAR14;
VAR3 *VAR15 = VAR4;

while (VAR13--) {

*VAR15 &= 0xFFFFFF00;

if (*VAR15 > VAR11->VAR16)
*VAR15 -= 1;

*VAR15 <<= VAR11->VAR17;

VAR15++;
}
}