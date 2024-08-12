int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    int VAR4;
    int VAR5;
    VAR6 *VAR7 = VAR2->VAR8, *VAR9 = VAR3->VAR8;
    if (VAR2 == VAR3)
        return 0;
    if (!VAR7->VAR10)
    {
        memcpy(VAR7, VAR9, sizeof(VAR6));
        VAR7->VAR11 = VAR2;
        VAR7->VAR12 = NULL;
        VAR7->VAR13 = VAR7->VAR14 = 0;
        if (VAR9->VAR10)
        {
            VAR7->VAR15 += VAR16;
            VAR7->VAR17 += VAR16;
            if ((VAR5 = FUN2(VAR7)) < 0)
                return VAR5;
        }
    }
    if (VAR7->VAR18 != VAR9->VAR18 || VAR7->VAR19 != VAR9->VAR19 || VAR7->VAR20)
    {
        VAR7->VAR20 = 0;
        VAR7->VAR18 = VAR9->VAR18;
        VAR7->VAR19 = VAR9->VAR19;
        if ((VAR5 = FUN3(VAR7)) < 0)
            return VAR5;
    }
    VAR7->VAR11->VAR21 = VAR9->VAR11->VAR21;
    VAR7->VAR11->VAR22 = VAR9->VAR11->VAR22;
    VAR7->VAR11->VAR19 = VAR9->VAR11->VAR19;
    VAR7->VAR11->VAR18 = VAR9->VAR11->VAR18;
    VAR7->VAR23 = VAR9->VAR23;
    VAR7->VAR24 = VAR9->VAR24;
    VAR7->VAR25 = VAR9->VAR25;
    memcpy(VAR7->VAR26, VAR9->VAR26, VAR9->VAR27 * sizeof(VAR28));
    memcpy(&VAR7->VAR29, &VAR9->VAR29, (char *)&VAR9->VAR30 - (char *)&VAR9->VAR29);
    for (VAR4 = 0; VAR4 < VAR7->VAR27; VAR4++)
        VAR7->VAR26[VAR4].VAR31.VAR32 = VAR7->VAR26[VAR4].VAR31.VAR33;
    VAR7->VAR30 = FUN4(VAR9->VAR30, VAR7, VAR9);
    VAR7->VAR34 = FUN4(VAR9->VAR34, VAR7, VAR9);
    VAR7->VAR35 = FUN4(VAR9->VAR35, VAR7, VAR9);
    VAR7->VAR36 = VAR9->VAR36;
    VAR7->VAR37 = VAR9->VAR37;
    VAR7->VAR38 = VAR9->VAR38;
    memcpy(&VAR7->VAR39, &VAR9->VAR39, (char *)&VAR9->VAR40 - (char *)&VAR9->VAR39);
    VAR7->VAR41 = VAR9->VAR41;
    VAR7->VAR42 = VAR9->VAR42;
    VAR7->VAR43 = VAR9->VAR43;
    VAR7->VAR44 = VAR9->VAR44;
    if (VAR9->VAR12)
    {
        if (VAR9->VAR13 + VAR45 > VAR7->VAR14)
            FUN5(&VAR7->VAR12, &VAR7->VAR14, VAR9->VAR14);
        VAR7->VAR13 = VAR9->VAR13;
        memcpy(VAR7->VAR12, VAR9->VAR12, VAR9->VAR13);
        memset(VAR7->VAR12 + VAR7->VAR13, 0, VAR45);
    }
    memcpy(&VAR7->VAR46, &VAR9->VAR46, (char *)&VAR9->VAR47 - (char *)&VAR9->VAR46);
    if (!VAR9->VAR48)
    {
        VAR7->VAR49 = VAR9->VAR50;
        if (VAR9->VAR34)
            VAR7->VAR51[VAR9->VAR50] = VAR9->VAR34->VAR31.VAR52;
        if (VAR9->VAR50 != VAR53)
        {
            VAR7->VAR54 = VAR9->VAR50;
        }
    }
    return 0;
}