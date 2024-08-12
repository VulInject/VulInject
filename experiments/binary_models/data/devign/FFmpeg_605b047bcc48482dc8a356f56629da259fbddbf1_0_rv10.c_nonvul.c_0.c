static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    VAR15 *VAR16 = VAR3;
    int VAR17;
    const VAR7 *VAR18 = NULL;
    FUN2(VAR2, "", VAR2->VAR19, VAR9);
    if (VAR9 == 0)
    {
        return 0;
    }
    if (!VAR2->VAR17)
    {
        VAR17 = (*VAR8++) + 1;
        VAR9--;
        if (!VAR17 || VAR9 <= 8 * VAR17)
        {
            FUN3(VAR2, VAR20, "", VAR17);
            return VAR21;
        }
        VAR18 = VAR8 + 4;
        VAR8 += 8 * VAR17;
        VAR9 -= 8 * VAR17;
    }
    else
        VAR17 = VAR2->VAR17;
    for (VAR14 = 0; VAR14 < VAR17; VAR14++)
    {
        unsigned VAR22 = FUN4(VAR2, VAR18, VAR14);
        int VAR10, VAR23;
        if (VAR22 >= VAR9)
            return VAR21;
        if (VAR14 + 1 == VAR17)
            VAR10 = VAR9 - VAR22;
        else
            VAR10 = FUN4(VAR2, VAR18, VAR14 + 1) - VAR22;
        if (VAR14 + 2 >= VAR17)
            VAR23 = VAR9 - VAR22;
        else
            VAR23 = FUN4(VAR2, VAR18, VAR14 + 2) - VAR22;
        if (VAR10 <= 0 || VAR23 <= 0 || VAR22 + FUN5(VAR10, VAR23) > VAR9)
            return VAR21;
        if (FUN6(VAR2, VAR8 + VAR22, VAR10, VAR23) > 8 * VAR10)
            VAR14++;
    }
    if (VAR12->VAR24 != NULL && VAR12->VAR25 >= VAR12->VAR26)
    {
        FUN7(VAR12);
        FUN8(VAR12);
        if (VAR12->VAR27 == VAR28 || VAR12->VAR29)
        {
            *VAR16 = VAR12->VAR24->VAR30;
        }
        else if (VAR12->VAR31 != NULL)
        {
            *VAR16 = VAR12->VAR31->VAR30;
        }
        if (VAR12->VAR31 || VAR12->VAR29)
        {
            *VAR4 = 1;
            FUN9(VAR12, VAR16);
        }
        VAR12->VAR24 = NULL;
    }
    return VAR6->VAR10;
}