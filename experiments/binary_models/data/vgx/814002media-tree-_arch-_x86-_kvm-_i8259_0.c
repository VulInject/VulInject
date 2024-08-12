static inline int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
int VAR5, VAR6 = 1;
VAR5 = 1 << VAR3;
if (VAR2->VAR7 & VAR5)	
if (VAR4) {
VAR6 = !(VAR2->VAR8 & VAR5);
VAR2->VAR8 |= VAR5;
VAR2->VAR9 |= VAR5;
} else {
VAR2->VAR8 &= ~VAR5;
VAR2->VAR9 &= ~VAR5;
}
else	
if (VAR4) {
if ((VAR2->VAR9 & VAR5) == 0) {
VAR6 = !(VAR2->VAR8 & VAR5);
VAR2->VAR8 |= VAR5;
}
VAR2->VAR9 |= VAR5;
} else
VAR2->VAR9 &= ~VAR5;

return (VAR2->VAR10 & VAR5) ? -1 : VAR6;
}