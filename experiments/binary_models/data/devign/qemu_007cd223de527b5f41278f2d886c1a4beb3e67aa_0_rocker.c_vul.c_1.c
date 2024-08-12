static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    char *VAR7 = FUN3(VAR4, true);
    VAR8 *VAR9;
    VAR8 *VAR10[VAR11 + 1];
    struct iovec VAR12[VAR13] = {
        {
            0,
        },
    };
    uint32_t VAR14;
    uint32_t VAR15;
    uint16_t VAR16 = VAR17;
    uint16_t VAR18 = 0;
    uint16_t VAR19 = 0;
    uint16_t VAR20 = 0;
    int VAR21 = 0;
    int VAR22 = VAR23;
    int VAR24;
    int VAR25;
    if (!VAR7)
    {
        return -VAR26;
    }
    FUN4(VAR10, VAR11, VAR7, FUN5(VAR4));
    if (!VAR10[VAR27])
    {
        return -VAR28;
    }
    VAR14 = FUN6(VAR2, FUN7(VAR4));
    if (!FUN8(VAR14, &VAR15))
    {
        return -VAR28;
    }
    if (VAR10[VAR29])
    {
        VAR16 = FUN9(VAR10[VAR29]);
    }
    switch (VAR16)
    {
    case VAR30:
        if (!VAR10[VAR31])
        {
            return -VAR28;
        }
        break;
    case VAR32:
        if (!VAR10[VAR33] || !VAR10[VAR34])
        {
            return -VAR28;
        }
        break;
    }
    if (VAR10[VAR31])
    {
        VAR18 = FUN10(VAR10[VAR31]);
    }
    if (VAR10[VAR33])
    {
        VAR19 = FUN10(VAR10[VAR33]);
    }
    if (VAR10[VAR34])
    {
        VAR20 = FUN10(VAR10[VAR34]);
    }
    FUN11(VAR9, VAR10[VAR27], VAR24)
    {
        hwaddr VAR35;
        uint16_t VAR36;
        if (FUN12(VAR9) != VAR37)
        {
            VAR22 = -VAR28;
            goto VAR38;
        }
        FUN13(VAR10, VAR39, VAR9);
        if (!VAR10[VAR40] || !VAR10[VAR41])
        {
            VAR22 = -VAR28;
            goto VAR38;
        }
        VAR35 = FUN14(VAR10[VAR40]);
        VAR36 = FUN10(VAR10[VAR41]);
        VAR12[VAR21].VAR42 = VAR36;
        VAR12[VAR21].VAR43 = FUN15(VAR36);
        if (!VAR12[VAR21].VAR43)
        {
            VAR22 = -VAR44;
            goto VAR45;
        }
        if (FUN16(VAR6, VAR35, VAR12[VAR21].VAR43, VAR12[VAR21].VAR42))
        {
            VAR22 = -VAR26;
            goto VAR46;
        }
        if (++VAR21 > VAR13)
        {
            goto VAR47;
        }
    }
    if (VAR21)
    {
        VAR18 += VAR19 = VAR20 = 0;
    }
    VAR22 = FUN17(VAR2->VAR48[VAR15], VAR12, VAR21);
VAR47:
VAR46:
VAR45:
VAR38:
    for (VAR25 = 0; VAR25 < VAR13; VAR25++)
    {
        FUN18(VAR12[VAR25].VAR43);
    }
    return VAR22;
}