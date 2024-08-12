static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    uint32_t VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    VAR6 = VAR10->VAR11;
    VAR8 = VAR10->VAR8;
    VAR7 = 0;
    if (!VAR6)
    {
        for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        {
            VAR8 = (VAR8 << 8) | VAR4[VAR7];
            if (FUN2(VAR8, VAR7, VAR4, VAR5))
            {
                if (!VAR2->VAR12 || VAR8 == VAR2->VAR12 || VAR2->VAR12 == VAR13)
                {
                    VAR6 = 1;
                    VAR2->VAR12 = VAR8;
                    break;
                }
            }
        }
    }
    if (VAR6)
    {
        for (; VAR7 < VAR5; VAR7++)
        {
            VAR2->VAR14++;
            VAR8 = (VAR8 << 8) | VAR4[VAR7];
            if (VAR8 == VAR13 && !VAR2->VAR15)
                VAR2->VAR15 = VAR2->VAR14;
            if (FUN2(VAR8, VAR7, VAR4, VAR5) && (VAR8 == VAR2->VAR12 || VAR2->VAR12 == VAR13))
            {
                if (VAR2->VAR16 > VAR2->VAR14)
                    continue;
                if (!VAR2->VAR16)
                {
                    VAR2->VAR16 = VAR2->VAR15 ? VAR2->VAR15 : VAR2->VAR14;
                }
                VAR10->VAR11 = 0;
                VAR10->VAR8 = -1;
                VAR2->VAR14 = 0;
                return VAR7 - 3;
            }
        }
    }
    VAR10->VAR11 = VAR6;
    VAR10->VAR8 = VAR8;
    return VAR17;
}