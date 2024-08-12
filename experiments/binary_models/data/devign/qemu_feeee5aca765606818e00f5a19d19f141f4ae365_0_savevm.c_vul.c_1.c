void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8, *VAR9;
    int VAR10;
    const char *VAR11 = FUN2(VAR4, "");
    VAR8 = FUN3();
    if (!VAR8)
    {
        FUN4(VAR2, "");
        return;
    }
    FUN5(VAR6, &VAR12, VAR13)
    {
        VAR9 = VAR6->VAR14;
        if (FUN6(VAR9))
        {
            VAR10 = FUN7(VAR9, VAR11);
            if (VAR10 < 0)
            {
                if (VAR10 == -VAR15)
                    FUN4(VAR2, "", FUN8(VAR9));
                else
                    FUN4(VAR2, ""
                                        "",
                                   VAR10, FUN8(VAR9));
            }
        }
    }
}