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
        VAR18 = VAR8 + 4;
        VAR8 += 8 * VAR17;
    }
    else
        VAR17 = VAR2->VAR17;
    for (VAR14 = 0; VAR14 < VAR17; VAR14++)
    {
        int VAR20 = FUN3(VAR2, VAR18, VAR14);
        int VAR10, VAR21;
        if (VAR14 + 1 == VAR17)
            VAR10 = VAR9 - VAR20;
        else
            VAR10 = FUN3(VAR2, VAR18, VAR14 + 1) - VAR20;
        if (VAR14 + 2 >= VAR17)
            VAR21 = VAR9 - VAR20;
        else
            VAR21 = FUN3(VAR2, VAR18, VAR14 + 2) - VAR20;
        if (FUN4(VAR2, VAR8 + VAR20, VAR10, VAR21) > 8 * VAR10)
            VAR14++;
    }
    if (VAR12->VAR22 != NULL && VAR12->VAR23 >= VAR12->VAR24)
    {
        FUN5(VAR12);
        FUN6(VAR12);
        if (VAR12->VAR25 == VAR26 || VAR12->VAR27)
        {
            *VAR16 = *(VAR15 *)VAR12->VAR22;
        }
        else if (VAR12->VAR28 != NULL)
        {
            *VAR16 = *(VAR15 *)VAR12->VAR28;
        }
        if (VAR12->VAR28 || VAR12->VAR27)
        {
            *VAR4 = sizeof(VAR15);
            FUN7(VAR12, VAR16);
        }
        VAR12->VAR22 = NULL;
    }
    return VAR9;
}