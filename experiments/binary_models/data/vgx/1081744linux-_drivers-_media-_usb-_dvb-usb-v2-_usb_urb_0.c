static int FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3 & VAR4) {
while (VAR2->VAR5) {
VAR2->VAR5--;
FUN2(VAR2->VAR6[VAR2->VAR5]);
}
}

VAR2->VAR3 &= ~VAR4;

return 0;
}