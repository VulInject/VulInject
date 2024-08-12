static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5, hwaddr VAR6, bool VAR7, VAR8 *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VTDContextEntry VAR13;
    uint8_t VAR14 = FUN2(VAR4);
    VAR15 *VAR16 = &VAR2->VAR17;
    uint64_t VAR18, VAR19;
    uint32_t VAR20;
    uint16_t VAR21 = FUN3(VAR14, VAR5);
    int VAR22;
    bool VAR23 = false;
    bool VAR24 = true;
    bool VAR25 = true;
    VAR26 *VAR27;
    if (FUN4(VAR6))
    {
        if (VAR7)
        {
            FUN5(VAR28, ""
                             "" VAR29,
                        VAR6);
            VAR9->VAR30 = VAR6 & VAR31;
            VAR9->VAR32 = VAR6 & VAR31;
            VAR9->VAR33 = ~VAR31;
            VAR9->VAR34 = VAR35;
            return;
        }
        else
        {
            FUN5(VAR36, ""
                                 "" VAR29,
                        VAR6);
            FUN6(VAR11, VAR21, VAR6, VAR37, VAR7);
            return;
        }
    }
    VAR27 = FUN7(VAR11, VAR21, VAR6);
    if (VAR27)
    {
        FUN5(VAR38, "" VAR39 "" VAR29 "" VAR29 "" VAR39, VAR21, VAR6, VAR27->VAR18, VAR27->VAR40);
        VAR18 = VAR27->VAR18;
        VAR24 = VAR27->VAR41;
        VAR25 = VAR27->VAR42;
        VAR19 = VAR27->VAR43;
        goto VAR44;
    }
    if (VAR16->VAR45 == VAR11->VAR45)
    {
        FUN5(VAR38, ""
                           "" VAR29 "" VAR29 "" VAR46 "",
                    VAR14, VAR5, VAR16->VAR47.VAR48, VAR16->VAR47.VAR49, VAR16->VAR45);
        VAR13 = VAR16->VAR47;
        VAR23 = VAR13.VAR49 & VAR50;
    }
    else
    {
        VAR22 = FUN8(VAR11, VAR14, VAR5, &VAR13);
        VAR23 = VAR13.VAR49 & VAR50;
        if (VAR22)
        {
            VAR22 = -VAR22;
            if (VAR23 && FUN9(VAR22))
            {
                FUN5(VAR51, ""
                                  ""
                                  "");
            }
            else
            {
                FUN6(VAR11, VAR21, VAR6, VAR22, VAR7);
            }
            return;
        }
        FUN5(VAR38, ""
                           "" VAR29 "" VAR29 "" VAR46 "" VAR46 "",
                    VAR14, VAR5, VAR13.VAR48, VAR13.VAR49, VAR16->VAR45, VAR11->VAR45);
        VAR16->VAR47 = VAR13;
        VAR16->VAR45 = VAR11->VAR45;
    }
    VAR22 = FUN10(&VAR13, VAR6, VAR7, &VAR18, &VAR20, &VAR24, &VAR25);
    if (VAR22)
    {
        VAR22 = -VAR22;
        if (VAR23 && FUN9(VAR22))
        {
            FUN5(VAR51, ""
                              "");
        }
        else
        {
            FUN6(VAR11, VAR21, VAR6, VAR22, VAR7);
        }
        return;
    }
    VAR19 = FUN11(VAR20);
    FUN12(VAR11, VAR21, FUN13(VAR13.VAR48), VAR6, VAR18, VAR24, VAR25, VAR20);
VAR44:
    VAR9->VAR30 = VAR6 & VAR19;
    VAR9->VAR32 = FUN14(VAR18) & VAR19;
    VAR9->VAR33 = ~VAR19;
    VAR9->VAR34 = (VAR25 ? 2 : 0) + (VAR24 ? 1 : 0);
}