static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 **VAR6, int *VAR7, const VAR5 *VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = &VAR11->VAR14;
    int VAR15 = VAR16;
    int VAR17;
    uint64_t VAR18 = VAR14->VAR19;
    if (!VAR11->VAR20)
    {
        for (VAR17 = 0; VAR17 < VAR9; VAR17++)
        {
            VAR18 = (VAR18 << 8) | VAR8[VAR17];
            if ((VAR18 & 0xFFFF0000FFFFFF00) == 0x8000000003120400ULL)
            {
                int VAR21 = VAR18 & 0xFF;
                int VAR20 = ((VAR18 >> 32) & 0xFFFF) + 4;
                if (VAR21 > 0 && VAR20 >= 8)
                {
                    VAR11->VAR20 = VAR20;
                    VAR11->VAR22 = VAR23 * VAR21;
                    VAR11->VAR24 = VAR17 - 7 + VAR11->VAR20 + VAR11->VAR22;
                    break;
                }
            }
        }
        VAR14->VAR19 = VAR18;
    }
    if (VAR11->VAR20)
    {
        if (!VAR11->VAR24)
            VAR11->VAR24 = VAR11->VAR22;
        if (VAR11->VAR24 <= VAR9)
        {
            VAR15 = VAR11->VAR24;
            VAR11->VAR24 = 0;
        }
        else
            VAR11->VAR24 -= VAR9;
    }
    if (FUN2(VAR14, VAR15, &VAR8, &VAR9) < 0 || !VAR9)
    {
        *VAR6 = NULL;
        *VAR7 = 0;
        return VAR9;
    }
    *VAR6 = VAR8;
    *VAR7 = VAR9;
    return VAR15;
}