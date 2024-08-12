}
FUN1(VAR1);

static unsigned long FUN2(struct VAR2 *VAR3, void VAR4 *VAR5,
unsigned int VAR6, unsigned int VAR7, unsigned int *VAR8)
{
unsigned int VAR9;
unsigned long VAR10;
unsigned int VAR11 = VAR3->VAR12 + 1;
unsigned int VAR13 = VAR3->VAR13;

VAR7 &= VAR3->VAR12;
if (VAR13 != 1) {
VAR7 *= VAR13;
VAR11 *= VAR13;
VAR6 *= VAR13;
}
VAR9 = FUN3(VAR6, VAR11 - VAR7);

VAR10 = FUN4(VAR5, VAR3->VAR14 + VAR7, VAR9);
if (FUN5(VAR10))
VAR10 = FUN6(VAR10 + VAR6 - VAR9, VAR13);
else {
VAR10 = FUN4(VAR5 + VAR9, VAR3->VAR14, VAR6 - VAR9);
if (FUN5(VAR10))
VAR10 = FUN6(VAR10, VAR13);
}

FUN7();
*VAR8 = VAR6 - VAR10 * VAR13;

return VAR10;
}