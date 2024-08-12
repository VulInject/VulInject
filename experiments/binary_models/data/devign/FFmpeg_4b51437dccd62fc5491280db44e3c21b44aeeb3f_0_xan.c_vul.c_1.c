static int FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4, int VAR5)
{
    uint8_t VAR6 = *VAR4++;
    uint8_t VAR7 = VAR6 + 0x16;
    const VAR1 *VAR8 = VAR4 + VAR6 * 2;
    int VAR9 = VAR5 - 1 - VAR6 * 2;
    uint8_t VAR10 = VAR7;
    VAR1 *VAR11 = VAR2 + VAR3;
    VAR1 *VAR12 = VAR2;
    int VAR13;
    GetBitContext VAR14;
    if ((VAR13 = FUN2(&VAR14, VAR8, VAR9)) < 0)
        return VAR13;
    while (VAR10 != 0x16)
    {
        unsigned VAR15 = VAR10 - 0x17 + FUN3(&VAR14) * VAR6;
        if (VAR15 >= 2 * VAR6)
            return VAR16;
        VAR10 = VAR4[VAR15];
        if (VAR10 < 0x16)
        {
            if (VAR2 >= VAR11)
                return VAR3;
            *VAR2++ = VAR10;
            VAR10 = VAR7;
        }
    }
    return VAR2 - VAR12;
}