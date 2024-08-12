static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    uint32_t VAR11;
    VAR8 = VAR2->VAR12;
    VAR11 = VAR2->VAR11;
    VAR9 = 0;
    if (!VAR8)
    {
        for (VAR9 = 0; VAR9 < VAR7; VAR9++)
        {
            VAR11 = (VAR11 << 8) | VAR6[VAR9];
            for (VAR10 = 0; VAR10 < 8; VAR10++)
            {
                if ((((VAR11 << VAR10) | (VAR6[VAR9] >> (8 - VAR10))) >> (32 - 20) == 0x10) && (((VAR11 >> (17 - VAR10)) & 0x4000) == 0x0))
                {
                    VAR9++;
                    VAR8 = 1;
                    break;
                }
            }
            if (VAR8)
                break;
        }
    }
    if (VAR8)
    {
        for (; VAR9 < VAR7; VAR9++)
        {
            if (VAR4->VAR13 & VAR14)
                VAR11 = (VAR11 << 8) | VAR6[VAR9];
            for (VAR10 = 0; VAR10 < 8; VAR10++)
            {
                if ((((VAR11 << VAR10) | (VAR6[VAR9] >> (8 - VAR10))) >> (32 - 20) == 0x10) && (((VAR11 >> (17 - VAR10)) & 0x4000) == 0x0))
                {
                    VAR2->VAR12 = 0;
                    VAR2->VAR11 = -1;
                    return VAR9 - 3;
                }
            }
        }
    }
    VAR2->VAR12 = VAR8;
    VAR2->VAR11 = VAR11;
    return VAR15;
}