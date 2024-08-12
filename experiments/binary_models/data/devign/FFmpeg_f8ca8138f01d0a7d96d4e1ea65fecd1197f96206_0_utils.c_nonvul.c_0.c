VAR1 FUN1(VAR2 *VAR3, int VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, int64_t VAR8, int64_t VAR9, int64_t VAR10, int VAR11, VAR1 *VAR12, FUN2 (*VAR13)(struct VAR2 *, int, VAR1 *, VAR1))
{
    int64_t VAR14, VAR15;
    int64_t VAR16, VAR17;
    int VAR18;
    FUN3(VAR3, "", VAR4, FUN4(VAR5));
    if (VAR9 == VAR19)
    {
        VAR6 = VAR3->VAR20;
        VAR9 = FUN5(VAR3, VAR4, &VAR6, VAR21, VAR13);
        if (VAR9 == VAR19)
            return -1;
    }
    if (VAR9 >= VAR5)
    {
        *VAR12 = VAR9;
        return VAR6;
    }
    if (VAR10 == VAR19)
    {
        int64_t VAR22 = 1024;
        int64_t VAR23;
        VAR17 = FUN6(VAR3->VAR24);
        VAR7 = VAR17 - 1;
        do
        {
            VAR23 = VAR7;
            VAR7 = FUN7(0, VAR7 - VAR22);
            VAR10 = FUN5(VAR3, VAR4, &VAR7, VAR23, VAR13);
            VAR22 += VAR22;
        } while (VAR10 == VAR19 && 2 * VAR23 > VAR22);
        if (VAR10 == VAR19)
            return -1;
        for (;;)
        {
            int64_t VAR25 = VAR7 + 1;
            int64_t VAR26 = FUN5(VAR3, VAR4, &VAR25, VAR21, VAR13);
            if (VAR26 == VAR19)
                break;
            VAR10 = VAR26;
            VAR7 = VAR25;
            if (VAR25 >= VAR17)
                break;
        }
        VAR8 = VAR7;
    }
    if (VAR10 <= VAR5)
    {
        *VAR12 = VAR10;
        return VAR7;
    }
    if (VAR9 > VAR10)
    {
        return -1;
    }
    else if (VAR9 == VAR10)
    {
        VAR8 = VAR6;
    }
    VAR18 = 0;
    while (VAR6 < VAR8)
    {
        FUN3(VAR3, "" VAR27 "" VAR27 "", VAR6, VAR7, FUN4(VAR9), FUN4(VAR10));
        assert(VAR8 <= VAR7);
        if (VAR18 == 0)
        {
            int64_t VAR28 = VAR7 - VAR8;
            VAR14 = FUN8(VAR5 - VAR9, VAR7 - VAR6, VAR10 - VAR9) + VAR6 - VAR28;
        }
        else if (VAR18 == 1)
        {
            VAR14 = (VAR6 + VAR8) >> 1;
        }
        else
        {
            VAR14 = VAR6;
        }
        if (VAR14 <= VAR6)
            VAR14 = VAR6 + 1;
        else if (VAR14 > VAR8)
            VAR14 = VAR8;
        VAR16 = VAR14;
        VAR15 = FUN5(VAR3, VAR4, &VAR14, VAR21, VAR13);
        if (VAR14 == VAR7)
            VAR18++;
        else
            VAR18 = 0;
        FUN3(VAR3, "" VAR29 "" VAR29 "" VAR29 "" VAR29 "" VAR29 "", VAR6, VAR14, VAR7, FUN4(VAR9), FUN4(VAR15), FUN4(VAR10), FUN4(VAR5), VAR8, VAR16, VAR18);
        if (VAR15 == VAR19)
        {
            FUN9(VAR3, VAR30, "");
            return -1;
        }
        assert(VAR15 != VAR19);
        if (VAR5 <= VAR15)
        {
            VAR8 = VAR16 - 1;
            VAR7 = VAR14;
            VAR10 = VAR15;
        }
        if (VAR5 >= VAR15)
        {
            VAR6 = VAR14;
            VAR9 = VAR15;
        }
    }
    VAR14 = (VAR11 & VAR31) ? VAR6 : VAR7;
    VAR15 = (VAR11 & VAR31) ? VAR9 : VAR10;
    VAR6 = VAR14;
    VAR9 = FUN5(VAR3, VAR4, &VAR6, VAR21, VAR13);
    VAR6++;
    VAR10 = FUN5(VAR3, VAR4, &VAR6, VAR21, VAR13);
    FUN3(VAR3, "" VAR27 "", VAR14, FUN4(VAR9), FUN4(VAR5), FUN4(VAR10));
    *VAR12 = VAR15;
    return VAR14;
}