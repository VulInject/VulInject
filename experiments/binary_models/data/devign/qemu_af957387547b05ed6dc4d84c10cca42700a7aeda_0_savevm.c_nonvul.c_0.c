void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8 = NULL;
    const char *VAR9 = FUN2(VAR4, "");
    if (!FUN3())
    {
        FUN4(VAR2, "");
        return;
    }
    VAR6 = NULL;
    while ((VAR6 = FUN5(VAR6)))
    {
        if (FUN6(VAR6))
        {
            FUN7(VAR6, VAR9, &VAR8);
            if (VAR8)
            {
                FUN4(VAR2, ""
                                    "",
                               FUN8(VAR6), FUN9(VAR8));
                FUN10(VAR8);
            }
        }
    }
}