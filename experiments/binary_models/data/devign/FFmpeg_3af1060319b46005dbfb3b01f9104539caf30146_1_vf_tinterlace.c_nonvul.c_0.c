static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR2->VAR5->VAR7[0];
    const VAR8 *VAR9 = FUN2(VAR2->VAR10);
    VAR11 *VAR12 = VAR4->VAR13;
    int VAR14;
    VAR12->VAR15 = VAR9->VAR16;
    VAR2->VAR17 = VAR6->VAR17;
    VAR2->VAR18 = VAR12->VAR19 == VAR20 || VAR12->VAR19 == VAR21 || VAR12->VAR19 == VAR22 ? VAR6->VAR18 * 2 : VAR6->VAR18;
    if (VAR12->VAR19 == VAR20 || VAR12->VAR19 == VAR21 || VAR12->VAR19 == VAR22)
        VAR2->VAR23 = FUN3(VAR6->VAR23, FUN4(2, 1));
    if (VAR12->VAR19 == VAR21)
    {
        uint8_t VAR24[4] = {16, 128, 128, 16};
        int VAR14, VAR25;
        if (FUN5(VAR2->VAR10, VAR26))
            VAR24[0] = VAR24[3] = 0;
        VAR25 = FUN6(VAR12->VAR27, VAR12->VAR28, VAR2->VAR17, VAR2->VAR18, VAR2->VAR10, 16);
        if (VAR25 < 0)
            return VAR25;
        for (VAR14 = 0; VAR14 < 4 && VAR12->VAR27[VAR14]; VAR14++)
        {
            int VAR18 = VAR14 == 1 || VAR14 == 2 ? FUN7(VAR2->VAR18, VAR9->VAR16) : VAR2->VAR18;
            memset(VAR12->VAR27[VAR14], VAR24[VAR14], VAR12->VAR28[VAR14] * VAR18);
        }
    }
    if (VAR12->VAR29 & (VAR30 | VAR31) && !(VAR12->VAR19 == VAR32 || VAR12->VAR19 == VAR33))
    {
        FUN8(VAR4, VAR34, "", VAR12->VAR19);
        VAR12->VAR29 &= ~(VAR30 | VAR31);
    }
    VAR12->VAR35 = VAR6->VAR36;
    if (VAR12->VAR19 == VAR37)
    {
        VAR12->VAR35.VAR38 *= 2;
        VAR2->VAR39 = FUN3(VAR6->VAR39, (VAR40){2, 1});
        VAR2->VAR36 = FUN3(VAR6->VAR36, (VAR40){1, 2});
    }
    else if (VAR12->VAR19 == VAR22)
    {
        VAR2->VAR39 = VAR6->VAR39;
        VAR2->VAR36 = VAR6->VAR36;
    }
    else if (VAR12->VAR19 != VAR21)
    {
        VAR2->VAR39 = FUN3(VAR6->VAR39, (VAR40){1, 2});
        VAR2->VAR36 = FUN3(VAR6->VAR36, (VAR40){2, 1});
    }
    for (VAR14 = 0; VAR14 < FUN9(VAR41); VAR14++)
    {
        if (!FUN10(VAR41[VAR14], VAR2->VAR36))
            break;
    }
    if (VAR14 == FUN9(VAR41) || (VAR12->VAR29 & VAR42))
        VAR2->VAR36 = VAR12->VAR35;
    if (VAR12->VAR29 & VAR31)
    {
        VAR12->VAR43 = VAR44;
        if (VAR45)
            FUN11(VAR12);
    }
    else if (VAR12->VAR29 & VAR30)
    {
        VAR12->VAR43 = VAR46;
        if (VAR45)
            FUN11(VAR12);
    }
    FUN8(VAR4, VAR47, "", VAR12->VAR19, (VAR12->VAR29 & VAR31) ? "" : (VAR12->VAR29 & VAR30) ? ""
                                                                                                                                                                                           : "",
           VAR6->VAR18, VAR2->VAR18);
    return 0;
}