}
FUN1(VAR1);

void FUN2(struct VAR2 *VAR3, unsigned int VAR4,
unsigned int VAR5, u16 VAR6, u16 VAR7)
{
u16 VAR8 = FUN3(VAR3, VAR4, VAR5);
VAR8 &= ~VAR7;
VAR8 |= VAR6 & VAR7;
FUN4(VAR3, VAR4, VAR5, VAR8);
}