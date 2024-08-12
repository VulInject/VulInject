static inline int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4)
{
unsigned VAR5;
int VAR6;

if (((VAR3 | VAR4) & (VAR7 | VAR8)) == 0) {
FUN2(&VAR2->VAR2, "", VAR9);
return 0;	
}

VAR4 &= ~VAR3;	
VAR5 = 0;
if (VAR3 & VAR7)
VAR5 |= VAR10;
if (VAR3 & VAR8)
VAR5 |= VAR11;

VAR6 = FUN3(VAR2, 0, VAR12, VAR5);
if (VAR6 < 0)
FUN2(&VAR2->VAR2, "", VAR9);

return VAR6;
}