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
    VAR10.VAR29 = VAR9->VAR29;
    VAR10.VAR4 = VAR4;
    VAR10.VAR30 = VAR31;
    VAR10.VAR32 = (VAR9->VAR33 >> VAR34) & 0xff;
    VAR10.VAR35 = (VAR9->VAR36 >> VAR37) & 1;
    VAR10.VAR38 = (VAR9->VAR33 >> VAR39) & 3;
    VAR10.VAR40 = (VAR9->VAR36 >> VAR41) & 1;
    VAR10.VAR15 = (VAR9->VAR36 >> VAR42) & 1;
    VAR10.VAR43 = (VAR44)VAR4->VAR45;
    VAR10.VAR46 = VAR9->VAR36 & (1 << VAR47);
    FUN4(VAR9, &VAR10);
    VAR10.VAR48 = VAR49;
    VAR10.VAR48 = VAR10.VAR43 & VAR50;
    VAR18 = 0;
    VAR19 = VAR4->VAR51 & VAR52;
    if (VAR19 == 0)
        VAR19 = VAR52;
    FUN5("", VAR4, VAR10.VAR48, VAR10.VAR43);
    FUN6();
    while (VAR10.VAR30 == VAR31)
    {
        if (FUN7(!FUN8(&VAR7->VAR53)))
        {
            FUN9(VAR15, &VAR7->VAR53, VAR54)
            {
                if (VAR15->VAR22 == VAR10.VAR22)
                {
                    FUN10(&VAR10, 1);
                    VAR10.VAR30 = VAR55;
                    FUN11(VAR56, VAR57);
                    VAR10.VAR22 += 4;
                    goto VAR58;
                }
            }
        }
        if (VAR5)
        {
            VAR16 = VAR23.VAR59 - VAR23.VAR24;
            if (VAR17 < VAR16)
            {
                VAR17++;
                while (VAR17 < VAR16)
                    VAR23.VAR60[VAR17++] = 0;
            }
            VAR23.VAR61[VAR17] = VAR10.VAR22;
            VAR62[VAR17] = VAR10.VAR43 & VAR63;
            VAR64[VAR17] = VAR10.VAR65;
            VAR23.VAR60[VAR17] = 1;
            VAR23.VAR66[VAR17] = VAR18;
        }
        if (VAR18 + 1 == VAR19 && (VAR4->VAR51 & VAR67))
            FUN12();
        VAR21 = VAR10.VAR43 & VAR63;
        if (!(VAR10.VAR43 & VAR68))
        {
            VAR10.VAR69 = FUN13(VAR9, VAR10.VAR22);
            VAR20 = 4;
            FUN14(VAR9, &VAR10);
        }
        else if (VAR10.VAR28 & VAR70)
        {
            VAR10.VAR69 = FUN15(VAR9, VAR10.VAR22);
            VAR20 = FUN16(VAR9, &VAR10);
        }
        else if (VAR10.VAR28 & VAR71)
        {
            VAR10.VAR69 = FUN15(VAR9, VAR10.VAR22);
            VAR20 = FUN17(VAR9, &VAR10);
        }
        else
        {
            FUN18(&VAR10, VAR72);
            VAR10.VAR30 = VAR73;
            break;
        }
        if (VAR10.VAR43 & VAR63)
        {
            if (!(VAR10.VAR43 & (VAR74 | VAR75 | VAR76)))
            {
                VAR21 = 1;
            }
        }
        if (VAR21)
        {
            FUN19(&VAR10, VAR20);
        }
        VAR10.VAR22 += VAR20;
        VAR18++;
        if (VAR7->VAR27 && (VAR10.VAR43 & VAR63) == 0)
        {
            break;
        }
        if ((VAR10.VAR22 & (VAR77 - 1)) == 0)
            break;
        if (VAR23.VAR59 >= VAR13)
        {
            break;
        }
        if (VAR18 >= VAR19)
            break;
        if (VAR78)
            break;
    }
    if (VAR4->VAR51 & VAR67)
    {
        FUN20();
    }
    if (VAR7->VAR27 && VAR10.VAR30 != VAR55)
    {
        FUN10(&VAR10, VAR10.VAR30 != VAR79);
        FUN11(VAR56, VAR57);
    }
    else
    {
        switch (VAR10.VAR30)
        {
        case VAR73:
            FUN21(&VAR10, 0, VAR10.VAR22);
            break;
        case VAR31:
            FUN10(&VAR10, 0);
            FUN21(&VAR10, 0, VAR10.VAR22);
            break;
        case VAR79:
            FUN22(0);
            break;
        case VAR55:
        default:
            break;
        }
    }
VAR58:
    FUN23(VAR4, VAR18);
    *VAR23.VAR59 = VAR80;
    if (VAR5)
    {
        VAR16 = VAR23.VAR59 - VAR23.VAR24;
        VAR17++;
        while (VAR17 <= VAR16)
            VAR23.VAR60[VAR17++] = 0;
    }
    else
    {
        VAR4->VAR81 = VAR10.VAR22 - VAR11;
        VAR4->VAR82 = VAR18;
    }
    FUN5("");
    if (FUN24(VAR83))
    {
        FUN3("", FUN25(VAR11));
        FUN26(VAR9, VAR11, VAR10.VAR22 - VAR11, 0);
        FUN3("");
    }
}