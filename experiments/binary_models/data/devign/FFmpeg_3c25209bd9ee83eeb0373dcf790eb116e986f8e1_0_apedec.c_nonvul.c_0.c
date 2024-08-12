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
        FUN2(VAR2, VAR23, "", *VAR4, VAR12->VAR15 * 2 * VAR2->VAR22);
        return -1;
    }
    if (!VAR12->VAR15)
    {
        VAR12->VAR3 = FUN3(VAR12->VAR3, (VAR9 + 3) & ~3);
        VAR12->VAR24.FUN4((VAR25 *)VAR12->VAR3, (const VAR25 *)VAR8, VAR9 >> 2);
        VAR12->VAR26 = VAR12->VAR27 = VAR12->VAR3;
        VAR12->VAR28 = VAR12->VAR3 + VAR9;
        VAR16 = VAR12->VAR15 = FUN5(&VAR12->VAR26);
        VAR18 = FUN5(&VAR12->VAR26);
        if (VAR18 < 0 || VAR18 > 3)
        {
            FUN2(VAR2, VAR23, "");
            VAR12->VAR3 = NULL;
            return -1;
        }
        VAR12->VAR26 += VAR18;
        VAR12->VAR29 = VAR16;
        VAR8 += 4;
        if (VAR12->VAR15 <= 0)
        {
            *VAR4 = 0;
            return VAR9;
        }
        memset(VAR12->VAR30, 0, sizeof(VAR12->VAR30));
        memset(VAR12->VAR31, 0, sizeof(VAR12->VAR31));
        FUN6(VAR12);
    }
    if (!VAR12->VAR3)
    {
        *VAR4 = 0;
        return VAR9;
    }
    VAR16 = VAR12->VAR15;
    VAR19 = FUN7(VAR21, VAR16);
    VAR12->VAR32 = 0;
    if ((VAR12->VAR22 == 1) || (VAR12->VAR33 & VAR34))
        FUN8(VAR12, VAR19);
    else
        FUN9(VAR12, VAR19);
    FUN10();
    if (VAR12->VAR32 || VAR12->VAR26 > VAR12->VAR28)
    {
        VAR12->VAR15 = 0;
        FUN2(VAR2, VAR23, "");
        return -1;
    }
    for (VAR17 = 0; VAR17 < VAR19; VAR17++)
    {
        *VAR15++ = VAR12->VAR30[VAR17];
        if (VAR12->VAR22 == 2)
            *VAR15++ = VAR12->VAR31[VAR17];
    }
    VAR12->VAR15 -= VAR19;
    *VAR4 = VAR19 * 2 * VAR12->VAR22;
    VAR20 = VAR12->VAR15 ? VAR12->VAR26 - VAR12->VAR27 : VAR9;
    VAR12->VAR27 = VAR12->VAR26;
    return VAR20;
}