static void FUN1(struct VAR1 *VAR2, int VAR3)
{
unsigned int VAR4;
VAR4 = FUN2(VAR2, VAR5);
if (VAR3) {
if (VAR4 & VAR6)
return;
FUN3(VAR2);
VAR4 |= VAR6;
} else
VAR4 &= ~VAR6;
FUN4(VAR2, VAR5, VAR4);
}