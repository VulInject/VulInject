static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    uint32_t VAR14;
    int VAR15;
    int VAR16 = 0;
    while (VAR9 && !*VAR8)
    {
        VAR8++;
        VAR9--;
        VAR16++;
    }
    if (VAR9 < VAR17)
        return VAR18;
    VAR14 = FUN2(VAR8);
    if (VAR14 >> 8 == FUN2("") >> 8)
    {
        FUN3(VAR2, VAR19, "");
        return VAR9;
    }
    VAR15 = FUN4((VAR20 *)VAR12, VAR14);
    if (VAR15 < 0)
    {
        FUN3(VAR2, VAR21, "");
        return VAR18;
    }
    else if (VAR15 == 1)
    {
        VAR12->VAR22 = -1;
        return VAR18;
    }
    VAR2->VAR23 = VAR12->VAR24;
    VAR2->VAR25 = VAR12->VAR24 == 1 ? VAR26 : VAR27;
    if (!VAR2->VAR28)
        VAR2->VAR28 = VAR12->VAR28;
    if (VAR12->VAR22 <= 0)
    {
        FUN3(VAR2, VAR21, "");
        return VAR18;
    }
    else if (VAR12->VAR22 < VAR9)
    {
        FUN3(VAR2, VAR19, "");
        VAR9 = VAR12->VAR22;
    }
    VAR12->VAR29 = VAR3;
    VAR15 = FUN5(VAR12, NULL, VAR8, VAR9);
    if (VAR15 >= 0)
    {
        VAR12->VAR29->VAR30 = VAR2->VAR22;
        *VAR4 = 1;
        VAR2->VAR31 = VAR12->VAR31;
    }
    else
    {
        FUN3(VAR2, VAR21, "");
        *VAR4 = 0;
        if (VAR9 == VAR6->VAR10 || VAR15 != VAR18)
            return VAR15;
    }
    VAR12->VAR22 = 0;
    return VAR9 + VAR16;
}