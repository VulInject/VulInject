int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    int VAR8;
    VAR9 *VAR10;
    CreateCo VAR11 = {
        .VAR2 = VAR2,
        .VAR3 = FUN2(VAR3),
        .VAR5 = VAR5,
        .VAR8 = VAR12,
        .VAR13 = NULL,
    };
    if (!VAR2->VAR14)
    {
        FUN3(VAR7, "", VAR2->VAR15);
        VAR8 = -VAR16;
        goto VAR17;
    }
    if (FUN4())
    {
        FUN5(&VAR11);
    }
    else
    {
        VAR10 = FUN6(VAR18);
        FUN7(VAR10, &VAR11);
        while (VAR11.VAR8 == VAR12)
        {
            FUN8(FUN9(), true);
        }
    }
    VAR8 = VAR11.VAR8;
    if (VAR8 < 0)
    {
        if (VAR11.VAR13)
        {
            FUN10(VAR7, VAR11.VAR13);
        }
        else
        {
            FUN11(VAR7, -VAR8, "");
        }
    }
VAR17:
    FUN12(VAR11.VAR3);
    return VAR8;
}