static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16 = 0;
    int VAR17;
    const VAR7 *VAR18;
    int VAR19;
    VAR12->VAR20 = VAR2->VAR20;
    VAR12->VAR21 = 0;
VAR22:
    if (VAR9 == 0)
    {
        VAR23 *VAR22;
        int VAR24, VAR25;
        VAR12->VAR26 = NULL;
        VAR22 = VAR12->VAR27[0];
        VAR25 = 0;
        for (VAR24 = 1; VAR12->VAR27[VAR24] && !VAR12->VAR27[VAR24]->VAR28->VAR29 && !VAR12->VAR27[VAR24]->VAR30; VAR24++)
            if (VAR12->VAR27[VAR24]->VAR31 < VAR22->VAR31)
            {
                VAR22 = VAR12->VAR27[VAR24];
                VAR25 = VAR24;
            }
        for (VAR24 = VAR25; VAR12->VAR27[VAR24]; VAR24++)
            VAR12->VAR27[VAR24] = VAR12->VAR27[VAR24 + 1];
        if (VAR22)
        {
            VAR17 = FUN2(VAR12, VAR15, VAR22->VAR28);
            if (VAR17 < 0)
                return VAR17;
            *VAR4 = 1;
        }
        return VAR16;
    }
    VAR19 = 0;
    VAR18 = FUN3(VAR6, VAR32, &VAR19);
    if (VAR19 > 0 && VAR18)
    {
        VAR17 = FUN4(VAR18, VAR19, &VAR12->VAR33, &VAR12->VAR34, &VAR12->VAR35, VAR2->VAR36, VAR2);
        if (VAR17 < 0)
            return VAR17;
    }
    VAR16 = FUN5(VAR12, VAR8, VAR9);
    if (VAR16 < 0)
        return VAR37;
    if (!VAR12->VAR26 && VAR12->VAR38 == VAR39)
    {
        VAR9 = 0;
        goto VAR22;
    }
    if (!(VAR2->VAR40 & VAR41) && !VAR12->VAR26)
    {
        if (VAR2->VAR42 >= VAR43)
            return 0;
        FUN6(VAR2, VAR44, "");
        return VAR37;
    }
    if (!(VAR2->VAR40 & VAR41) || (VAR12->VAR45 >= VAR12->VAR46 && VAR12->VAR46))
    {
        if (VAR2->VAR40 & VAR41)
            FUN7(VAR12, 1);
        FUN8(VAR12, &VAR12->VAR47[0], 0);
        *VAR4 = 0;
        if (VAR12->VAR48 && ((VAR2->VAR20 & VAR49) || VAR12->VAR48->VAR50))
        {
            if (!VAR12->VAR48->VAR50)
                VAR12->VAR48->VAR28->VAR20 |= VAR51;
            VAR17 = FUN2(VAR12, VAR15, VAR12->VAR48->VAR28);
            if (VAR17 < 0)
                return VAR17;
            *VAR4 = 1;
        }
    }
    assert(VAR15->VAR8[0] || !*VAR4);
    return FUN9(VAR16, VAR9);
}