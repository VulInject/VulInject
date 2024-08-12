static inline int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, int VAR5, int (*VAR6)(VAR1 *VAR2, unsigned char *VAR3, int VAR4))
{
    int VAR7, VAR8;
    int VAR9 = 5;
    int64_t VAR10 = 0;
    VAR8 = 0;
    while (VAR8 < VAR5)
    {
        if (FUN2(&VAR2->VAR11))
            return VAR12;
        VAR7 = FUN3(VAR2, VAR3 + VAR8, VAR4 - VAR8);
        if (VAR7 == FUN4(VAR13))
            continue;
        if (VAR2->VAR14 & VAR15)
            return VAR7;
        if (VAR7 == FUN4(VAR16))
        {
            VAR7 = 0;
            if (VAR9)
            {
                VAR9--;
            }
            else
            {
                if (VAR2->VAR17)
                {
                    if (!VAR10)
                        VAR10 = FUN5();
                    else if (FUN5() > VAR10 + VAR2->VAR17)
                        return FUN4(VAR18);
                }
                FUN6(1000);
            }
        }
        else if (VAR7 < 1)
            return (VAR7 < 0 && VAR7 != VAR19) ? VAR7 : VAR8;
        if (VAR7)
            VAR9 = FUN7(VAR9, 2);
        VAR8 += VAR7;
    }
    return VAR8;
}