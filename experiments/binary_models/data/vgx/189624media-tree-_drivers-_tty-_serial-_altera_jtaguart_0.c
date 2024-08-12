static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
unsigned char VAR5, VAR6;
unsigned long VAR7;

while ((VAR7 = FUN2(VAR4->VAR8 + VAR9)) &
VAR10) {
VAR5 = VAR7 & VAR11;
VAR6 = VAR12;
VAR4->VAR13.VAR14++;

if (FUN3(VAR4, VAR5))
continue;
FUN4(VAR4, 0, 0, VAR5, VAR6);
}

FUN5(&VAR4->VAR15);
FUN6(&VAR4->VAR16->VAR4);
FUN7(&VAR4->VAR15);
}