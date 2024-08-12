static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    char *VAR6 = FUN2(VAR4->VAR7);
    char *VAR8, *VAR9;
    int VAR10;
    if (!VAR6)
    {
        FUN3(VAR2, VAR11, "");
        VAR10 = VAR4->VAR7 ? FUN4(VAR12) : FUN4(VAR13);
        goto VAR14;
    }
    VAR9 = VAR6;
    while (VAR8 = FUN5(VAR9, "", &VAR9))
    {
        if (!FUN6((void **)&VAR4->VAR8, &VAR4->VAR15, sizeof(*VAR4->VAR8), NULL))
        {
            VAR10 = FUN4(VAR12);
            goto VAR14;
        }
        VAR10 = FUN7(&VAR4->VAR8[VAR4->VAR15 - 1], VAR8, VAR16, NULL, NULL, NULL, NULL, 0, VAR2);
        if (VAR10 < 0)
            goto VAR14;
    }
    if (VAR4->VAR17)
    {
        int VAR18;
        VAR10 = FUN8(&VAR4->VAR19, VAR4->VAR17, VAR2);
        if (VAR10 < 0)
            goto VAR14;
        VAR18 = FUN9(VAR4->VAR19);
        if (VAR18 != VAR4->VAR15)
        {
            FUN3(VAR2, VAR11, ""
                                      "",
                   VAR4->VAR15, VAR18, VAR4->VAR17);
            VAR10 = FUN4(VAR13);
            goto VAR14;
        }
    }
    else
    {
        VAR4->VAR19 = FUN10(VAR4->VAR15);
        if (!VAR4->VAR19)
        {
            FUN3(VAR2, VAR11, "", VAR4->VAR15);
            VAR10 = FUN4(VAR13);
            goto VAR14;
        }
    }
    if ((VAR10 = FUN11(&VAR4->VAR20, VAR4->VAR21, VAR2)))
        goto VAR14;
    VAR4->VAR18 = 0;
VAR14:
    FUN12(VAR6);
    return VAR10;
}