static void FUN1(unsigned long VAR1, unsigned long VAR2)
{
void VAR3 *VAR4 = VAR5;

if ((VAR1 | VAR2) & (VAR6 - 1)) {
unsigned long VAR7;


FUN2(&VAR8, VAR7);
FUN3(VAR4, 0x03);

if (VAR1 & (VAR6 - 1)) {
VAR1 &= ~(VAR6 - 1);
FUN4(VAR1, VAR4 + VAR9);
FUN4(VAR1, VAR4 + VAR10);
VAR1 += VAR6;
}

if (VAR2 & (VAR6 - 1)) {
VAR2 &= ~(VAR6 - 1);
FUN4(VAR2, VAR4 + VAR9);
FUN4(VAR2, VAR4 + VAR10);
}

FUN3(VAR4, 0x00);
FUN5(&VAR8, VAR7);
}

FUN6(VAR4 + VAR10, VAR1, VAR2);
FUN7(VAR4);
}