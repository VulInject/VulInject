static VAR1 FUN1(void *VAR2, hwaddr VAR3, VAR4 *VAR5, unsigned VAR6, MemTxAttrs VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR2;
    uint32_t VAR10 = VAR3;
    unsigned VAR11, VAR12, VAR13;
    uint32_t VAR14;
    if (VAR7.VAR15 && !FUN2(VAR9, VAR3))
    {
        return VAR16;
    }
    switch (VAR10)
    {
    case 0x100 ... 0x13f:
        VAR10 += 0x80;
    case 0x180 ... 0x1bf:
        VAR14 = 0;
        VAR12 = VAR10 - 0x180 + VAR17;
        for (VAR11 = 0, VAR13 = VAR6 * 8; VAR11 < VAR13 && VAR12 + VAR11 < VAR9->VAR18; VAR11++)
        {
            if (VAR9->VAR19[VAR12 + VAR11].VAR20)
            {
                VAR14 |= (1 << VAR11);
            }
        }
        break;
    case 0x200 ... 0x23f:
        VAR10 += 0x80;
    case 0x280 ... 0x2bf:
        VAR14 = 0;
        VAR12 = VAR10 - 0x280 + VAR17;
        for (VAR11 = 0, VAR13 = VAR6 * 8; VAR11 < VAR13 && VAR12 + VAR11 < VAR9->VAR18; VAR11++)
        {
            if (VAR9->VAR19[VAR12 + VAR11].VAR21)
            {
                VAR14 |= (1 << VAR11);
            }
        }
        break;
    case 0x300 ... 0x33f:
        VAR14 = 0;
        VAR12 = VAR10 - 0x300 + VAR17;
        for (VAR11 = 0, VAR13 = VAR6 * 8; VAR11 < VAR13 && VAR12 + VAR11 < VAR9->VAR18; VAR11++)
        {
            if (VAR9->VAR19[VAR12 + VAR11].VAR22)
            {
                VAR14 |= (1 << VAR11);
            }
        }
        break;
    case 0x400 ... 0x5ef:
        VAR14 = 0;
        VAR12 = VAR10 - 0x400 + VAR17;
        for (VAR11 = 0; VAR11 < VAR6 && VAR12 + VAR11 < VAR9->VAR18; VAR11++)
        {
            VAR14 |= VAR9->VAR19[VAR12 + VAR11].VAR23 << (8 * VAR11);
        }
        break;
    case 0xd18 ... 0xd23:
        VAR14 = 0;
        for (VAR11 = 0; VAR11 < VAR6; VAR11++)
        {
            VAR14 |= VAR9->VAR19[(VAR10 - 0xd14) + VAR11].VAR23 << (VAR11 * 8);
        }
        break;
    case 0xfe0 ... 0xfff:
        if (VAR10 & 3)
        {
            VAR14 = 0;
        }
        else
        {
            VAR14 = VAR24[(VAR10 - 0xfe0) >> 2];
        }
        break;
    default:
        if (VAR6 == 4)
        {
            VAR14 = FUN3(VAR9, VAR10, VAR7);
        }
        else
        {
            FUN4(VAR25, "", VAR6, VAR10);
            VAR14 = 0;
        }
    }
    FUN5(VAR3, VAR14, VAR6);
    *VAR5 = VAR14;
    return VAR26;
}