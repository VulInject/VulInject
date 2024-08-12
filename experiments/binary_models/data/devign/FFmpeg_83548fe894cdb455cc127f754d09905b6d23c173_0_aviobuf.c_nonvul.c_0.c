VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    int64_t VAR6;
    int64_t VAR7;
    int VAR8 = VAR5 & VAR9;
    VAR5 &= ~VAR9;
    if (!VAR3)
        return FUN2(VAR10);
    VAR7 = VAR3->VAR7 - (VAR3->VAR11 ? 0 : (VAR3->VAR12 - VAR3->VAR13));
    if (VAR5 != VAR14 && VAR5 != VAR15)
        return FUN2(VAR10);
    if (VAR5 == VAR14)
    {
        VAR6 = VAR7 + (VAR3->VAR16 - VAR3->VAR13);
        if (VAR4 == 0)
            return VAR6;
        VAR4 += VAR6;
    }
    VAR6 = VAR4 - VAR7;
    if (!VAR3->VAR17 && VAR6 >= 0 && VAR6 < (VAR3->VAR12 - VAR3->VAR13))
    {
        VAR3->VAR16 = VAR3->VAR13 + VAR6;
    }
    else if ((!(VAR3->VAR18 & VAR19) || VAR6 <= VAR3->VAR12 + VAR20 - VAR3->VAR13) && !VAR3->VAR11 && VAR6 >= 0 && (VAR5 != VAR21 || VAR8))
    {
        while (VAR3->VAR7 < VAR4 && !VAR3->VAR22)
            FUN3(VAR3);
        if (VAR3->VAR22)
            return VAR23;
        VAR3->VAR16 = VAR3->VAR12 + VAR4 - VAR3->VAR7;
    }
    else
    {
        int64_t VAR24;
        if (VAR3->VAR11)
        {
            FUN4(VAR3);
            VAR3->VAR17 = 1;
        }
        if (!VAR3->VAR25)
            return FUN2(VAR26);
        if ((VAR24 = VAR3->FUN5(VAR3->VAR27, VAR4, VAR15)) < 0)
            return VAR24;
        if (!VAR3->VAR11)
            VAR3->VAR12 = VAR3->VAR13;
        VAR3->VAR16 = VAR3->VAR13;
        VAR3->VAR7 = VAR4;
    }
    VAR3->VAR22 = 0;
    return VAR4;
}