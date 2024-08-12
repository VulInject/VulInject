static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    unsigned VAR13;
    VAR14 *VAR15 = NULL;
    for (;;)
    {
        VAR12 = FUN2(VAR2->VAR16);
        FUN3(VAR2->VAR16, 4);
        VAR7 = FUN4(VAR2->VAR16);
        VAR8 = FUN5(VAR2->VAR16);
        VAR13 = FUN5(VAR2->VAR16);
        VAR13 |= FUN4(VAR2->VAR16) << 24;
        if (FUN6(VAR2->VAR16))
            return FUN7(VAR17);
        FUN3(VAR2->VAR16, 3);
        VAR9 = 0;
        if (VAR8 == 0)
            continue;
        VAR11 = VAR8 + FUN2(VAR2->VAR16);
        if (VAR7 == VAR18)
        {
            VAR10 = 1;
            VAR9 = FUN4(VAR2->VAR16);
        }
        else if (VAR7 == VAR19)
        {
            VAR10 = 0;
            VAR9 = FUN4(VAR2->VAR16);
        }
        else
        {
            if (VAR7 == VAR20 && VAR8 > 13 + 1 + 4)
                FUN8(VAR2, VAR11);
            else
                FUN9(VAR2, VAR21, "", VAR7, VAR8, VAR9);
            FUN10(VAR2->VAR16, VAR11, VAR22);
            continue;
        }
        for (VAR6 = 0; VAR6 < VAR2->VAR23; VAR6++)
        {
            VAR15 = VAR2->VAR24[VAR6];
            if (VAR15->VAR25 == VAR10)
                break;
        }
        if (VAR6 == VAR2->VAR23)
        {
            FUN9(NULL, VAR21, "");
            VAR15 = FUN11(VAR2, VAR10);
            VAR2->VAR26 &= ~VAR27;
        }
        if ((VAR15->VAR28 >= VAR29 && !((VAR9 & VAR30) == VAR31 || VAR10)) || (VAR15->VAR28 >= VAR32 && ((VAR9 & VAR30) == VAR33 && !VAR10)) || VAR15->VAR28 >= VAR34)
        {
            FUN10(VAR2->VAR16, VAR11, VAR22);
            continue;
        }
        if ((VAR9 & VAR30) == VAR31)
            FUN12(VAR15, VAR12, VAR13, VAR8, 0, VAR35);
        break;
    }
    if (!FUN13(VAR2->VAR16) && VAR2->VAR36 == VAR37)
    {
        int VAR8;
        const int VAR12 = FUN2(VAR2->VAR16);
        const int VAR38 = FUN14(VAR2->VAR16);
        FUN10(VAR2->VAR16, VAR38 - 4, VAR22);
        VAR8 = FUN15(VAR2->VAR16);
        FUN10(VAR2->VAR16, VAR38 - 3 - VAR8, VAR22);
        if (VAR8 == FUN5(VAR2->VAR16) + 11)
        {
            VAR2->VAR36 = FUN5(VAR2->VAR16) * (VAR39)VAR40 / 1000;
        }
        FUN10(VAR2->VAR16, VAR12, VAR22);
    }
    if (VAR10)
    {
        if (!VAR15->VAR41->VAR42 || !VAR15->VAR41->VAR43 || (!VAR15->VAR41->VAR44 && !VAR15->VAR41->VAR45))
        {
            VAR15->VAR41->VAR46 = (VAR9 & VAR47) == VAR48 ? 2 : 1;
            if ((VAR9 & VAR49) == VAR50)
                VAR15->VAR41->VAR42 = 8000;
            else
                VAR15->VAR41->VAR42 = (44100 << ((VAR9 & VAR51) >> VAR52) >> 3);
            VAR15->VAR41->VAR43 = (VAR9 & VAR53) ? 16 : 8;
            FUN16(VAR2, VAR15, VAR9 & VAR49);
        }
    }
    else
    {
        VAR8 -= FUN17(VAR2, VAR15, VAR9 & VAR54);
    }
    VAR5 = FUN18(VAR2->VAR16, VAR4, VAR8 - 1);
    if (VAR5 <= 0)
    {
        return FUN7(VAR17);
    }
    VAR4->VAR8 = VAR5;
    VAR4->VAR13 = VAR13;
    VAR4->VAR55 = VAR15->VAR56;
    if (VAR10 || ((VAR9 & VAR30) == VAR31))
        VAR4->VAR9 |= VAR57;
    return VAR5;
}