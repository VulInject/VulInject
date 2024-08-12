static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    TCGv VAR4, VAR5;
    if (FUN3(VAR2->VAR6))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    VAR4 = FUN4();
    FUN5(VAR2, VAR7);
    FUN6(VAR2, VAR4);
    VAR5 = FUN4();
    FUN7(VAR2, VAR5, VAR4);
    FUN8(VAR2, VAR5, VAR4);
    FUN9(VAR5);
    FUN9(VAR4);
}