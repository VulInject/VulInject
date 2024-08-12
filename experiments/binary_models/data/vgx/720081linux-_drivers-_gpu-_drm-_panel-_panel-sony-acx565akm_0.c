static void FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
u16 VAR4;

VAR2->VAR5 = VAR3;
if (!VAR2->VAR6)
return;
VAR4 = 0;
FUN2(VAR2, VAR7, (VAR8 *)&VAR4, 1);
VAR4 &= ~3;
VAR4 |= (1 << 8) | (VAR3 & 3);
FUN3(VAR2, VAR9, (VAR8 *)&VAR4, 2);
}