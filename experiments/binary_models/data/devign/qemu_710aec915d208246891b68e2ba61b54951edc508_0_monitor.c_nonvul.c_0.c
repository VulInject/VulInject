static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    FUN2(VAR2);
    if (!VAR6)
    {
        VAR8 = FUN3();
        if (VAR4)
        {
            FUN4(VAR4);
            FUN5(VAR8, "", VAR4);
        }
        else
        {
            FUN6(VAR8, "", FUN3());
        }
    }
    else
    {
        VAR8 = FUN7(VAR6);
    }
    if (VAR2->VAR9->VAR10)
    {
        FUN5(VAR8, "", VAR2->VAR9->VAR10);
        VAR2->VAR9->VAR10 = NULL;
    }
    FUN8(VAR2, FUN9(VAR8));
    FUN10(VAR8);
}