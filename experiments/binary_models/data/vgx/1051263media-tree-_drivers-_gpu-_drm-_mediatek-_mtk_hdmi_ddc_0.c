static inline void FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4, unsigned int VAR5,
unsigned int VAR6)
{
unsigned int VAR7;

VAR7 = FUN2(VAR2->VAR8 + VAR3);
VAR7 &= ~VAR4;
VAR7 |= (VAR6 << VAR5) & VAR4;
FUN3(VAR7, VAR2->VAR8 + VAR3);
}