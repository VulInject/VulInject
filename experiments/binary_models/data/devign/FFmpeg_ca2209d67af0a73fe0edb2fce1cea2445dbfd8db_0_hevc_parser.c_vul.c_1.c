static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR10;
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR5; VAR11++)
    {
        int VAR12;
        VAR10->VAR13 = (VAR10->VAR13 << 8) | VAR4[VAR11];
        if (((VAR10->VAR13 >> 3 * 8) & 0xFFFFFF) != VAR14)
            continue;
        VAR12 = (VAR10->VAR13 >> 2 * 8 + 1) & 0x3F;
        if ((VAR12 >= VAR15 && VAR12 <= VAR16) || VAR12 == VAR17 || (VAR12 >= 41 && VAR12 <= 44) || (VAR12 >= 48 && VAR12 <= 55))
        {
            if (VAR10->VAR18)
            {
                VAR10->VAR18 = 0;
                return VAR11 - 5;
            }
        }
        else if (VAR12 <= VAR19 || (VAR12 >= VAR20 && VAR12 <= VAR21))
        {
            int VAR22 = VAR4[VAR11] >> 7;
            if (VAR22)
            {
                if (!VAR10->VAR18)
                {
                    VAR10->VAR18 = 1;
                }
                else
                {
                    VAR10->VAR18 = 0;
                    return VAR11 - 5;
                }
            }
        }
    }
    return VAR23;
}