static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14 = VAR8 + VAR9;
    VAR15 *VAR16 = VAR3;
    int VAR17, VAR18;
    if (VAR14 - VAR8 < VAR19)
        return VAR20;
    VAR17 = FUN2(&VAR8[0]);
    VAR8 += VAR19;
    if (VAR17 == VAR21)
    {
        int VAR22, VAR23;
        if (VAR14 - VAR8 < 12)
        {
            FUN3(VAR2, VAR24, "");
            return VAR20;
        }
        VAR12->VAR25 = FUN4(&VAR8[0]);
        VAR12->VAR26 = FUN4(&VAR8[2]);
        if (VAR12->VAR2->VAR25 != VAR12->VAR25 || VAR12->VAR2->VAR26 != VAR12->VAR26)
        {
            FUN5(&VAR12->VAR27);
            FUN6(VAR12->VAR28);
            if ((VAR18 = FUN7(VAR12->VAR2, VAR12->VAR25, VAR12->VAR26)) < 0)
                return VAR18;
        }
        VAR22 = FUN4(&VAR8[6]);
        VAR8 += 12;
        for (VAR23 = 0; VAR23 < VAR22 && VAR23 < VAR29 && VAR14 - VAR8 >= 3; VAR23++)
        {
            VAR12->VAR30[VAR23] = 0xFFU << 24 | FUN8(VAR8);
            VAR8 += 3;
        }
    }
    if ((VAR18 = FUN9(VAR2, VAR16, VAR31)) < 0)
        return VAR18;
    memcpy(VAR16->VAR3[1], VAR12->VAR30, VAR32);
    if (VAR17 == VAR21)
    {
        int VAR33;
        VAR16->VAR34 = 1;
        VAR16->VAR35 = VAR36;
        if (!VAR12->VAR27 && !(VAR12->VAR27 = FUN10(VAR12->VAR25 * VAR12->VAR26)))
            return FUN11(VAR37);
        if (FUN12(VAR8, VAR14, VAR12->VAR27, VAR12->VAR2->VAR25, VAR12->VAR2->VAR26) < 0)
        {
            FUN3(VAR2, VAR24, "");
            return VAR20;
        }
        for (VAR33 = 0; VAR33 < VAR12->VAR26; VAR33++)
            memcpy(VAR16->VAR3[0] + VAR33 * VAR16->VAR38[0], VAR12->VAR27 + VAR33 * VAR12->VAR25, VAR12->VAR25);
    }
    else
    {
        if (!VAR12->VAR28->VAR3[0])
        {
            FUN3(VAR2, VAR24, "");
            return VAR9;
        }
        VAR16->VAR34 = 0;
        VAR16->VAR35 = VAR39;
        if (FUN13(VAR12, VAR16, VAR8, VAR14) < 0)
        {
            FUN3(VAR2, VAR24, "");
            return VAR20;
        }
    }
    FUN6(VAR12->VAR28);
    if ((VAR18 = FUN14(VAR12->VAR28, VAR16)) < 0)
        return VAR18;
    *VAR4 = 1;
    return VAR9;
}