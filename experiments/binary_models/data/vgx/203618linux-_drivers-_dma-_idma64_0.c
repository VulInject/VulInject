static void FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
u32 VAR4 = FUN2(1) | FUN3(0);
u32 VAR5 = 0;


VAR5 |= VAR6 | VAR7;

FUN4(VAR3, VAR8, VAR5);
FUN4(VAR3, VAR9, VAR4);


FUN5(VAR1, FUN6(VAR10), VAR3->VAR11);
FUN5(VAR1, FUN6(VAR12), VAR3->VAR11);


FUN7(VAR1);
}