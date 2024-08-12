static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14 = VAR8 + VAR9;
    if (FUN2(VAR8) == VAR15 || FUN3(VAR8) == VAR15)
    {
        FUN4(VAR12, VAR8 + VAR16, VAR14);
        return VAR9;
    }
    if (FUN5(VAR12->VAR17, VAR12->VAR18, 0, VAR12->VAR2))
        return -1;
    if (VAR12->VAR19.VAR3[0])
        VAR2->FUN6(VAR2, &VAR12->VAR19);
    FUN7(VAR20, VAR12->VAR21, VAR12->VAR19);
    FUN7(VAR20, VAR12->VAR22, VAR12->VAR21);
    VAR12->VAR22.VAR23 = 1;
    VAR12->VAR22.VAR24 = VAR25;
    if (VAR2->FUN8(VAR2, &VAR12->VAR22) < 0)
    {
        FUN9(VAR2, VAR26, "");
        return -1;
    }
    memcpy(VAR12->VAR22.VAR3[1], VAR12->VAR27, VAR28);
    VAR8 += VAR16;
    if ((VAR8[0] & 1))
    {
        FUN10(VAR12, VAR8 + 2, VAR14);
        VAR12->VAR22.VAR29 = 0;
        VAR12->VAR22.VAR30 = VAR31;
    }
    else
    {
        VAR12->VAR22.VAR29 = 1;
        VAR12->VAR22.VAR30 = VAR32;
        FUN11(VAR12, VAR8 + 2, VAR14);
    }
    *VAR4 = sizeof(VAR20);
    *(VAR20 *)VAR3 = VAR12->VAR22;
    return VAR9;