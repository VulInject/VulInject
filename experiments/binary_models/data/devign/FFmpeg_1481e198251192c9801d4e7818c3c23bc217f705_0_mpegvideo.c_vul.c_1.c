int FUN1(VAR1 *VAR2, const VAR1 *VAR3)
{
    int VAR4;
    VAR5 *VAR6 = VAR2->VAR7, *VAR8 = VAR3->VAR7;
    if (VAR2 == VAR3 || !VAR8->VAR9)
        return 0;
    if (!VAR6->VAR9)
    {
        memcpy(VAR6, VAR8, sizeof(VAR5));
        VAR6->VAR10 = VAR2;
        VAR6->VAR11 += VAR12;
        VAR6->VAR13 += VAR12;
        VAR6->VAR14 = NULL;
        VAR6->VAR15 = VAR6->VAR16 = 0;
        FUN2(VAR6);
    }
    if (VAR6->VAR17 != VAR8->VAR17 || VAR6->VAR18 != VAR8->VAR18 || VAR6->VAR19)
    {
        int VAR20;
        VAR6->VAR19 = 0;
        VAR6->VAR17 = VAR8->VAR17;
        VAR6->VAR18 = VAR8->VAR18;
        if ((VAR20 = FUN3(VAR6)) < 0)
            return VAR20;
    }
    VAR6->VAR10->VAR21 = VAR8->VAR10->VAR21;
    VAR6->VAR10->VAR22 = VAR8->VAR10->VAR22;
    VAR6->VAR10->VAR18 = VAR8->VAR10->VAR18;
    VAR6->VAR10->VAR17 = VAR8->VAR10->VAR17;
    VAR6->VAR23 = VAR8->VAR23;
    VAR6->VAR24 = VAR8->VAR24;
    VAR6->VAR25 = VAR8->VAR25;
    memcpy(VAR6->VAR26, VAR8->VAR26, VAR8->VAR27 * sizeof(VAR28));
    memcpy(&VAR6->VAR29, &VAR8->VAR29, (char *)&VAR8->VAR30 - (char *)&VAR8->VAR29);
    VAR6->VAR30 = FUN4(VAR8->VAR30, VAR6, VAR8);
    VAR6->VAR31 = FUN4(VAR8->VAR31, VAR6, VAR8);
    VAR6->VAR32 = FUN4(VAR8->VAR32, VAR6, VAR8);
    VAR6->VAR33 = VAR8->VAR33;
    VAR6->VAR34 = VAR8->VAR34;
    memcpy(&VAR6->VAR35, &VAR8->VAR35, (char *)&VAR8->VAR36 - (char *)&VAR8->VAR35);
    VAR6->VAR37 = VAR8->VAR37;
    VAR6->VAR38 = VAR8->VAR38;
    VAR6->VAR39 = VAR8->VAR39;
    VAR6->VAR40 = VAR8->VAR40;
    if (VAR8->VAR14)
    {
        if (VAR8->VAR15 + VAR41 > VAR6->VAR16)
            FUN5(&VAR6->VAR14, &VAR6->VAR16, VAR8->VAR16);
        VAR6->VAR15 = VAR8->VAR15;
        memcpy(VAR6->VAR14, VAR8->VAR14, VAR8->VAR15);
        memset(VAR6->VAR14 + VAR6->VAR15, 0, VAR41);
    }
    memcpy(&VAR6->VAR42, &VAR8->VAR42, (char *)&VAR8->VAR43 - (char *)&VAR8->VAR42);
    if (!VAR8->VAR44)
    {
        VAR6->VAR45 = VAR8->VAR46;
        if (VAR8->VAR31)
            VAR6->VAR47[VAR8->VAR46] = VAR8->VAR31->VAR48.VAR49;
        if (VAR8->VAR46 != VAR50)
        {
            VAR6->VAR51 = VAR8->VAR46;
        }
    }
    return 0;