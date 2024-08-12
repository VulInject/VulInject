static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    uint64_t VAR8;
    VAR9 *VAR10 = &VAR2->VAR10;
    VAR6 = VAR10->VAR11;
    VAR8 = VAR10->VAR12;
    VAR7 = 0;
    if (!VAR6)
    {
        for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        {
            VAR8 = (VAR8 << 8) | VAR4[VAR7];
            if (FUN2(VAR8))
            {
                if (!VAR2->VAR13 || FUN3(VAR8) == VAR2->VAR13 || VAR2->VAR13 == VAR14)
                {
                    VAR6 = 1;
                    if (FUN4(VAR8))
                        VAR2->VAR13 = FUN5(VAR8);
                    else
                        VAR2->VAR13 = FUN3(VAR8);
                    VAR7++;
                    break;
                }
            }
        }
    }
    if (VAR6)
    {
        for (; VAR7 < VAR5; VAR7++)
        {
            VAR2->VAR15++;
            VAR8 = (VAR8 << 8) | VAR4[VAR7];
            if (FUN2(VAR8) && (FUN3(VAR8) == VAR2->VAR13 || VAR2->VAR13 == VAR14))
            {
                if (VAR2->VAR16 > VAR2->VAR15)
                    continue;
                VAR10->VAR11 = 0;
                VAR10->VAR12 = -1;
                VAR2->VAR15 = 0;
                return FUN4(VAR8) ? VAR7 - 3 : VAR7 - 5;
            }
        }
    }
    VAR10->VAR11 = VAR6;
    VAR10->VAR12 = VAR8;
    return VAR17;
}