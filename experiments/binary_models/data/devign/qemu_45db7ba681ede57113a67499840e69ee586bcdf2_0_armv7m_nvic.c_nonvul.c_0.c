static VAR1 FUN1(void *VAR2, hwaddr VAR3, uint64_t VAR4, unsigned VAR5, MemTxAttrs VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2;
    uint32_t VAR9 = VAR3;
    unsigned VAR10, VAR11, VAR12;
    unsigned VAR13 = 0;
    FUN2(VAR3, VAR4, VAR5);
    if (VAR6.VAR14 && !FUN3(VAR8, VAR3))
    {
        return VAR15;
    }
    switch (VAR9)
    {
    case 0x100 ... 0x13f:
        VAR9 += 0x80;
        VAR13 = 1;
    case 0x180 ... 0x1bf:
        VAR11 = 8 * (VAR9 - 0x180) + VAR16;
        for (VAR10 = 0, VAR12 = VAR5 * 8; VAR10 < VAR12 && VAR11 + VAR10 < VAR8->VAR17; VAR10++)
        {
            if (VAR4 & (1 << VAR10))
            {
                VAR8->VAR18[VAR11 + VAR10].VAR19 = VAR13;
            }
        }
        FUN4(VAR8);
        return VAR20;
    case 0x200 ... 0x23f:
        VAR9 += 0x80;
        VAR13 = 1;
    case 0x280 ... 0x2bf:
        VAR11 = 8 * (VAR9 - 0x280) + VAR16;
        for (VAR10 = 0, VAR12 = VAR5 * 8; VAR10 < VAR12 && VAR11 + VAR10 < VAR8->VAR17; VAR10++)
        {
            if (VAR4 & (1 << VAR10))
            {
                VAR8->VAR18[VAR11 + VAR10].VAR21 = VAR13;
            }
        }
        FUN4(VAR8);
        return VAR20;
    case 0x300 ... 0x33f:
        return VAR20;
    case 0x400 ... 0x5ef:
        VAR11 = 8 * (VAR9 - 0x400) + VAR16;
        for (VAR10 = 0; VAR10 < VAR5 && VAR11 + VAR10 < VAR8->VAR17; VAR10++)
        {
            FUN5(VAR8, VAR11 + VAR10, (VAR4 >> (VAR10 * 8)) & 0xff);
        }
        FUN4(VAR8);
        return VAR20;
    case 0xd18 ... 0xd23:
        for (VAR10 = 0; VAR10 < VAR5; VAR10++)
        {
            unsigned VAR22 = (VAR9 - 0xd14) + VAR10;
            FUN5(VAR8, VAR22, (VAR4 >> (VAR10 * 8)) & 0xff);
        }
        FUN4(VAR8);
        return VAR20;
    }
    if (VAR5 == 4)
    {
        FUN6(VAR8, VAR9, VAR4, VAR6);
        return VAR20;
    }
    FUN7(VAR23, "", VAR5, VAR9);
    return VAR20;
}