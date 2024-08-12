static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const int VAR10 = 1 << VAR5;
    int VAR11;
    VAR8->VAR12.VAR13 = VAR6;
    if (VAR3 + VAR10 <= VAR2->VAR14->VAR15 && VAR4 + VAR10 <= VAR2->VAR14->VAR16 && VAR5 > VAR2->VAR14->VAR17)
    {
        FUN2(VAR2->VAR18, VAR3, VAR4) = FUN3(VAR2, VAR6, VAR3, VAR4);
    }
    else
    {
        FUN2(VAR2->VAR18, VAR3, VAR4) = (VAR5 > VAR2->VAR14->VAR17);
    }
    if (VAR2->VAR19->VAR20 && VAR5 >= VAR2->VAR14->VAR21 - VAR2->VAR19->VAR22)
    {
        VAR8->VAR23.VAR24 = 0;
        VAR8->VAR23.VAR25 = 0;
    }
    if (FUN2(VAR2->VAR18, VAR3, VAR4))
    {
        const int VAR26 = VAR10 >> 1;
        const int VAR27 = VAR3 + VAR26;
        const int VAR28 = VAR4 + VAR26;
        int VAR29 = 0;
        VAR29 = FUN1(VAR2, VAR3, VAR4, VAR5 - 1, VAR6 + 1);
        if (VAR29 < 0)
            return VAR29;
        if (VAR29 && VAR27 < VAR2->VAR14->VAR15)
            VAR29 = FUN1(VAR2, VAR27, VAR4, VAR5 - 1, VAR6 + 1);
        if (VAR29 && VAR28 < VAR2->VAR14->VAR16)
            VAR29 = FUN1(VAR2, VAR3, VAR28, VAR5 - 1, VAR6 + 1);
        if (VAR29 && VAR27 < VAR2->VAR14->VAR15 && VAR28 < VAR2->VAR14->VAR16)
        {
            return FUN1(VAR2, VAR27, VAR28, VAR5 - 1, VAR6 + 1);
        }
        if (VAR29)
            return ((VAR27 + VAR26) < VAR2->VAR14->VAR15 || (VAR28 + VAR26) < VAR2->VAR14->VAR16);
        else
            return 0;
    }
    else
    {
        VAR11 = FUN4(VAR2, VAR3, VAR4, VAR5);
        if (VAR11 < 0)
            return VAR11;
        if ((!((VAR3 + VAR10) % (1 << (VAR2->VAR14->VAR21))) || (VAR3 + VAR10 >= VAR2->VAR14->VAR15)) && (!((VAR4 + VAR10) % (1 << (VAR2->VAR14->VAR21))) || (VAR4 + VAR10 >= VAR2->VAR14->VAR16)))
        {
            int VAR30 = FUN5(VAR2);
            return !VAR30;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}