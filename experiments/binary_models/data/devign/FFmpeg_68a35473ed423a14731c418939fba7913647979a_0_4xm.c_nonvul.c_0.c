static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13 = 1;
    VAR3 *VAR14, *VAR15;
    unsigned VAR16 = 0;
    if (VAR7 < 0 || VAR6 < 0)
        return VAR17;
    VAR9 = VAR18[VAR7][VAR6];
    if (VAR9 < 0)
        return VAR17;
    VAR10 = 1 << VAR7;
    VAR11 = FUN2(&VAR2->VAR19, VAR20[1 - (VAR2->VAR21 > 1)][VAR9].VAR22, VAR23, 1);
    if (VAR11 < 0 || VAR11 > 6)
        return VAR17;
    VAR14 = VAR2->VAR24;
    VAR15 = VAR14 + VAR8 * (VAR2->VAR25->VAR26 - VAR10 + 1) - (1 << VAR6);
    if (VAR11 == 1)
    {
        if (--VAR7 < 0)
            return VAR17;
        if ((VAR12 = FUN1(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8)) < 0)
            return VAR12;
        return FUN1(VAR2, VAR4 + (VAR8 << VAR7), VAR5 + (VAR8 << VAR7), VAR6, VAR7, VAR8);
    }
    else if (VAR11 == 2)
    {
        VAR6--;
        if ((VAR12 = FUN1(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8)) < 0)
            return VAR12;
        return FUN1(VAR2, VAR4 + (1 << VAR6), VAR5 + (1 << VAR6), VAR6, VAR7, VAR8);
    }
    else if (VAR11 == 6)
    {
        if (VAR6)
        {
            VAR4[0] = FUN3(&VAR2->VAR27);
            VAR4[1] = FUN3(&VAR2->VAR27);
        }
        else
        {
            VAR4[0] = FUN3(&VAR2->VAR27);
            VAR4[VAR8] = FUN3(&VAR2->VAR27);
        }
        return 0;
    }
    if (VAR11 == 0)
    {
        VAR5 += VAR2->VAR28[FUN4(&VAR2->VAR29)];
    }
    else if (VAR11 == 3 && VAR2->VAR21 >= 2)
    {
        return 0;
    }
    else if (VAR11 == 4)
    {
        VAR5 += VAR2->VAR28[FUN4(&VAR2->VAR29)];
        VAR16 = FUN3(&VAR2->VAR27);
    }
    else if (VAR11 == 5)
    {
        VAR13 = 0;
        VAR16 = FUN3(&VAR2->VAR27);
    }
    if (VAR14 > VAR5 || VAR5 > VAR15)
    {
        FUN5(VAR2->VAR25, VAR30, "");
        return VAR17;
    }
    FUN6(VAR4, VAR5, VAR6, VAR10, VAR8, VAR13, VAR16);
    return 0;
}