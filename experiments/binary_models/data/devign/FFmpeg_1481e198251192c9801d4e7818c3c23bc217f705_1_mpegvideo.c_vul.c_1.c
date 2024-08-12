int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6, *VAR7 = VAR3->VAR6;
    if (VAR2 == VAR3 || !VAR7->VAR8)
        return 0;
    if (!VAR5->VAR8)
    {
        memcpy(VAR5, VAR7, sizeof(VAR4));
        VAR5->VAR9 = VAR2;
        VAR5->VAR10 += VAR11;
        VAR5->VAR12 += VAR11;
        VAR5->VAR13 = NULL;
        VAR5->VAR14 = VAR5->VAR15 = 0;
        FUN2(VAR5);
    }
    if (VAR5->VAR16 != VAR7->VAR16 || VAR5->VAR17 != VAR7->VAR17 || VAR5->VAR18)
    {
        int VAR19;
        VAR5->VAR18 = 0;
        VAR5->VAR16 = VAR7->VAR16;
        VAR5->VAR17 = VAR7->VAR17;
        if ((VAR19 = FUN3(VAR5)) < 0)
            return VAR19;
    }
    VAR5->VAR9->VAR20 = VAR7->VAR9->VAR20;
    VAR5->VAR9->VAR21 = VAR7->VAR9->VAR21;
    VAR5->VAR9->VAR17 = VAR7->VAR9->VAR17;
    VAR5->VAR9->VAR16 = VAR7->VAR9->VAR16;
    VAR5->VAR22 = VAR7->VAR22;
    VAR5->VAR23 = VAR7->VAR23;
    VAR5->VAR24 = VAR7->VAR24;
    memcpy(VAR5->VAR25, VAR7->VAR25, VAR7->VAR26 * sizeof(VAR27));
    memcpy(&VAR5->VAR28, &VAR7->VAR28, (char *)&VAR7->VAR29 - (char *)&VAR7->VAR28);
    for (VAR30 = 0; VAR30 < VAR5->VAR26; VAR30++)
        VAR5->VAR25[VAR30].VAR31.VAR32 = VAR5->VAR25[VAR30].VAR31.VAR33;
    VAR5->VAR29 = FUN4(VAR7->VAR29, VAR5, VAR7);
    VAR5->VAR34 = FUN4(VAR7->VAR34, VAR5, VAR7);
    VAR5->VAR35 = FUN4(VAR7->VAR35, VAR5, VAR7);
    VAR5->VAR36 = VAR7->VAR36;
    VAR5->VAR37 = VAR7->VAR37;
    memcpy(&VAR5->VAR38, &VAR7->VAR38, (char *)&VAR7->VAR39 - (char *)&VAR7->VAR38);
    VAR5->VAR40 = VAR7->VAR40;
    VAR5->VAR41 = VAR7->VAR41;
    VAR5->VAR42 = VAR7->VAR42;
    VAR5->VAR43 = VAR7->VAR43;
    if (VAR7->VAR13)
    {
        if (VAR7->VAR14 + VAR44 > VAR5->VAR15)
            FUN5(&VAR5->VAR13, &VAR5->VAR15, VAR7->VAR15);
        VAR5->VAR14 = VAR7->VAR14;
        memcpy(VAR5->VAR13, VAR7->VAR13, VAR7->VAR14);
        memset(VAR5->VAR13 + VAR5->VAR14, 0, VAR44);
    }
    memcpy(&VAR5->VAR45, &VAR7->VAR45, (char *)&VAR7->VAR46 - (char *)&VAR7->VAR45);
    if (!VAR7->VAR47)
    {
        VAR5->VAR48 = VAR7->VAR49;
        if (VAR7->VAR34)
            VAR5->VAR50[VAR7->VAR49] = VAR7->VAR34->VAR31.VAR51;
        if (VAR7->VAR49 != VAR52)
        {
            VAR5->VAR53 = VAR7->VAR49;
        }
    }
    return 0;