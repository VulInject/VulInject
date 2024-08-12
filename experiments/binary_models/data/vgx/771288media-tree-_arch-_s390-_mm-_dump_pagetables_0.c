static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
VAR5 *VAR6, unsigned long VAR7)
{
unsigned int VAR8;
VAR9 *VAR10;
int VAR11;

for (VAR11 = 0; VAR11 < VAR12 && VAR7 < VAR13; VAR11++) {
VAR4->VAR14 = VAR7;
VAR10 = FUN2(VAR6, VAR7);
if (!FUN3(*VAR10)) {
if (FUN4(*VAR10)) {
VAR8 = FUN5(*VAR10) &
(VAR15 |
VAR16);
FUN6(VAR2, VAR4, VAR8, 3);
} else
FUN7(VAR2, VAR4, VAR10, VAR7);
} else
FUN6(VAR2, VAR4, VAR17, 3);
VAR7 += VAR18;
}
}