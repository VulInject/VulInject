int FUN1(VAR1 *VAR2, const VAR3 **VAR4, const VAR3 *VAR5, unsigned int VAR6)
{
    const VAR3 *VAR7 = *VAR4;
    uint32_t VAR8;
    uint64_t VAR9;
    int VAR10 = 0, VAR11;
    uint32_t VAR12[6] = {
        0x00000000,
        0x00000080,
        0x00000800,
        0x00010000,
        0x00200000,
        0x04000000,
    };
    if (VAR7 >= VAR5)
        return 0;
    VAR9 = *VAR7++;
    if ((VAR9 & 0xc0) == 0x80 || VAR9 >= 0xFE)
    {
        VAR10 = FUN2(VAR13);
        goto VAR14;
    }
    VAR8 = (VAR9 & 128) >> 1;
    VAR11 = 0;
    while (VAR9 & VAR8)
    {
        int VAR15;
        VAR11++;
        if (VAR7 >= VAR5)
        {
            (*VAR4)++;
            return FUN2(VAR13);
        }
        VAR15 = *VAR7++ - 128;
        if (VAR15 >> 6)
        {
            (*VAR4)++;
            return FUN2(VAR13);
        }
        VAR9 = (VAR9 << 6) + VAR15;
        VAR8 <<= 5;
    }
    VAR9 &= (VAR8 << 1) - 1;
    FUN3(VAR11 <= 5);
    if (VAR9 < VAR12[VAR11])
    {
        VAR10 = FUN2(VAR13);
        goto VAR14;
    }
    if (VAR9 >= 1 << 31)
    {
        VAR10 = FUN2(VAR13);
        goto VAR14;
    }
    *VAR2 = VAR9;
    if (VAR9 > 0x10FFFF && !(VAR6 & VAR16))
        VAR10 = FUN2(VAR13);
    if (VAR9 < 0x20 && VAR9 != 0x9 && VAR9 != 0xA && VAR9 != 0xD && VAR6 & VAR17)
        VAR10 = FUN2(VAR13);
    if (VAR9 >= 0xD800 && VAR9 <= 0xDFFF && !(VAR6 & VAR18))
        VAR10 = FUN2(VAR13);
    if ((VAR9 == 0xFFFE || VAR9 == 0xFFFF) && !(VAR6 & VAR19))
        VAR10 = FUN2(VAR13);
VAR14:
    *VAR4 = VAR7;
    return VAR10;
}