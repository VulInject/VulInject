static int FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4 = 0;

if (VAR3) {
VAR2->VAR5 |= VAR6;
} else {
VAR2->VAR5 &= ~VAR6;
}



VAR4 = VAR2->VAR7;
if (VAR4)
FUN2(VAR2);

FUN3(VAR2, VAR8, VAR2->VAR5);

if (VAR4)
FUN4(VAR2);

return 0;
}