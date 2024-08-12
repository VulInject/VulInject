static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    uint64_t VAR8 = VAR7->VAR9;
    int VAR10 = VAR7->VAR11;
    int VAR12 = 0;
    if (!VAR10)
    {
        for (VAR12 = 0; VAR12 < VAR5; VAR12++)
        {
            VAR8 = (VAR8 << 8) | VAR4[VAR12];
            if (FUN2(VAR8 & 0xffffffffff00LL) != 0)
            {
                VAR12++;
                VAR10 = 1;
                VAR2->VAR13 = 0;
                VAR2->VAR14 = 0;
                break;
            }
        }
    }
    if (VAR10 && !VAR2->VAR14)
    {
        if (!VAR5)
            return 0;
        for (; VAR12 < VAR5; VAR12++)
        {
            VAR2->VAR13++;
            VAR8 = (VAR8 << 8) | VAR4[VAR12];
            if (VAR2->VAR13 == 24)
            {
                VAR2->VAR15 = (VAR8 >> 32) & 0xFFFF;
            }
            else if (VAR2->VAR13 == 26)
            {
                VAR2->VAR16 = (VAR8 >> 32) & 0xFFFF;
            }
            else if (VAR2->VAR13 == 42)
            {
                int VAR17 = (VAR8 >> 32) & 0xFFFFFFFF;
                if (VAR17 <= 0)
                    continue;
                VAR2->VAR14 = FUN3(VAR17);
                if (VAR2->VAR14 <= 0)
                {
                    VAR2->VAR14 = FUN4(VAR17, VAR2->VAR16, VAR2->VAR15);
                    if (VAR2->VAR14 <= 0)
                        return VAR2->VAR14;
                }
                if (VAR5 - VAR12 + 47 >= VAR2->VAR14)
                {
                    int VAR14 = VAR2->VAR14;
                    VAR7->VAR11 = 0;
                    VAR7->VAR9 = -1;
                    VAR2->VAR13 = 0;
                    VAR2->VAR14 = 0;
                    return VAR14;
                }
                else
                {
                    VAR2->VAR14 -= VAR5;
                }
            }
        }
    }
    else if (VAR10)
    {
        if (VAR2->VAR14 > VAR5)
        {
            VAR2->VAR14 -= VAR5;
        }
        else
        {
            int VAR14 = VAR2->VAR14;
            VAR7->VAR11 = 0;
            VAR7->VAR9 = -1;
            VAR2->VAR13 = 0;
            VAR2->VAR14 = 0;
            return VAR14;
        }
    }
    VAR7->VAR11 = VAR10;
    VAR7->VAR9 = VAR8;
    return VAR18;
}