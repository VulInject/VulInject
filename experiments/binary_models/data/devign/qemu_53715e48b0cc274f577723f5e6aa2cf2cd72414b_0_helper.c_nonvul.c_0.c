void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    target_ulong VAR7;
    target_ulong VAR8;
    uint8_t VAR9 = VAR2->VAR10 & 0xFF;
    target_ulong VAR11;
    VAR6 = &VAR2->VAR6->VAR12.VAR13.VAR6[VAR3];
    if (VAR6->VAR14 == 0 && VAR6->VAR9 != VAR9)
    {
        return;
    }
    if (VAR4 && VAR2->VAR6->VAR15 < VAR16)
    {
        VAR2->VAR6->VAR12.VAR13.VAR6[VAR2->VAR6->VAR15] = *VAR6;
        VAR2->VAR6->VAR15++;
        return;
    }
    VAR11 = VAR6->VAR17 | ~(VAR18 << 1);
    if (VAR6->VAR19)
    {
        VAR7 = VAR6->VAR20 & ~VAR11;
        if (VAR7 >= (0xFFFFFFFF80000000ULL & VAR2->VAR21))
        {
            VAR7 |= 0x3FFFFF0000000000ULL;
        }
        VAR8 = VAR7 | (VAR11 >> 1);
        while (VAR7 < VAR8)
        {
            FUN2(VAR2, VAR7);
            VAR7 += VAR22;
        }
    }
    if (VAR6->VAR23)
    {
        VAR7 = (VAR6->VAR20 & ~VAR11) | ((VAR11 >> 1) + 1);
        if (VAR7 >= (0xFFFFFFFF80000000ULL & VAR2->VAR21))
        {
            VAR7 |= 0x3FFFFF0000000000ULL;
        }
        VAR8 = VAR7 | VAR11;
        while (VAR7 - 1 < VAR8)
        {
            FUN2(VAR2, VAR7);
            VAR7 += VAR22;
        }
    }
}