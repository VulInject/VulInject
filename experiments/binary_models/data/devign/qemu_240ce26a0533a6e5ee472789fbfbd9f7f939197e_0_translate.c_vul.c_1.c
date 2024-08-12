FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10;
    target_ulong VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17 = -1;
    int VAR18;
    int VAR19;
    int VAR20;
    int VAR21;
    if (VAR5)
        FUN3("", VAR5);
    VAR11 = VAR4->VAR22;
    VAR13 = VAR23.VAR24 + VAR25;
    VAR10.VAR22 = VAR11;
    VAR10.VAR26 = -1;
    VAR10.VAR27 = VAR7->VAR27;
    VAR10.VAR28 = VAR9->VAR28;
    VAR10.VAR4 = VAR4;
    VAR10.VAR29 = VAR30;
    VAR10.VAR31 = (VAR32)VAR4->VAR33;
    FUN4(VAR9, &VAR10);
    VAR10.VAR34 = VAR35;
    VAR10.VAR34 = VAR10.VAR31 & VAR36;
    VAR18 = 0;
    VAR19 = VAR4->VAR37 & VAR38;
    if (VAR19 == 0)
        VAR19 = VAR38;
    FUN5("", VAR4, VAR10.VAR34, VAR10.VAR31);
    FUN6();
    while (VAR10.VAR29 == VAR30)
    {
        if (FUN7(!FUN8(&VAR9->VAR39)))
        {
            FUN9(VAR15, &VAR9->VAR39, VAR40)
            {
                if (VAR15->VAR22 == VAR10.VAR22)
                {
                    FUN10(&VAR10, 1);
                    VAR10.VAR29 = VAR41;
                    FUN11(VAR42, VAR43);
                    VAR10.VAR22 += 4;
                    goto VAR44;
                }
            }
        }
        if (VAR5)
        {
            VAR16 = VAR23.VAR45 - VAR23.VAR24;
            if (VAR17 < VAR16)
            {
                VAR17++;
                while (VAR17 < VAR16)
                    VAR23.VAR46[VAR17++] = 0;
            }
            VAR23.VAR47[VAR17] = VAR10.VAR22;
            VAR48[VAR17] = VAR10.VAR31 & VAR49;
            VAR50[VAR17] = VAR10.VAR51;
            VAR23.VAR46[VAR17] = 1;
            VAR23.VAR52[VAR17] = VAR18;
        }
        if (VAR18 + 1 == VAR19 && (VAR4->VAR37 & VAR53))
            FUN12();
        VAR21 = 0;
        if (!(VAR10.VAR31 & VAR54))
        {
            VAR10.VAR55 = FUN13(VAR9, VAR10.VAR22);
            VAR20 = 4;
            FUN14(VAR9, &VAR10, &VAR21);
        }
        else if (VAR10.VAR28 & VAR56)
        {
            VAR10.VAR55 = FUN15(VAR9, VAR10.VAR22);
            VAR20 = FUN16(VAR9, &VAR10, &VAR21);
        }
        else if (VAR10.VAR28 & VAR57)
        {
            VAR10.VAR55 = FUN15(VAR9, VAR10.VAR22);
            VAR20 = FUN17(VAR9, &VAR10, &VAR21);
        }
        else
        {
            FUN18(&VAR10, VAR58);
            VAR10.VAR29 = VAR59;
            break;
        }
        if (!VAR21)
        {
            FUN19(&VAR10, VAR20);
        }
        VAR10.VAR22 += VAR20;
        VAR18++;
        if (VAR7->VAR27 && (VAR10.VAR31 & VAR49) == 0)
        {
            break;
        }
        if ((VAR10.VAR22 & (VAR60 - 1)) == 0)
            break;
        if (VAR23.VAR45 >= VAR13)
        {
            break;
        }
        if (VAR18 >= VAR19)
            break;
        if (VAR61)
            break;
    }
    if (VAR4->VAR37 & VAR53)
    {
        FUN20();
    }
    if (VAR7->VAR27 && VAR10.VAR29 != VAR41)
    {
        FUN10(&VAR10, VAR10.VAR29 == VAR30);
        FUN11(VAR42, VAR43);
    }
    else
    {
        switch (VAR10.VAR29)
        {
        case VAR59:
            FUN21(&VAR10, 0, VAR10.VAR22);
            break;
        case VAR30:
            FUN10(&VAR10, 0);
            FUN21(&VAR10, 0, VAR10.VAR22);
            break;
        case VAR62:
            FUN22(0);
            break;
        case VAR41:
        default:
            break;
        }
    }
VAR44:
    FUN23(VAR4, VAR18);
    *VAR23.VAR45 = VAR63;
    if (VAR5)
    {
        VAR16 = VAR23.VAR45 - VAR23.VAR24;
        VAR17++;
        while (VAR17 <= VAR16)
            VAR23.VAR46[VAR17++] = 0;
    }
    else
    {
        VAR4->VAR64 = VAR10.VAR22 - VAR11;
        VAR4->VAR65 = VAR18;
    }
    FUN5("");
    if (FUN24(VAR66))
    {
        FUN3("", FUN25(VAR11));
        FUN26(VAR9, VAR11, VAR10.VAR22 - VAR11, 0);
        FUN3("");
    }
}