static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2();
    if (!FUN3(VAR2))
    {
        if (VAR4)
        {
            FUN4(VAR4);
            FUN5(VAR6, "", VAR4);
        }
        else
        {
            FUN6(VAR6, "", FUN2());
        }
    }
    else
    {
        FUN6(VAR2->VAR7->VAR7, "", FUN7(VAR2->VAR7));
        FUN6(VAR6, "", VAR2->VAR7->VAR7);
        FUN8(VAR2->VAR7->VAR7);
        FUN9(VAR2->VAR7);
        VAR2->VAR7 = NULL;
    }
    if (VAR2->VAR8->VAR9)
    {
        FUN5(VAR6, "", VAR2->VAR8->VAR9);
        VAR2->VAR8->VAR9 = NULL;
    }
    FUN10(VAR2, FUN11(VAR6));
    FUN9(VAR6);
}