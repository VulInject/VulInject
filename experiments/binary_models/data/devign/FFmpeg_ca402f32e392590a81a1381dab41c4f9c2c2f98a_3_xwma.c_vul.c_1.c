static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5, FUN2(VAR6);
    uint32_t VAR7 = 0;
    VAR8 *VAR9 = 0;
    unsigned int VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    int VAR18;
    VAR10 = FUN3(VAR12);
    if (VAR10 != FUN4('', '', '', ''))
        return -1;
    FUN3(VAR12);
    VAR10 = FUN3(VAR12);
    if (VAR10 != FUN4('', '', '', ''))
        return -1;
    VAR10 = FUN3(VAR12);
    if (VAR10 != FUN4('', '', '', ''))
        return -1;
    VAR5 = FUN3(VAR12);
    VAR14 = FUN5(VAR2, 0);
    if (!VAR14)
        return FUN6(VAR19);
    FUN7(VAR12, VAR14->VAR20, VAR5);
    VAR14->VAR21 = VAR22;
    if (VAR14->VAR20->VAR23 != VAR24)
    {
        FUN8(VAR2, VAR25, "", VAR14->VAR20->VAR26, VAR14->VAR20->VAR23);
        FUN9(VAR2, NULL);
    }
    else
    {
        if (VAR14->VAR20->VAR27 != 0)
        {
            FUN8(VAR2, VAR25, "", VAR14->VAR20->VAR27);
            FUN9(VAR2, NULL);
        }
        else
        {
            VAR14->VAR20->VAR27 = 6;
            VAR14->VAR20->VAR28 = FUN10(6 + VAR29);
            if (!VAR14->VAR20->VAR28)
                return FUN6(VAR19);
            VAR14->VAR20->VAR28[4] = 31;
        }
    }
    FUN11(VAR14, 64, 1, VAR14->VAR20->VAR30);
    for (;;)
    {
        if (VAR12->VAR31)
            return -1;
        VAR10 = FUN3(VAR12);
        VAR5 = FUN3(VAR12);
        if (VAR10 == FUN4('', '', '', ''))
        {
            break;
        }
        else if (VAR10 == FUN4('', '', '', ''))
        {
            if (VAR9)
            {
                FUN8(VAR2, VAR32, "");
                return -1;
            }
            if (VAR5 & 3)
            {
                FUN8(VAR2, VAR25, "" VAR33 "", VAR5);
            }
            VAR7 = VAR5 / 4;
            if (VAR7 == 0 || VAR7 >= VAR34 / 4)
            {
                FUN8(VAR2, VAR32, "" VAR33 "", VAR5);
                return -1;
            }
            VAR9 = FUN12(VAR7 * sizeof(VAR8));
            if (!VAR9)
            {
                return FUN6(VAR19);
            }
            for (VAR18 = 0; VAR18 < VAR7; ++VAR18)
            {
                VAR9[VAR18] = FUN3(VAR12);
                VAR5 -= 4;
            }
        }
        FUN13(VAR12, VAR5);
    }
    if (VAR5 < 0)
        return -1;
    if (!VAR5)
    {
        VAR16->VAR35 = VAR36;
    }
    else
        VAR16->VAR35 = FUN14(VAR12) + VAR5;
    if (VAR9 && VAR7)
    {
        int64_t VAR37;
        const uint32_t VAR38 = (VAR14->VAR20->VAR39 * VAR14->VAR20->VAR40) >> 3;
        const uint64_t VAR41 = VAR9[VAR7 - 1];
        VAR14->VAR42 = VAR41 / VAR38;
        VAR37 = FUN14(VAR12);
        for (VAR18 = 0; VAR18 < VAR7; ++VAR18)
        {
            FUN15(VAR14, VAR37 + (VAR18 + 1) * VAR14->VAR20->VAR43, VAR9[VAR18] / VAR38, VAR14->VAR20->VAR43, 0, VAR44);
        }
    }
    else if (VAR14->VAR20->VAR45)
    {
        VAR14->VAR42 = (VAR5 << 3) * VAR14->VAR20->VAR30 / VAR14->VAR20->VAR45;
    }
    FUN16(VAR9);
    return 0;
}