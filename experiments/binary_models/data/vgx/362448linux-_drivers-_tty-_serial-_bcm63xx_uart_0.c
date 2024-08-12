static void FUN1(struct VAR1 *VAR2, int VAR3)
{
unsigned long VAR4;
unsigned int VAR5;

FUN2(&VAR2->VAR6, VAR4);

VAR5 = FUN3(VAR2, VAR7);
if (VAR3)
VAR5 |= VAR8;
else
VAR5 &= ~VAR8;
FUN4(VAR2, VAR5, VAR7);

FUN5(&VAR2->VAR6, VAR4);
}