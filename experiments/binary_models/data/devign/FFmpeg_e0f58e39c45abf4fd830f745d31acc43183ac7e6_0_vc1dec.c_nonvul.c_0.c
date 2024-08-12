static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    VAR16 *VAR17 = VAR3;
    VAR7 *VAR18 = NULL;
    const VAR7 *VAR19 = VAR8;
    if (VAR9 == 0)
    {
        if (VAR15->VAR20 == 0 && VAR15->VAR21)
        {
            *VAR17 = *(VAR16 *)VAR15->VAR21;
            VAR15->VAR21 = NULL;
            *VAR4 = sizeof(VAR16);
        }
        return 0;
    }
    if (VAR15->VAR22 == NULL || VAR15->VAR22->VAR3[0])
    {
        int VAR23 = FUN2(VAR15, 0);
        VAR15->VAR22 = &VAR15->VAR24[VAR23];
    }
    if (VAR15->VAR2->VAR25->VAR26 & VAR27)
    {
        if (VAR12->VAR28 < VAR29)
            VAR2->VAR30 = VAR31;
        else
            VAR2->VAR30 = VAR32;
    }
    if (VAR2->VAR33 == VAR34)
    {
        int VAR35 = 0;
        VAR18 = FUN3(VAR9 + VAR36);
        if (FUN4(FUN5(VAR8)))
        {
            const VAR7 *VAR37, *VAR38, *VAR39;
            int VAR10;
            VAR39 = VAR8;
            for (VAR37 = VAR8, VAR38 = VAR8 + VAR9; VAR39 < VAR38; VAR37 = VAR39)
            {
                VAR39 = FUN6(VAR37 + 4, VAR38);
                VAR10 = VAR39 - VAR37 - 4;
                if (VAR10 <= 0)
                    continue;
                switch (FUN5(VAR37))
                {
                case VAR40:
                    if (VAR2->VAR41 || VAR15->VAR2->VAR25->VAR26 & VAR27)
                        VAR19 = VAR37;
                    VAR35 = FUN7(VAR37 + 4, VAR10, VAR18);
                    break;
                case VAR42:
                    VAR35 = FUN7(VAR37 + 4, VAR10, VAR18);
                    FUN8(&VAR15->VAR43, VAR18, VAR35 * 8);
                    FUN9(VAR2, VAR12, &VAR15->VAR43);
                    break;
                case VAR44:
                    FUN10(VAR2, VAR45, "");
                    FUN11(VAR18);
                    return -1;
                }
            }
        }
        else if (VAR12->VAR46 && ((VAR8[0] & 0xC0) == 0xC0))
        {
            const VAR7 *VAR47;
            VAR47 = FUN6(VAR8, VAR8 + VAR9);
            if ((VAR47 == (VAR8 + VAR9)) || FUN5(VAR47) != VAR48)
            {
                FUN10(VAR2, VAR45, "");
                FUN11(VAR18);
                return -1;
            }
            VAR35 = FUN7(VAR8, VAR47 - VAR8, VAR18);
            FUN11(VAR18);
            return -1;
        }
        else
        {
            VAR35 = FUN7(VAR8, VAR9, VAR18);
        }
        FUN8(&VAR15->VAR43, VAR18, VAR35 * 8);
    }
    else
        FUN8(&VAR15->VAR43, VAR8, VAR9 * 8);
    if (VAR12->VAR28 < VAR29)
    {
        if (FUN12(VAR12, &VAR15->VAR43) == -1)
        {
            FUN11(VAR18);
            return -1;
        }
    }
    else
    {
        if (FUN13(VAR12, &VAR15->VAR43) == -1)
        {
            FUN11(VAR18);
            return -1;
        }
    }
    if (VAR15->VAR49 != VAR50 && !VAR12->VAR51)
    {
        FUN11(VAR18);
        return -1;
    }
    VAR15->VAR52.VAR49 = VAR15->VAR49;
    VAR15->VAR52.VAR53 = VAR15->VAR49 == VAR50;
    if (VAR15->VAR54 == NULL && (VAR15->VAR49 == VAR55 || VAR15->VAR56))
    {
        FUN11(VAR18);
        return -1;
    }
    if (VAR2->VAR57 && VAR15->VAR49 == VAR55)
        return -1;
    if ((VAR2->VAR58 >= VAR59 && VAR15->VAR49 == VAR55) || (VAR2->VAR58 >= VAR60 && VAR15->VAR49 != VAR50) || VAR2->VAR58 >= VAR61)
    {
        FUN11(VAR18);
        return VAR9;
    }
    if (VAR2->VAR57 >= 5)
    {
        FUN11(VAR18);
        return -1;
    }
    if (VAR15->VAR62)
    {
        if (VAR15->VAR49 == VAR55)
            return VAR9;
        else
            VAR15->VAR62 = 0;
    }
    if (FUN14(VAR15, VAR2) < 0)
    {
        FUN11(VAR18);
        return -1;
    }
    VAR15->VAR63.VAR64 = VAR15->VAR65.VAR66;
    VAR15->VAR63.VAR67 = VAR15->VAR65.VAR68;
    if ((VAR69) && VAR15->VAR2->VAR25->VAR26 & VAR27)
        FUN15(VAR15, VAR19, (VAR8 + VAR9) - VAR19);
    else if (VAR2->VAR41)
    {
        if (VAR2->VAR41->FUN16(VAR2, VAR8, VAR9) < 0)
            return -1;
        if (VAR2->VAR41->FUN17(VAR2, VAR19, (VAR8 + VAR9) - VAR19) < 0)
            return -1;
        if (VAR2->VAR41->FUN18(VAR2) < 0)
            return -1;
    }
    else
    {
        FUN19(VAR15);
        VAR12->VAR70 = VAR9 * 8;
        FUN20(VAR12);
        FUN21(VAR15);
    }
    FUN22(VAR15);
    assert(VAR15->VAR52.VAR49 == VAR15->VAR22->VAR49);
    assert(VAR15->VAR52.VAR49 == VAR15->VAR49);
    if (VAR15->VAR49 == VAR55 || VAR15->VAR20)
    {
        *VAR17 = *(VAR16 *)VAR15->VAR22;
    }
    else if (VAR15->VAR54 != NULL)
    {
        *VAR17 = *(VAR16 *)VAR15->VAR54;
    }
    if (VAR15->VAR54 || VAR15->VAR20)
    {
        *VAR4 = sizeof(VAR16);
        FUN23(VAR15, VAR17);
    }
    FUN11(VAR18);
    return VAR9;
}