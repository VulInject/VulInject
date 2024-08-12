static int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5, bool *VAR6, VAR7 **VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    int64_t VAR14;
    VAR15 *VAR16;
    int VAR17;
    if (!*VAR8)
    {
        int64_t VAR18 = 0;
        VAR17 = FUN2(VAR12, VAR8, &VAR18, *VAR10);
        if (VAR17 < 0)
        {
            VAR4->VAR19++;
            return VAR17;
        }
    }
    VAR17 = FUN3(VAR2, VAR4, VAR8, VAR10, 0, VAR12->VAR20);
    if (VAR17 < 0)
    {
        return VAR17;
    }
    VAR17 = FUN4(VAR2, VAR4, VAR8, VAR10, VAR12->VAR21, VAR12->VAR22, VAR23);
    if (VAR17 < 0)
    {
        return VAR17;
    }
    for (VAR14 = 0; VAR14 < VAR12->VAR24; VAR14++)
    {
        VAR16 = VAR12->VAR25 + VAR14;
        VAR17 = FUN4(VAR2, VAR4, VAR8, VAR10, VAR16->VAR21, VAR16->VAR22, 0);
        if (VAR17 < 0)
        {
            return VAR17;
        }
    }
    VAR17 = FUN3(VAR2, VAR4, VAR8, VAR10, VAR12->VAR26, VAR12->VAR27);
    if (VAR17 < 0)
    {
        return VAR17;
    }
    VAR17 = FUN3(VAR2, VAR4, VAR8, VAR10, VAR12->VAR28, VAR12->VAR29 * sizeof(VAR30));
    if (VAR17 < 0)
    {
        return VAR17;
    }
    return FUN5(VAR2, VAR4, VAR5, VAR6, VAR8, VAR10);
}