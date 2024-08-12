static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    char *VAR7 = FUN2(VAR5->VAR8);
    char *VAR9, *VAR10;
    int VAR11, VAR12;
    if (!VAR7)
    {
        FUN3(VAR2, VAR13, "");
        VAR11 = VAR7 ? FUN4(VAR14) : FUN4(VAR15);
        goto VAR16;
    }
    VAR10 = VAR7;
    VAR12 = 0;
    while (VAR12 < FUN5(VAR5->VAR9) && (VAR9 = FUN6(VAR10, "", &VAR10)))
    {
        VAR11 = FUN7(&VAR5->VAR9[VAR12], VAR9, VAR17, NULL, NULL, NULL, NULL, 0, VAR2);
        if (VAR11 < 0)
            goto VAR16;
        VAR12++;
    }
    VAR5->VAR18 = VAR12;
    if (VAR5->VAR19)
    {
        int VAR20;
        VAR11 = FUN8(&VAR5->VAR21, VAR5->VAR19, VAR2);
        if (VAR11 < 0)
            goto VAR16;
        VAR20 = FUN9(VAR5->VAR21);
        if (VAR20 != VAR5->VAR18)
        {
            FUN3(VAR2, VAR13, ""
                                      "",
                   VAR5->VAR18, VAR20, VAR5->VAR19);
            VAR11 = FUN4(VAR15);
            goto VAR16;
        }
    }
    else
    {
        VAR5->VAR21 = FUN10(VAR5->VAR18);
        if (!VAR5->VAR21)
        {
            FUN3(VAR2, VAR13, "", VAR5->VAR18);
            VAR11 = FUN4(VAR15);
            goto VAR16;
        }
    }
    if ((VAR11 = FUN11(&VAR5->VAR22, VAR5->VAR23, VAR2)))
        goto VAR16;
    VAR5->VAR24 = -1;
    if (VAR5->VAR25)
    {
        int64_t VAR26 = -1;
        if ((VAR11 = FUN12(&VAR26, VAR5->VAR25, 1)) < 0)
        {
            FUN3(VAR2, VAR13, "", VAR5->VAR25);
            goto VAR16;
        }
        VAR5->VAR24 = (double)VAR26 / 1000000;
    }
    VAR5->VAR20 = 0;
VAR16:
    FUN13(VAR7);
    return VAR11;
}