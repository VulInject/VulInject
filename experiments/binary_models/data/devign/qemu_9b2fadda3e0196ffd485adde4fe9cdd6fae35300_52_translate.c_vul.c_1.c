static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    if (FUN3(VAR2->VAR4 || !VAR2->VAR5))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    if (FUN4(VAR2))
    {
        TCGv VAR6 = FUN5();
        FUN6(VAR6, VAR7[FUN7(VAR2->VAR8)]);
        FUN8(VAR9, VAR6);
        FUN9(VAR6);
    }
    else
    {
        FUN8(VAR9, VAR7[FUN7(VAR2->VAR8)]);
    }
}