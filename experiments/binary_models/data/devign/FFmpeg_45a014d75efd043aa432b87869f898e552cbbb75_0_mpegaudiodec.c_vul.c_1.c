static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    uint32_t VAR14;
    int VAR15;
    VAR16 *VAR17 = VAR3;
    if (VAR9 < VAR18)
        return -1;
    VAR14 = FUN2(VAR8);
    if (FUN3(VAR14) < 0)
    {
        FUN4(VAR2, VAR19, "");
        return -1;
    }
    if (FUN5((VAR20 *)VAR12, VAR14) == 1)
    {
        VAR12->VAR21 = -1;
        return -1;
    }
    VAR2->VAR22 = VAR12->VAR23;
    VAR2->VAR24 = VAR12->VAR24;
    VAR2->VAR25 = VAR12->VAR26;
    if (*VAR4 < 1152 * VAR2->VAR22 * sizeof(VAR16))
        return -1;
    if (VAR12->VAR21 <= 0 || VAR12->VAR21 > VAR9)
    {
        FUN4(VAR2, VAR19, "");
        return -1;
    }
    else if (VAR12->VAR21 < VAR9)
    {
        FUN4(VAR2, VAR19, "");
        VAR9 = VAR12->VAR21;
    }
    VAR15 = FUN6(VAR12, VAR17, VAR8, VAR9);
    if (VAR15 >= 0)
    {
        *VAR4 = VAR15;
        VAR2->VAR27 = VAR12->VAR27;
    }
    else
        FUN4(VAR2, VAR28, "");
    VAR12->VAR21 = 0;
    return VAR9;