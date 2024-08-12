static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16;
    int VAR17, VAR18;
    int VAR19;
    int VAR20;
    if (VAR21 * 2 * VAR2->VAR22 > *VAR4)
    {
        FUN2(VAR2, VAR23, "");
        return FUN3(VAR24);
    }
    if (!VAR12->VAR15)
    {
        void *VAR25 = FUN4(VAR12->VAR3, (VAR9 + 3) & ~3);
        if (!VAR25)
            return FUN3(VAR26);
        VAR12->VAR3 = VAR25;
        VAR12->VAR27.FUN5((VAR28 *)VAR12->VAR3, (const VAR28 *)VAR8, VAR9 >> 2);
        VAR12->VAR29 = VAR12->VAR30 = VAR12->VAR3;
        VAR12->VAR31 = VAR12->VAR3 + VAR9;
        VAR16 = VAR12->VAR15 = FUN6(&VAR12->VAR29);
        VAR18 = FUN6(&VAR12->VAR29);
        if (VAR18 < 0 || VAR18 > 3)
        {
            FUN2(VAR2, VAR23, "");
            VAR12->VAR3 = NULL;
            return VAR32;
        }
        VAR12->VAR29 += VAR18;
        VAR12->VAR33 = VAR16;
        VAR8 += 4;
        if (VAR12->VAR15 <= 0)
        {
            *VAR4 = 0;
            return VAR9;
        }
        memset(VAR12->VAR34, 0, sizeof(VAR12->VAR34));
        memset(VAR12->VAR35, 0, sizeof(VAR12->VAR35));
        FUN7(VAR12);
    }
    if (!VAR12->VAR3)
    {
        *VAR4 = 0;
        return VAR9;
    }
    VAR16 = VAR12->VAR15;
    VAR19 = FUN8(VAR21, VAR16);
    VAR12->VAR36 = 0;
    if ((VAR12->VAR22 == 1) || (VAR12->VAR37 & VAR38))
        FUN9(VAR12, VAR19);
    else
        FUN10(VAR12, VAR19);
    FUN11();
    if (VAR12->VAR36 || VAR12->VAR29 > VAR12->VAR31)
    {
        VAR12->VAR15 = 0;
        FUN2(VAR2, VAR23, "");
        return VAR32;
    }
    for (VAR17 = 0; VAR17 < VAR19; VAR17++)
    {
        *VAR15++ = VAR12->VAR34[VAR17];
        if (VAR12->VAR22 == 2)
            *VAR15++ = VAR12->VAR35[VAR17];
    }
    VAR12->VAR15 -= VAR19;
    *VAR4 = VAR19 * 2 * VAR12->VAR22;
    VAR20 = VAR12->VAR15 ? VAR12->VAR29 - VAR12->VAR30 : VAR9;
    VAR12->VAR30 = VAR12->VAR29;
    return VAR20;
}