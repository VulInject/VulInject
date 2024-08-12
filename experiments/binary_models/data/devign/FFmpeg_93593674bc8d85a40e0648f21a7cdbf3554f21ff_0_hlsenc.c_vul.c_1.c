static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, double VAR5, int64_t VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = FUN2(sizeof(*VAR9));
    const char *VAR10;
    int VAR11;
    if (!VAR9)
        return FUN3(VAR12);
    if ((VAR4->VAR13 & (VAR14 | VAR15)) && strlen(VAR4->VAR16))
    {
        char *VAR17 = FUN4(VAR4->VAR18->VAR10);
        FUN5(VAR4->VAR18->VAR10, VAR4->VAR16, sizeof(VAR4->VAR18->VAR10));
        if (VAR4->VAR13 & VAR14)
        {
            char *VAR10 = FUN4(VAR4->VAR18->VAR10);
            if (!VAR10)
                return FUN3(VAR12);
            if (FUN6(VAR4->VAR18->VAR10, sizeof(VAR4->VAR18->VAR10), VAR10, '', VAR6 + VAR7) < 1)
            {
                FUN7(VAR4, VAR19, ""
                                          "",
                       VAR10);
                FUN8(VAR10);
                FUN8(VAR17);
                return FUN3(VAR20);
            }
            FUN8(VAR10);
        }
        if (VAR4->VAR13 & VAR15)
        {
            char *VAR10 = FUN4(VAR4->VAR18->VAR10);
            if (!VAR10)
                return FUN3(VAR12);
            if (FUN6(VAR4->VAR18->VAR10, sizeof(VAR4->VAR18->VAR10), VAR10, '', (VAR21)FUN9(1000000 * VAR5)) < 1)
            {
                FUN7(VAR4, VAR19, ""
                                          "",
                       VAR10);
                FUN8(VAR10);
                FUN8(VAR17);
                return FUN3(VAR20);
            }
            FUN8(VAR10);
        }
        FUN10(VAR17, VAR4->VAR18->VAR10, VAR4);
        FUN8(VAR17);
    }
    VAR10 = FUN11(VAR4->VAR18->VAR10);
    if (VAR4->VAR22)
    {
        VAR10 = VAR4->VAR18->VAR10;
    }
    if (FUN12(VAR4->VAR23, VAR10) || FUN12(VAR4->VAR24, VAR10))
    {
        FUN7(VAR4, VAR25, "", VAR10);
    }
    FUN5(VAR9->VAR10, VAR10, sizeof(VAR9->VAR10));
    if (VAR4->VAR26)
        FUN5(VAR9->VAR27, FUN11(VAR4->VAR28->VAR10), sizeof(VAR9->VAR27));
    else
        VAR9->VAR27[0] = '';
    VAR9->VAR5 = VAR5;
    VAR9->VAR6 = VAR6;
    VAR9->VAR7 = VAR7;
    VAR9->VAR29 = NULL;
    VAR9->VAR30 = 0;
    if (VAR4->VAR31)
    {
        VAR9->VAR30 = 1;
        VAR4->VAR31 = 0;
    }
    if (VAR4->VAR32)
    {
        FUN5(VAR9->VAR33, VAR4->VAR33, sizeof(VAR9->VAR33));
        FUN5(VAR9->VAR34, VAR4->VAR34, sizeof(VAR9->VAR34));
    }
    if (!VAR4->VAR23)
        VAR4->VAR23 = VAR9;
    else
        VAR4->VAR35->VAR29 = VAR9;
    VAR4->VAR35 = VAR9;
    if (VAR4->VAR36 != VAR37)
        VAR4->VAR38 = 0;
    if (VAR4->VAR38 && VAR4->VAR39 >= VAR4->VAR38)
    {
        VAR9 = VAR4->VAR23;
        VAR4->VAR40 += VAR9->VAR5;
        VAR4->VAR23 = VAR9->VAR29;
        if (VAR9 && VAR4->VAR13 & VAR41 && !(VAR4->VAR13 & VAR42 || VAR4->VAR43))
        {
            VAR9->VAR29 = VAR4->VAR24;
            VAR4->VAR24 = VAR9;
            if ((VAR11 = FUN13(VAR4)) < 0)
                return VAR11;
        }
        else
            FUN8(VAR9);
    }
    else
        VAR4->VAR39++;
    if (VAR4->VAR44 > 0)
    {
        return 0;
    }
    VAR4->VAR45++;
    return 0;
}