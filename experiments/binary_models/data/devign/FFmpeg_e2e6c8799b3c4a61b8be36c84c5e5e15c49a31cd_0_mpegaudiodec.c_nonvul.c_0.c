static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    uint32_t VAR14;
    int VAR15;
    VAR16 *VAR17 = VAR3;
    if (VAR9 < VAR18)
        return VAR19;
    VAR14 = FUN2(VAR8);
    if (FUN3(VAR14) < 0)
    {
        FUN4(VAR2, VAR20, "");
        return VAR19;
    }
    if (FUN5((VAR21 *)VAR12, VAR14) == 1)
    {
        VAR12->VAR22 = -1;
        return VAR19;
    }
    VAR2->VAR23 = VAR12->VAR24;
    VAR2->VAR25 = VAR12->VAR24 == 1 ? VAR26 : VAR27;
    if (!VAR2->VAR28)
        VAR2->VAR28 = VAR12->VAR28;
    VAR2->VAR29 = VAR12->VAR30;
    if (*VAR4 < VAR2->VAR22 * VAR2->VAR23 * sizeof(VAR16))
        return FUN6(VAR31);
    *VAR4 = 0;
    if (VAR12->VAR22 <= 0 || VAR12->VAR22 > VAR9)
    {
        FUN4(VAR2, VAR20, "");
        return VAR19;
    }
    else if (VAR12->VAR22 < VAR9)
    {
        FUN4(VAR2, VAR20, "");
        VAR9 = VAR12->VAR22;
    }
    VAR15 = FUN7(VAR12, VAR17, VAR8, VAR9);
    if (VAR15 >= 0)
    {
        *VAR4 = VAR15;
        VAR2->VAR32 = VAR12->VAR32;
    }
    else
    {
        FUN4(VAR2, VAR20, "");
        if (VAR9 == VAR6->VAR10)
            return VAR15;
    }
    VAR12->VAR22 = 0;
    return VAR9;
}