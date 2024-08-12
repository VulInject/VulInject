static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    VAR14 *const VAR16 = &VAR12->VAR15;
    int VAR17, VAR18;
    if (VAR16->VAR3[0])
        VAR2->FUN2(VAR2, VAR16);
    VAR16->VAR19 = 1;
    VAR16->VAR20 = VAR21 | VAR22 | VAR23;
    if ((VAR18 = VAR2->FUN3(VAR2, VAR16)) < 0)
    {
        FUN4(VAR12->VAR2, VAR24, "");
        return VAR18;
    }
    VAR17 = 48;
    if (VAR17 >= VAR9)
    {
        FUN4(VAR12->VAR2, VAR24, "", VAR9);
        return VAR25;
    }
    VAR12->VAR26 = VAR8[18];
    for (VAR27 = 0; VAR27 < VAR9; VAR27++)
        VAR8[VAR27] = VAR28[VAR8[VAR27]];
    FUN5(&VAR12->VAR29, VAR8 + VAR17, (VAR9 - VAR17) * 8);
    if (VAR12->VAR26)
    {
        if ((VAR18 = FUN6(VAR12, VAR2->VAR30, VAR2->VAR31, VAR12->VAR15.VAR3[0], VAR12->VAR15.VAR32[0], VAR33)) < 0)
            return VAR18;
        if ((VAR18 = FUN6(VAR12, VAR2->VAR30 >> 2, VAR2->VAR31 >> 2, VAR12->VAR15.VAR3[2], VAR12->VAR15.VAR32[2], VAR33)) < 0)
            return VAR18;
        if ((VAR18 = FUN6(VAR12, VAR2->VAR30 >> 2, VAR2->VAR31 >> 2, VAR12->VAR15.VAR3[1], VAR12->VAR15.VAR32[1], VAR33)) < 0)
            return VAR18;
    }
    else
    {
        if ((VAR18 = FUN7(VAR12, VAR2->VAR30, VAR2->VAR31, VAR12->VAR15.VAR3[0], VAR12->VAR15.VAR32[0], VAR33)) < 0)
            return VAR18;
        if ((VAR18 = FUN7(VAR12, VAR2->VAR30 >> 2, VAR2->VAR31 >> 2, VAR12->VAR15.VAR3[2], VAR12->VAR15.VAR32[2], VAR33)) < 0)
            return VAR18;
        if ((VAR18 = FUN7(VAR12, VAR2->VAR30 >> 2, VAR2->VAR31 >> 2, VAR12->VAR15.VAR3[1], VAR12->VAR15.VAR32[1], VAR33)) < 0)
            return VAR18;
    }
    *VAR15 = VAR12->VAR15;
    *VAR4 = 1;
    return VAR9;
}