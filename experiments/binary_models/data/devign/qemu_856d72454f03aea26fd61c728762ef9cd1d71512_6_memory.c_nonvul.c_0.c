static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR3 *VAR5 = FUN3(VAR2->VAR6);
    FUN4(VAR2, VAR4, VAR5, false);
    FUN4(VAR2, VAR4, VAR5, true);
    FUN5(&VAR7);
    FUN6(VAR2->VAR8);
    VAR2->VAR8 = VAR5;
    FUN7(&VAR7);
    FUN6(VAR4);
    FUN8(VAR2);
}