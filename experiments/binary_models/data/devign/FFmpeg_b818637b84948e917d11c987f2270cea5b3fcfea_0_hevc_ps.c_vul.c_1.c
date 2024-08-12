static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8 = &VAR2->VAR9->VAR8;
    int VAR10;
    FUN2(VAR2->VAR11, VAR12, "");
    VAR10 = FUN3(VAR8);
    if (VAR10)
    {
        uint8_t VAR13 = FUN4(VAR8, 8);
        if (VAR13 < FUN5(VAR14))
            VAR6->VAR15 = VAR14[VAR13];
        else if (VAR13 == 255)
        {
            VAR6->VAR15.VAR16 = FUN4(VAR8, 16);
            VAR6->VAR15.VAR17 = FUN4(VAR8, 16);
        }
        else
            FUN2(VAR2->VAR11, VAR18, "", VAR13);
    }
    VAR6->VAR19 = FUN3(VAR8);
    if (VAR6->VAR19)
        VAR6->VAR20 = FUN3(VAR8);
    VAR6->VAR21 = FUN3(VAR8);
    if (VAR6->VAR21)
    {
        VAR6->VAR22 = FUN4(VAR8, 3);
        VAR6->VAR23 = FUN3(VAR8);
        VAR6->VAR24 = FUN3(VAR8);
        if (VAR6->VAR23 && VAR4->VAR25 == VAR26)
            VAR4->VAR25 = VAR27;
        if (VAR6->VAR24)
        {
            VAR6->VAR28 = FUN4(VAR8, 8);
            VAR6->VAR29 = FUN4(VAR8, 8);
            VAR6->VAR30 = FUN4(VAR8, 8);
            if (VAR6->VAR28 >= VAR31)
                VAR6->VAR28 = VAR32;
            if (VAR6->VAR29 >= VAR33)
                VAR6->VAR29 = VAR34;
            if (VAR6->VAR30 >= VAR35)
                VAR6->VAR30 = VAR36;
        }
    }
    VAR6->VAR37 = FUN3(VAR8);
    if (VAR6->VAR37)
    {
        VAR6->VAR38 = FUN6(VAR8);
        VAR6->VAR39 = FUN6(VAR8);
    }
    VAR6->VAR40 = FUN3(VAR8);
    VAR6->VAR41 = FUN3(VAR8);
    VAR6->VAR42 = FUN3(VAR8);
    VAR6->VAR43 = FUN3(VAR8);
    if (VAR6->VAR43)
    {
        VAR6->VAR44.VAR45 = FUN6(VAR8) * 2;
        VAR6->VAR44.VAR46 = FUN6(VAR8) * 2;
        VAR6->VAR44.VAR47 = FUN6(VAR8) * 2;
        VAR6->VAR44.VAR48 = FUN6(VAR8) * 2;
        if (VAR2->VAR49 && VAR2->VAR11->VAR50 & VAR51)
        {
            FUN2(VAR2->VAR11, VAR12, ""
                                           "",
                   VAR6->VAR44.VAR45, VAR6->VAR44.VAR46, VAR6->VAR44.VAR47, VAR6->VAR44.VAR48);
            VAR6->VAR44.VAR45 = VAR6->VAR44.VAR46 = VAR6->VAR44.VAR47 = VAR6->VAR44.VAR48 = 0;
        }
    }
    VAR6->VAR52 = FUN3(VAR8);
    if (VAR6->VAR52)
    {
        VAR6->VAR53 = FUN4(VAR8, 32);
        VAR6->VAR54 = FUN4(VAR8, 32);
        VAR6->VAR55 = FUN3(VAR8);
        if (VAR6->VAR55)
            VAR6->VAR56 = FUN6(VAR8);
        VAR6->VAR57 = FUN3(VAR8);
        if (VAR6->VAR57)
            FUN7(VAR2, 1, VAR4->VAR58);
    }
    VAR6->VAR59 = FUN3(VAR8);
    if (VAR6->VAR59)
    {
        VAR6->VAR60 = FUN3(VAR8);
        VAR6->VAR61 = FUN3(VAR8);
        VAR6->VAR62 = FUN3(VAR8);
        VAR6->VAR63 = FUN6(VAR8);
        VAR6->VAR64 = FUN6(VAR8);
        VAR6->VAR65 = FUN6(VAR8);
        VAR6->VAR66 = FUN6(VAR8);
        VAR6->VAR67 = FUN6(VAR8);
    }
}