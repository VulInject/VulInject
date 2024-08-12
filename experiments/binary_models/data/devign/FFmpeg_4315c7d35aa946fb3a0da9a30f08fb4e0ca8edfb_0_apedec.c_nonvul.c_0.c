static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    uint32_t VAR16;
    int VAR17;
    int VAR18, VAR19;
    int VAR20;
    FUN2(VAR12->VAR15 >= 0);
    if (!VAR12->VAR15)
    {
        uint32_t VAR21;
        void *VAR22;
        if (VAR9 < 8)
        {
            FUN3(VAR2, VAR23, "");
            return VAR24;
        }
        VAR22 = FUN4(VAR12->VAR3, FUN5(VAR9, 4));
        if (!VAR22)
            return FUN6(VAR25);
        VAR12->VAR3 = VAR22;
        VAR12->VAR26.FUN7((VAR27 *)VAR12->VAR3, (const VAR27 *)VAR8, VAR9 >> 2);
        VAR12->VAR28 = VAR12->VAR29 = VAR12->VAR3;
        VAR12->VAR30 = VAR12->VAR3 + VAR9;
        VAR16 = FUN8(&VAR12->VAR28);
        VAR21 = FUN8(&VAR12->VAR28);
        if (VAR21 > 3)
        {
            FUN3(VAR2, VAR23, "");
            VAR12->VAR3 = NULL;
            return VAR24;
        }
        if (VAR12->VAR30 - VAR12->VAR28 < VAR21)
        {
            FUN3(VAR2, VAR23, "");
            return VAR24;
        }
        VAR12->VAR28 += VAR21;
        if (!VAR16 || VAR16 > VAR31)
        {
            FUN3(VAR2, VAR23, "", VAR16);
            return VAR24;
        }
        VAR12->VAR15 = VAR16;
        memset(VAR12->VAR32, 0, sizeof(VAR12->VAR32));
        memset(VAR12->VAR33, 0, sizeof(VAR12->VAR33));
        if (FUN9(VAR12) < 0)
        {
            FUN3(VAR2, VAR23, "");
            return VAR24;
        }
    }
    if (!VAR12->VAR3)
    {
        *VAR4 = 0;
        return VAR9;
    }
    VAR16 = VAR12->VAR15;
    VAR18 = FUN10(VAR34, VAR16);
    VAR19 = VAR18 * VAR2->VAR35 * FUN11(VAR2->VAR36);
    if (*VAR4 < VAR19)
    {
        FUN3(VAR2, VAR23, "");
        return FUN6(VAR37);
    }
    VAR12->VAR38 = 0;
    if ((VAR12->VAR35 == 1) || (VAR12->VAR39 & VAR40))
        FUN12(VAR12, VAR18);
    else
        FUN13(VAR12, VAR18);
    FUN14();
    if (VAR12->VAR38)
    {
        VAR12->VAR15 = 0;
        FUN3(VAR2, VAR23, "");
        return VAR24;
    }
    for (VAR17 = 0; VAR17 < VAR18; VAR17++)
    {
        *VAR15++ = VAR12->VAR32[VAR17];
        if (VAR12->VAR35 == 2)
            *VAR15++ = VAR12->VAR33[VAR17];
    }
    VAR12->VAR15 -= VAR18;
    VAR20 = VAR12->VAR15 ? VAR12->VAR28 - VAR12->VAR29 : VAR9;
    VAR12->VAR29 = VAR12->VAR28;
    *VAR4 = VAR19;
    return VAR20;
}