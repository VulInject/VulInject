static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    FUN2(VAR9->VAR12 == 0);
    *VAR5 = 0;
    VAR9->VAR13 = 1;
    if (VAR9->VAR14 > 0 && VAR9->VAR14 != VAR7->VAR15)
    {
        FUN3(VAR2, VAR16, "");
        VAR11 = FUN4(VAR17);
        goto VAR18;
    }
    if (!VAR9->VAR14)
    {
        VAR11 = FUN5(VAR2, VAR7);
        if (VAR11 == VAR19)
            VAR11 = 0;
        else if (VAR11 == FUN4(VAR20))
        {
            VAR11 = VAR21;
            goto VAR18;
        }
        else if (VAR11 < 0)
            goto VAR18;
    }
    while (VAR11 >= 0)
    {
        VAR11 = FUN6(VAR2, VAR4);
        if (VAR11 < 0)
        {
            if (VAR11 == FUN4(VAR20) || VAR11 == VAR19)
                VAR11 = 0;
            goto VAR18;
        }
        if (VAR4 != VAR9->VAR22)
        {
            if (!VAR2->VAR23)
            {
                VAR11 = FUN7(VAR9, VAR4);
                if (VAR11 < 0)
                    goto VAR18;
            }
            *VAR5 = 1;
            VAR4 = VAR9->VAR22;
        }
        else
        {
            if (!VAR9->VAR24)
            {
                FUN3(VAR2, VAR25, ""
                                              ""
                                              ""
                                              "");
                VAR9->VAR24 = 1;
            }
        }
        if (VAR9->VAR26 || (!VAR2->VAR27->VAR28 && VAR9->VAR12 < VAR7->VAR15))
            break;
    }
VAR18:
    if (VAR11 == 0)
    {
        if (VAR2->VAR27->VAR28)
            VAR11 = VAR7->VAR15;
        else
            VAR11 = FUN8(VAR9->VAR12, VAR7->VAR15);
    }
    VAR9->VAR12 = 0;
    VAR9->VAR14 = (VAR11 >= 0) ? VAR7->VAR15 - VAR11 : 0;
    return VAR11;
}