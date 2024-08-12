static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR5;
    int VAR6 = VAR4->VAR6;
    VAR7 *VAR8 = VAR4->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = VAR2->VAR15[VAR5];
    VAR16 *VAR17 = VAR14->VAR12;
    int64_t VAR18, VAR19;
    VAR20 *VAR21;
    int VAR22;
    const int VAR23 = VAR14->VAR24->VAR25 == VAR26 && (VAR4->VAR27 & VAR28);
    VAR22 = FUN2(VAR11->VAR22, 90000, VAR29);
    VAR18 = VAR4->VAR18;
    VAR19 = VAR4->VAR19;
    if (VAR11->VAR30 == VAR31)
    {
        if (VAR19 == VAR31 || (VAR19 < VAR22 && VAR2->VAR32) || VAR11->VAR33)
        {
            if (VAR19 != VAR31)
                VAR11->VAR22 += FUN2(-VAR19, VAR29, 90000);
            VAR11->VAR30 = 0;
        }
        else
        {
            VAR11->VAR30 = VAR19 - VAR22;
            VAR11->VAR22 = 0;
        }
        VAR22 = FUN2(VAR11->VAR22, 90000, VAR29);
        FUN3(VAR2, VAR34, "" VAR35 "" VAR35 "", VAR11->VAR30, VAR19 + VAR22);
    }
    if (VAR19 != VAR31)
        VAR19 += VAR22;
    if (VAR18 != VAR31)
        VAR18 += VAR22;
    FUN3(VAR2, VAR36, "", VAR19 / 90000.0, VAR18 / 90000.0, VAR4->VAR27, VAR4->VAR5, VAR18 != VAR31);
    if (!VAR17->VAR37)
        VAR17->VAR38 = &VAR17->VAR37;
    *VAR17->VAR38 = VAR21 = FUN4(sizeof(VAR20));
    VAR21->VAR18 = VAR18;
    VAR21->VAR19 = VAR19;
    VAR21->VAR39 = VAR21->VAR6 = VAR6;
    if (!VAR17->VAR40)
        VAR17->VAR40 = VAR21;
    VAR17->VAR38 = &VAR21->VAR41;
    if (FUN5(VAR17->VAR42, FUN6(VAR17->VAR42) + VAR6) < 0)
        return -1;
    if (VAR11->VAR33)
    {
        if (VAR23 && (VAR11->VAR43 == 0 || (VAR18 - VAR17->VAR44 >= 36000)))
        {
            VAR17->VAR45 = FUN6(VAR17->VAR42);
            VAR17->VAR46 = 1;
            VAR17->VAR44 = VAR18;
        }
    }
    FUN7(VAR17->VAR42, VAR8, VAR6, NULL);
    for (;;)
    {
        int VAR47 = FUN8(VAR2, 0);
        if (VAR47 <= 0)
            return VAR47;
    }