FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10;
    target_ulong VAR11;
    static VAR12 *VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17;
    int VAR18;
    int VAR19;
    VAR11 = VAR4->VAR20;
    VAR13 = VAR21.VAR22 + VAR23;
    VAR10.VAR20 = VAR11;
    VAR10.VAR24 = (VAR25)VAR4->VAR24;
    VAR10.VAR26 = VAR27;
    VAR10.VAR28 = (VAR10.VAR24 & VAR29) == 0 ? 1 : 0;
    VAR10.VAR30 = -1;
    VAR10.VAR4 = VAR4;
    VAR10.VAR31 = VAR7->VAR31;
    VAR10.VAR32 = VAR9->VAR32;
    VAR10.VAR33 = (VAR10.VAR24 & VAR34);
    VAR17 = -1;
    VAR18 = 0;
    VAR19 = VAR4->VAR35 & VAR36;
    if (VAR19 == 0)
        VAR19 = VAR36;
    FUN3(VAR4);
    while (VAR10.VAR26 == VAR27 && VAR21.VAR37 < VAR13)
    {
        if (FUN4(!FUN5(&VAR7->VAR38)))
        {
            FUN6(VAR15, &VAR7->VAR38, VAR39)
            {
                if (VAR10.VAR20 == VAR15->VAR20)
                {
                    FUN7(VAR40, VAR10.VAR20);
                    FUN8(VAR41);
                    VAR10.VAR26 = VAR42;
                    break;
                }
            }
        }
        if (VAR5)
        {
            VAR16 = VAR21.VAR37 - VAR21.VAR22;
            if (VAR17 < VAR16)
            {
                VAR17++;
                while (VAR17 < VAR16)
                    VAR21.VAR43[VAR17++] = 0;
            }
            VAR21.VAR44[VAR17] = VAR10.VAR20;
            VAR45[VAR17] = VAR10.VAR24;
            VAR21.VAR43[VAR17] = 1;
            VAR21.VAR46[VAR17] = VAR18;
        }
        if (VAR18 + 1 == VAR19 && (VAR4->VAR35 & VAR47))
            FUN9();
        fprintf(VAR48, "", VAR10.VAR20);
        FUN10(VAR48);
        VAR10.VAR49 = FUN11(VAR9, VAR10.VAR20);
        FUN12(&VAR10);
        VAR18++;
        VAR10.VAR20 += 2;
        if ((VAR10.VAR20 & (VAR50 - 1)) == 0)
            break;
        if (VAR7->VAR31)
        {
            break;
        }
        if (VAR18 >= VAR19)
            break;
        if (VAR51)
            break;
    }
    if (VAR4->VAR35 & VAR47)
        FUN13();
    if (VAR7->VAR31)
    {
        FUN7(VAR40, VAR10.VAR20);
        FUN8(VAR41);
    }
    else
    {
        switch (VAR10.VAR26)
        {
        case VAR52:
        case VAR27:
            if (VAR10.VAR24)
            {
                FUN14(VAR10.VAR24 | VAR53);
            }
            FUN15(&VAR10, 0, VAR10.VAR20);
            break;
        case VAR54:
            FUN16(0);
            break;
        case VAR42:
        default:
            break;
        }
    }
    FUN17(VAR4, VAR18);
    *VAR21.VAR37 = VAR55;
    if (VAR5)
    {
        VAR16 = VAR21.VAR37 - VAR21.VAR22;
        VAR17++;
        while (VAR17 <= VAR16)
            VAR21.VAR43[VAR17++] = 0;
    }
    else
    {
        VAR4->VAR56 = VAR10.VAR20 - VAR11;
        VAR4->VAR57 = VAR18;
    }
    if (FUN18(VAR58))
    {
        FUN19("");
        FUN20(VAR9, VAR11, VAR10.VAR20 - VAR11, 0);
        FUN19("");
    }
}