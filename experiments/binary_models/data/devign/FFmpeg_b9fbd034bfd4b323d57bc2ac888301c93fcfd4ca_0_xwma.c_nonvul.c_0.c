static int FUN1(VAR1 *VAR2)
{
    int64_t VAR3;
    int VAR4 = 0;
    uint32_t VAR5 = 0;
    VAR6 *VAR7 = NULL;
    unsigned int VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    int VAR16;
    VAR8 = FUN2(VAR10);
    if (VAR8 != FUN3('', '', '', ''))
        return -1;
    FUN2(VAR10);
    VAR8 = FUN2(VAR10);
    if (VAR8 != FUN3('', '', '', ''))
        return -1;
    VAR8 = FUN2(VAR10);
    if (VAR8 != FUN3('', '', '', ''))
        return -1;
    VAR3 = FUN2(VAR10);
    VAR12 = FUN4(VAR2, NULL);
    if (!VAR12)
        return FUN5(VAR17);
    VAR4 = FUN6(VAR10, VAR12->VAR18, VAR3, 0);
    if (VAR4 < 0)
        return VAR4;
    VAR12->VAR19 = VAR20;
    if (VAR12->VAR18->VAR21 != VAR22)
    {
        FUN7(VAR2, "", VAR12->VAR18->VAR23, VAR12->VAR18->VAR21);
    }
    else
    {
        if (VAR12->VAR18->VAR24 != 0)
        {
            FUN7(VAR2, "", VAR12->VAR18->VAR24);
        }
        else
        {
            if (FUN8(VAR12->VAR18, 6))
                return FUN5(VAR17);
            memset(VAR12->VAR18->VAR25, 0, VAR12->VAR18->VAR24);
            VAR12->VAR18->VAR25[4] = 31;
        }
    }
    if (!VAR12->VAR18->VAR26)
    {
        FUN9(VAR2, VAR27, "", VAR12->VAR18->VAR26);
        return VAR28;
    }
    if (!VAR12->VAR18->VAR29)
    {
        FUN9(VAR2, VAR27, "", VAR12->VAR18->VAR29);
        return VAR28;
    }
    FUN10(VAR12, 64, 1, VAR12->VAR18->VAR30);
    for (;;)
    {
        if (VAR10->VAR31)
        {
            VAR4 = VAR32;
            goto VAR33;
        }
        VAR8 = FUN2(VAR10);
        VAR3 = FUN2(VAR10);
        if (VAR8 == FUN3('', '', '', ''))
        {
            break;
        }
        else if (VAR8 == FUN3('', '', '', ''))
        {
            if (VAR7)
            {
                FUN9(VAR2, VAR34, "");
                VAR4 = VAR28;
                goto VAR33;
            }
            if (VAR3 & 3)
            {
                FUN9(VAR2, VAR27, "" VAR35 "", VAR3);
            }
            VAR5 = VAR3 / 4;
            if (VAR5 == 0 || VAR5 >= VAR36 / 4)
            {
                FUN9(VAR2, VAR34, "" VAR35 "", VAR3);
                return VAR28;
            }
            VAR7 = FUN11(VAR5 * sizeof(VAR6));
            if (!VAR7)
            {
                return FUN5(VAR17);
            }
            for (VAR16 = 0; VAR16 < VAR5; ++VAR16)
            {
                VAR7[VAR16] = FUN2(VAR10);
                VAR3 -= 4;
            }
        }
        FUN12(VAR10, VAR3);
    }
    if (VAR3 < 0)
    {
        VAR4 = VAR28;
        goto VAR33;
    }
    if (!VAR3)
    {
        VAR14->VAR37 = VAR38;
    }
    else
        VAR14->VAR37 = FUN13(VAR10) + VAR3;
    if (VAR7 && VAR5)
    {
        int64_t VAR39;
        const uint32_t VAR40 = (VAR12->VAR18->VAR26 * VAR12->VAR18->VAR29) >> 3;
        const uint64_t VAR41 = VAR7[VAR5 - 1];
        if (!VAR40)
        {
            FUN9(VAR2, VAR34, "", VAR12->VAR18->VAR29, VAR12->VAR18->VAR26);
            VAR4 = VAR28;
            goto VAR33;
        }
        VAR12->VAR42 = VAR41 / VAR40;
        VAR39 = FUN13(VAR10);
        for (VAR16 = 0; VAR16 < VAR5; ++VAR16)
        {
            FUN14(VAR12, VAR39 + (VAR16 + 1) * VAR12->VAR18->VAR43, VAR7[VAR16] / VAR40, VAR12->VAR18->VAR43, 0, VAR44);
        }
    }
    else if (VAR12->VAR18->VAR45)
    {
        VAR12->VAR42 = (VAR3 << 3) * VAR12->VAR18->VAR30 / VAR12->VAR18->VAR45;
    }
VAR33:
    FUN15(VAR7);
    return VAR4;
}