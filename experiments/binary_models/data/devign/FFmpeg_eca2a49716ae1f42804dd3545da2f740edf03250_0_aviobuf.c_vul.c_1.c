VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    int64_t VAR6;
    int64_t VAR7;
    int VAR8 = VAR5 & VAR9;
    int VAR10;
    int VAR11;
    VAR5 &= ~VAR9;
    if (!VAR3)
        VAR10 = VAR3->VAR12 - VAR3->VAR13;
    VAR7 = VAR3->VAR7 - (VAR3->VAR14 ? 0 : VAR10);
    if (VAR5 != VAR15 && VAR5 != VAR16)
        if (VAR5 == VAR15)
        {
            VAR6 = VAR7 + (VAR3->VAR17 - VAR3->VAR13);
            if (VAR4 == 0)
                return VAR6;
            VAR4 += VAR6;
        }
    if (VAR4 < 0)
        if (VAR3->VAR18)
        {
            VAR11 = VAR3->FUN2(VAR3->VAR19);
            if (VAR11 <= 0)
                VAR11 = VAR3->VAR20;
        }
        else
            VAR11 = VAR3->VAR20;
    VAR6 = VAR4 - VAR7;
    VAR3->VAR21 = FUN3(VAR3->VAR21, VAR3->VAR17);
    if ((!VAR3->VAR22 || !VAR3->VAR23) && VAR6 >= 0 && VAR6 <= (VAR3->VAR14 ? VAR3->VAR21 - VAR3->VAR13 : VAR10))
    {
        VAR3->VAR17 = VAR3->VAR13 + VAR6;
    }
    else if ((!(VAR3->VAR24 & VAR25) || VAR6 <= VAR10 + VAR11) && !VAR3->VAR14 && VAR6 >= 0 && (!VAR3->VAR22 || !VAR3->VAR23) && (VAR5 != VAR26 || VAR8))
    {
        while (VAR3->VAR7 < VAR4 && !VAR3->VAR27)
            FUN4(VAR3);
        if (VAR3->VAR27)
            return VAR28;
        VAR3->VAR17 = VAR3->VAR12 - (VAR3->VAR7 - VAR4);
    }
    else if (!VAR3->VAR14 && VAR6 < 0 && -VAR6<VAR10> > 1 && VAR3->VAR23 && VAR4 > 0)
    {
        int64_t VAR29;
        VAR7 -= FUN5(VAR10 >> 1, VAR7);
        if ((VAR29 = VAR3->FUN6(VAR3->VAR19, VAR7, VAR16)) < 0)
            return VAR29;
        VAR3->VAR12 = VAR3->VAR17 = VAR3->VAR13;
        VAR3->VAR7 = VAR7;
        VAR3->VAR27 = 0;
        FUN4(VAR3);
        return FUN1(VAR3, VAR4, VAR16 | VAR8);
    }
    else
    {
        int64_t VAR29;
        if (VAR3->VAR14)
        {
            FUN7(VAR3);
        }
        if (!VAR3->VAR23)
            return FUN8(VAR30);
        if ((VAR29 = VAR3->FUN6(VAR3->VAR19, VAR4, VAR16)) < 0)
            return VAR29;
        VAR3->VAR31++;
        if (!VAR3->VAR14)
            VAR3->VAR12 = VAR3->VAR13;
        VAR3->VAR17 = VAR3->VAR21 = VAR3->VAR13;
        VAR3->VAR7 = VAR4;
    }
    VAR3->VAR27 = 0;
    return VAR4;