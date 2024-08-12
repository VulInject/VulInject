void
FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
uint32_t VAR5;

FUN2(VAR3 < VAR2->VAR6);
VAR5 = FUN3(VAR2, VAR7);
if (VAR4)
VAR5 |= 1 << VAR3;
else
VAR5 &= ~(1 << VAR3);
FUN4(VAR2, VAR7, VAR5);
FUN5(VAR2);
}