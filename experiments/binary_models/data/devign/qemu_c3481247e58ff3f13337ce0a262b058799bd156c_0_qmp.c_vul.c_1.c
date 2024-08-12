void FUN1(const char *VAR1, const char *VAR2, const VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    const VAR11 *VAR12;
    VAR7 *VAR13 = NULL;
    if (!FUN2(VAR1))
    {
        FUN3(VAR8, "");
        return;
    }
    VAR10 = FUN4(VAR1);
    if (VAR4)
    {
        for (VAR12 = FUN5(VAR4); VAR12; VAR12 = FUN6(VAR4, VAR12))
        {
            FUN7(VAR10, VAR6, VAR12->VAR14, &VAR13);
            if (VAR13)
            {
                goto VAR15;
            }
        }
    }
    if (!FUN8(VAR10, VAR16))
    {
        FUN3(&VAR13, "", VAR1);
        goto VAR15;
    }
    FUN9(VAR10, &VAR13);
    if (VAR13)
    {
        goto VAR15;
    }
    FUN10(FUN11(FUN12(), ""), VAR2, VAR10, &VAR13);
VAR15:
    if (VAR13)
    {
        FUN13(VAR8, VAR13);
    }
    FUN14(VAR10);
}