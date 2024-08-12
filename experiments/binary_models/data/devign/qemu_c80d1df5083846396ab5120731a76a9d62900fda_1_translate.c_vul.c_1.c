static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    TCGv VAR4;
    if (FUN3(!VAR2->VAR5))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    if (FUN4(VAR2->VAR6))
    {
        VAR4 = FUN5();
        FUN6(VAR4, VAR7[FUN7(VAR2->VAR6)]);
    }
    else
    {
        VAR4 = FUN8(0);
    }
    FUN9(VAR4, VAR4, VAR7[FUN10(VAR2->VAR6)]);
    FUN11(VAR8, VAR4);