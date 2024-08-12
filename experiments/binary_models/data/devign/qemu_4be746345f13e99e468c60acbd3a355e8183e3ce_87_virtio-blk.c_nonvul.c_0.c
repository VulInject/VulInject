static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = NULL;
    if (FUN3(VAR8))
    {
        if (!VAR5->VAR11)
        {
            return;
        }
        FUN4(VAR5->VAR11);
        VAR5->VAR11 = NULL;
    }
    else if (FUN5(VAR8) || FUN6(VAR8))
    {
        if (VAR5->VAR11)
        {
            return;
        }
        FUN7();
        FUN8(FUN9(VAR5), &VAR5->VAR12, &VAR5->VAR11, &VAR10);
        if (VAR10 != NULL)
        {
            FUN10("", FUN11(VAR10));
            FUN12(VAR10);
        }
    }
}