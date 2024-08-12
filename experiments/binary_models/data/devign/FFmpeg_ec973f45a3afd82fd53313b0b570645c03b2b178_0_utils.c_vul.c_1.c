int FUN1(VAR1 **VAR2, VAR3 *VAR4, const char *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    int VAR10;
    VAR1 *VAR11;
    AVFormatParameters VAR12;
    if (!VAR9)
    {
        VAR9 = &VAR12;
        memset(VAR9, 0, sizeof(VAR12));
    }
    if (!VAR9->VAR13)
        VAR11 = FUN2();
    else
        VAR11 = *VAR2;
    if (!VAR11)
    {
        VAR10 = FUN3(VAR14);
        goto VAR15;
    }
    VAR11->VAR16 = VAR7;
    VAR11->VAR4 = VAR4;
    VAR11->VAR17 = VAR18;
    VAR11->VAR19 = VAR18;
    FUN4(VAR11->VAR5, VAR5, sizeof(VAR11->VAR5));
    if (VAR7->VAR20 > 0)
    {
        VAR11->VAR21 = FUN5(VAR7->VAR20);
        if (!VAR11->VAR21)
        {
            VAR10 = FUN3(VAR14);
            goto VAR15;
        }
    }
    else
    {
        VAR11->VAR21 = NULL;
    }
    if (VAR11->VAR16->VAR22)
    {
        VAR10 = VAR11->VAR16->FUN6(VAR11, VAR9);
        if (VAR10 < 0)
            goto VAR15;
    }
    if (VAR4 && !VAR11->VAR23)
        VAR11->VAR23 = FUN7(VAR11->VAR4);
    FUN8(VAR11);
    VAR11->VAR24 = VAR25;
    *VAR2 = VAR11;
    return 0;
VAR15:
    if (VAR11)
    {
        int VAR26;
        FUN9(&VAR11->VAR21);
        for (VAR26 = 0; VAR26 < VAR11->VAR27; VAR26++)
        {
            VAR28 *VAR29 = VAR11->VAR30[VAR26];
            if (VAR29)
            {
                FUN10(VAR29->VAR21);
                FUN10(VAR29->VAR31->VAR32);
            }
            FUN10(VAR29);
        }
    }
    FUN10(VAR11);
    *VAR2 = NULL;
    return VAR10;