VAR1 *FUN1(const char *VAR2, const char *VAR3, const VAR4 *VAR5, VAR6 *VAR7, VAR8 **VAR9)
{
    VAR1 *VAR10;
    VAR11 *VAR12;
    const VAR13 *VAR14;
    VAR8 *VAR15 = NULL;
    VAR12 = FUN2(VAR2);
    if (!VAR12)
    {
        FUN3(VAR9, "", VAR2);
        return NULL;
    }
    if (!FUN4(VAR12, VAR16))
    {
        FUN3(VAR9, "", VAR2);
        return NULL;
    }
    if (FUN5(VAR12))
    {
        FUN3(VAR9, "", VAR2);
        return NULL;
    }
    VAR10 = FUN6(VAR2);
    if (VAR5)
    {
        for (VAR14 = FUN7(VAR5); VAR14; VAR14 = FUN8(VAR5, VAR14))
        {
            FUN9(VAR10, VAR7, VAR14->VAR17, &VAR15);
            if (VAR15)
            {
                goto VAR18;
            }
        }
    }
    FUN10(FUN11(), VAR3, VAR10, &VAR15);
    if (VAR15)
    {
        goto VAR18;
    }
    FUN12(VAR10, &VAR15);
    if (VAR15)
    {
        FUN13(FUN11(), VAR3, &VAR19);
        goto VAR18;
    }
VAR18:
    if (VAR15)
    {
        FUN14(VAR9, VAR15);
        FUN15(VAR10);
        return NULL;
    }
    return VAR10;
}