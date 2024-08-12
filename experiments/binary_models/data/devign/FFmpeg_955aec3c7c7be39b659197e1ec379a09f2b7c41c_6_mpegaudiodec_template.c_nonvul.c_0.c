static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    uint32_t VAR14;
    int VAR15;
    if (VAR9 < VAR16)
        return VAR17;
    VAR14 = FUN2(VAR8);
    VAR15 = FUN3((VAR18 *)VAR12, VAR14);
    if (VAR15 < 0)
    {
        FUN4(VAR2, VAR19, "");
        return VAR17;
    }
    else if (VAR15 == 1)
    {
        VAR12->VAR20 = -1;
        return VAR17;
    }
    VAR2->VAR21 = VAR12->VAR22;
    VAR2->VAR23 = VAR12->VAR22 == 1 ? VAR24 : VAR25;
    if (!VAR2->VAR26)
        VAR2->VAR26 = VAR12->VAR26;
    VAR12->VAR27 = VAR3;
    VAR15 = FUN5(VAR12, NULL, VAR8, VAR9);
    if (VAR15 >= 0)
    {
        VAR12->VAR27->VAR28 = VAR2->VAR20;
        *VAR4 = 1;
        VAR2->VAR29 = VAR12->VAR29;
    }
    else
    {
        FUN4(VAR2, VAR19, "");
        *VAR4 = 0;
        if (VAR9 == VAR6->VAR10 || VAR15 != VAR17)
            return VAR15;
    }
    VAR12->VAR20 = 0;
    return VAR9;
}