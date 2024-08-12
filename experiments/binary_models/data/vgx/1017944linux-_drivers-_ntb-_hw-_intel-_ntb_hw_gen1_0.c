static inline int FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
VAR3 &= VAR2->VAR4;
VAR2->VAR5 |= VAR3;

return !!VAR3;
}