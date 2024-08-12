static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    const VAR7 *VAR14 = VAR8 + VAR9;
    int VAR15;
    if (VAR14 - VAR8 < VAR16)
        return VAR17;
    VAR15 = FUN2(&VAR8[0]);
    VAR8 += VAR16;
    if (VAR15 == VAR18)
    {
        int VAR19, VAR20;
        if (VAR14 - VAR8 < 12)
        {
            FUN3(VAR2, VAR21, "");
            return -1;
        }
        VAR12->VAR22 = FUN4(&VAR8[0]);
        VAR12->VAR23 = FUN4(&VAR8[2]);
        if (VAR12->VAR2->VAR22 != VAR12->VAR22 || VAR12->VAR2->VAR23 != VAR12->VAR23)
        {
            FUN5(VAR12->VAR2, VAR12->VAR22, VAR12->VAR23);
            FUN6(&VAR12->VAR24);
            FUN6(&VAR12->VAR25);
        }
        VAR19 = FUN4(&VAR8[6]);
        VAR8 += 12;
        for (VAR20 = 0; VAR20 < VAR19 && VAR20 < VAR26 && VAR14 - VAR8 >= 3; VAR20++)
        {
            VAR12->VAR27[VAR20] = 0xFF << 24 | FUN7(VAR8);
            VAR8 += 3;
        }
    }
    if (FUN8(VAR12->VAR22, VAR12->VAR23, 0, VAR2))
        return -1;
    FUN9(VAR28, VAR12->VAR24, VAR12->VAR25);
    if (!VAR12->VAR24.VAR3[0])
    {
        VAR12->VAR24.VAR29 = 3;
        VAR12->VAR24.VAR30 = VAR31;
        VAR12->VAR24.VAR32[0] = VAR12->VAR22;
        VAR12->VAR24.VAR3[0] = FUN10(VAR12->VAR22 * VAR12->VAR23 + 12);
        if (!VAR12->VAR24.VAR3[0])
            return FUN11(VAR33);
        VAR12->VAR24.VAR3[1] = FUN10(VAR34);
        if (!VAR12->VAR24.VAR3[1])
        {
            FUN12(&VAR12->VAR24.VAR3[0]);
            return FUN11(VAR33);
        }
    }
    memcpy(VAR12->VAR24.VAR3[1], VAR12->VAR27, VAR34);
    if (VAR15 == VAR18)
    {
        VAR12->VAR24.VAR35 = 1;
        VAR12->VAR24.VAR36 = VAR37;
        if (FUN13(VAR8, VAR14, VAR12->VAR24.VAR3[0], VAR12->VAR2->VAR22, VAR12->VAR2->VAR23) < 0)
        {
            FUN3(VAR2, VAR21, "");
            return -1;
        }
    }
    else
    {
        if (!VAR12->VAR25.VAR3[0])
        {
            FUN3(VAR2, VAR21, "");
            return VAR9;
        }
        VAR12->VAR24.VAR35 = 0;
        VAR12->VAR24.VAR36 = VAR38;
        if (FUN14(VAR12, VAR8, VAR14) < 0)
        {
            FUN3(VAR2, VAR21, "");
            return -1;
        }
    }
    *VAR4 = sizeof(VAR28);
    *(VAR28 *)VAR3 = VAR12->VAR24;
    return VAR9;
}