static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    const VAR7 *VAR15 = FUN2(VAR6, VAR16, &VAR14);
    VAR17 *VAR18 = VAR3;
    int VAR19;
    VAR12->VAR8 = VAR8;
    VAR12->VAR10 = VAR9;
    if ((VAR19 = FUN3(VAR2, VAR18, 0)) < 0)
        return VAR19;
    if (FUN4(VAR12, VAR18))
        return VAR20;
    if (VAR15 && VAR14 == VAR21)
    {
        VAR18->VAR22 = 1;
        memcpy(VAR12->VAR15, VAR15, VAR21);
    }
    else if (VAR15)
    {
        FUN5(VAR2, VAR23, "", VAR14);
    }
    memcpy(VAR18->VAR3[1], VAR12->VAR15, VAR21);
    *VAR4 = 1;
    return VAR9;
}