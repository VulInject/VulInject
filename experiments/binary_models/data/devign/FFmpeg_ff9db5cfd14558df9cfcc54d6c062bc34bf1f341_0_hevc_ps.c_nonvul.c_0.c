static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = &VAR7->VAR9;
    int VAR10;
    FUN2(VAR4, VAR11, "");
    VAR10 = FUN3(VAR2);
    if (VAR10)
    {
        uint8_t VAR12 = FUN4(VAR2, 8);
        if (VAR12 < FUN5(VAR13))
            VAR9->VAR14 = VAR13[VAR12];
        else if (VAR12 == 255)
        {
            VAR9->VAR14.VAR15 = FUN4(VAR2, 16);
            VAR9->VAR14.VAR16 = FUN4(VAR2, 16);
        }
        else
            FUN2(VAR4, VAR17, "", VAR12);
    }
    VAR9->VAR18 = FUN3(VAR2);
    if (VAR9->VAR18)
        VAR9->VAR19 = FUN3(VAR2);
    VAR9->VAR20 = FUN3(VAR2);
    if (VAR9->VAR20)
    {
        VAR9->VAR21 = FUN4(VAR2, 3);
        VAR9->VAR22 = FUN3(VAR2);
        VAR9->VAR23 = FUN3(VAR2);
        if (VAR9->VAR22 && VAR7->VAR24 == VAR25)
            VAR7->VAR24 = VAR26;
        if (VAR9->VAR23)
        {
            VAR9->VAR27 = FUN4(VAR2, 8);
            VAR9->VAR28 = FUN4(VAR2, 8);
            VAR9->VAR29 = FUN4(VAR2, 8);
            if (!FUN6(VAR9->VAR27))
                VAR9->VAR27 = VAR30;
            if (!FUN7(VAR9->VAR28))
                VAR9->VAR28 = VAR31;
            if (!FUN8(VAR9->VAR29))
                VAR9->VAR29 = VAR32;
        }
    }
    VAR9->VAR33 = FUN3(VAR2);
    if (VAR9->VAR33)
    {
        VAR9->VAR34 = FUN9(VAR2);
        VAR9->VAR35 = FUN9(VAR2);
    }
    VAR9->VAR36 = FUN3(VAR2);
    VAR9->VAR37 = FUN3(VAR2);
    VAR9->VAR38 = FUN3(VAR2);
    VAR9->VAR39 = FUN3(VAR2);
    if (VAR9->VAR39)
    {
        VAR9->VAR40.VAR41 = FUN9(VAR2) * 2;
        VAR9->VAR40.VAR42 = FUN9(VAR2) * 2;
        VAR9->VAR40.VAR43 = FUN9(VAR2) * 2;
        VAR9->VAR40.VAR44 = FUN9(VAR2) * 2;
        if (VAR5 && VAR4->VAR45 & VAR46)
        {
            FUN2(VAR4, VAR11, ""
                                        "",
                   VAR9->VAR40.VAR41, VAR9->VAR40.VAR42, VAR9->VAR40.VAR43, VAR9->VAR40.VAR44);
            VAR9->VAR40.VAR41 = VAR9->VAR40.VAR42 = VAR9->VAR40.VAR43 = VAR9->VAR40.VAR44 = 0;
        }
    }
    VAR9->VAR47 = FUN3(VAR2);
    if (VAR9->VAR47)
    {
        VAR9->VAR48 = FUN10(VAR2, 32);
        VAR9->VAR49 = FUN10(VAR2, 32);
        VAR9->VAR50 = FUN3(VAR2);
        if (VAR9->VAR50)
            VAR9->VAR51 = FUN9(VAR2);
        VAR9->VAR52 = FUN3(VAR2);
        if (VAR9->VAR52)
            FUN11(VAR2, 1, VAR7->VAR53);
    }
    VAR9->VAR54 = FUN3(VAR2);
    if (VAR9->VAR54)
    {
        VAR9->VAR55 = FUN3(VAR2);
        VAR9->VAR56 = FUN3(VAR2);
        VAR9->VAR57 = FUN3(VAR2);
        VAR9->VAR58 = FUN9(VAR2);
        VAR9->VAR59 = FUN9(VAR2);
        VAR9->VAR60 = FUN9(VAR2);
        VAR9->VAR61 = FUN9(VAR2);
        VAR9->VAR62 = FUN9(VAR2);
    }
}