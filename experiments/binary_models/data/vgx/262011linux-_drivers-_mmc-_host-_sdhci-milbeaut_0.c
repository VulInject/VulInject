static void FUN1(struct VAR1 *VAR2)
{
u32 VAR3 = 0;

FUN2(2500, 3000);
VAR3 = FUN3(VAR2, VAR4);
VAR3 |= VAR5;
FUN4(VAR2, VAR3, VAR4);
VAR3 |= VAR6;
FUN4(VAR2, VAR3, VAR4);

VAR3 &= ~VAR5;
FUN4(VAR2, VAR3, VAR4);
FUN2(2500, 3000);

VAR3 = FUN3(VAR2, VAR7);
VAR3 |= VAR8;
FUN4(VAR2, VAR3, VAR7);
}