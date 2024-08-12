static int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5, VAR6 **VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    int64_t VAR13;
    VAR14 *VAR15;
    int VAR16;
    *VAR7 = FUN2(VAR6, *VAR9);
    if (*VAR9 && *VAR7 == NULL)
    {
        VAR4->VAR17++;
        return -VAR18;
    }
    VAR16 = FUN3(VAR2, VAR4, VAR7, VAR9, 0, VAR11->VAR19);
    if (VAR16 < 0)
    {
        return VAR16;
    }
    VAR16 = FUN4(VAR2, VAR4, VAR7, VAR9, VAR11->VAR20, VAR11->VAR21, VAR22);
    if (VAR16 < 0)
    {
        return VAR16;
    }
    for (VAR13 = 0; VAR13 < VAR11->VAR23; VAR13++)
    {
        VAR15 = VAR11->VAR24 + VAR13;
        VAR16 = FUN4(VAR2, VAR4, VAR7, VAR9, VAR15->VAR20, VAR15->VAR21, 0);
        if (VAR16 < 0)
        {
            return VAR16;
        }
    }
    VAR16 = FUN3(VAR2, VAR4, VAR7, VAR9, VAR11->VAR25, VAR11->VAR26);
    if (VAR16 < 0)
    {
        return VAR16;
    }
    VAR16 = FUN3(VAR2, VAR4, VAR7, VAR9, VAR11->VAR27, VAR11->VAR28 * sizeof(VAR29));
    if (VAR16 < 0)
    {
        return VAR16;
    }
    return FUN5(VAR2, VAR4, VAR5, VAR7, VAR9);
}