static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14;
    const VAR7 *VAR15 = FUN2(VAR6, VAR16, &VAR14);
    int VAR17;
    FUN3(&VAR12->VAR18, VAR8, VAR9);
    if ((VAR17 = FUN4(VAR2, VAR12->VAR19)) < 0)
        return VAR17;
    if (VAR15 && VAR14 == VAR20)
    {
        VAR12->VAR19->VAR21 = 1;
        memcpy(VAR12->VAR15, VAR15, VAR20);
    }
    else if (VAR15)
    {
        FUN5(VAR2, VAR22, "", VAR14);
    }
    FUN6(VAR12);
    *VAR4 = 1;
    if ((VAR17 = FUN7(VAR3, VAR12->VAR19)) < 0)
        return VAR17;
    return VAR9;
}