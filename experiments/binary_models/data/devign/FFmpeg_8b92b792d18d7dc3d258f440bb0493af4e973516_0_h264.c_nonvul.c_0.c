static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14 = VAR3;
    float VAR15;
    int VAR16;
    VAR12->VAR17 = VAR2->VAR17;
    *VAR4 = 0;
    if (VAR7 == 0)
    {
        return 0;
    }
    if (VAR12->VAR17 & VAR18)
    {
        int VAR19 = FUN2(VAR12, VAR6, VAR7);
        if (FUN3(VAR12, VAR19, &VAR6, &VAR7) < 0)
            return VAR7;
    }
    if (VAR12->VAR2->VAR20 && VAR12->VAR21 == 0)
    {
        if (0 < FUN4(VAR9, VAR12->VAR2->VAR22, VAR12->VAR2->VAR20))
            return -1;
    }
    VAR16 = FUN4(VAR9, VAR6, VAR7);
    if (VAR16 < 0)
        return -1;
    if (VAR12->VAR23 == VAR24 || VAR12->VAR25)
    {
        *VAR14 = *(VAR13 *)&VAR12->VAR26;
    }
    else
    {
        *VAR14 = *(VAR13 *)&VAR12->VAR27;
    }
    if (!VAR12->VAR28)
    {
        fprintf(VAR29, "");
        return -1;
    }
    *VAR14 = *(VAR13 *)&VAR12->VAR26;
    assert(VAR14->VAR3[0]);
    VAR2->VAR30 = VAR12->VAR21 - 1;
    if (VAR12->VAR31 || VAR12->VAR25)
        *VAR4 = sizeof(VAR13);
    return FUN5(VAR12, VAR16, VAR7);
}