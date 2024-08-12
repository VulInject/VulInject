static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16, VAR17;
    int VAR18;
    const VAR7 *VAR19 = NULL;
    FUN2(VAR2, "", VAR2->VAR20, VAR9);
    if (VAR9 == 0)
    {
        return 0;
    }
    if (!VAR2->VAR18)
    {
        VAR18 = (*VAR8++) + 1;
        VAR9--;
        if (!VAR18 || VAR9 <= 8 * VAR18)
        {
            FUN3(VAR2, VAR21, "", VAR18);
            return VAR22;
        }
        VAR19 = VAR8 + 4;
        VAR8 += 8 * VAR18;
        VAR9 -= 8 * VAR18;
    }
    else
        VAR18 = VAR2->VAR18;
    for (VAR16 = 0; VAR16 < VAR18; VAR16++)
    {
        unsigned VAR23 = FUN4(VAR2, VAR19, VAR16);
        int VAR10, VAR24;
        if (VAR23 >= VAR9)
            return VAR22;
        if (VAR16 + 1 == VAR18)
            VAR10 = VAR9 - VAR23;
        else
            VAR10 = FUN4(VAR2, VAR19, VAR16 + 1) - VAR23;
        if (VAR16 + 2 >= VAR18)
            VAR24 = VAR9 - VAR23;
        else
            VAR24 = FUN4(VAR2, VAR19, VAR16 + 2) - VAR23;
        if (VAR10 <= 0 || VAR24 <= 0 || VAR23 + FUN5(VAR10, VAR24) > VAR9)
            return VAR22;
        if ((VAR17 = FUN6(VAR2, VAR8 + VAR23, VAR10, VAR24)) < 0)
            return VAR17;
        if (VAR17 > 8 * VAR10)
            VAR16++;
    }
    if (VAR12->VAR25 != NULL && VAR12->VAR26 >= VAR12->VAR27)
    {
        FUN7(&VAR12->VAR28);
        FUN8(VAR12);
        if (VAR12->VAR29 == VAR30 || VAR12->VAR31)
        {
            if ((VAR17 = FUN9(VAR15, &VAR12->VAR25->VAR32)) < 0)
                return VAR17;
            FUN10(VAR12, VAR12->VAR25);
        }
        else if (VAR12->VAR33 != NULL)
        {
            if ((VAR17 = FUN9(VAR15, &VAR12->VAR33->VAR32)) < 0)
                return VAR17;
            FUN10(VAR12, VAR12->VAR33);
        }
        if (VAR12->VAR33 || VAR12->VAR31)
        {
            *VAR4 = 1;
        }
        VAR12->VAR25 = NULL;
    }
    return VAR6->VAR10;
}