static bool FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5, hwaddr VAR6, bool VAR7, VAR8 *VAR9)
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
    uint8_t VAR26;
    VAR27 *VAR28;
    assert(!FUN4(VAR6));
    VAR28 = FUN5(VAR11, VAR21, VAR6);
    if (VAR28)
    {
        FUN6(VAR21, VAR6, VAR28->VAR18, VAR28->VAR29);
        VAR18 = VAR28->VAR18;
        VAR26 = VAR28->VAR26;
        VAR19 = VAR28->VAR30;
        goto VAR31;
    }
    if (VAR16->VAR32 == VAR11->VAR32)
    {
        FUN7(VAR14, VAR5, VAR16->VAR33.VAR34, VAR16->VAR33.VAR35, VAR16->VAR32);
        VAR13 = VAR16->VAR33;
        VAR23 = VAR13.VAR35 & VAR36;
    }
    else
    {
        VAR22 = FUN8(VAR11, VAR14, VAR5, &VAR13);
        VAR23 = VAR13.VAR35 & VAR36;
        if (VAR22)
        {
            VAR22 = -VAR22;
            if (VAR23 && FUN9(VAR22))
            {
                FUN10();
            }
            else
            {
                FUN11(VAR11, VAR21, VAR6, VAR22, VAR7);
            }
            goto VAR37;
        }
        FUN12(VAR14, VAR5, VAR13.VAR34, VAR13.VAR35, VAR16->VAR32, VAR11->VAR32);
        VAR16->VAR33 = VAR13;
        VAR16->VAR32 = VAR11->VAR32;
    }
    if (FUN13(&VAR13) == VAR38)
    {
        VAR9->VAR39 = VAR6 & VAR40;
        VAR9->VAR41 = VAR9->VAR39;
        VAR9->VAR42 = ~VAR40;
        VAR9->VAR43 = VAR44;
        FUN14(VAR21, VAR9->VAR39);
        FUN15(VAR11, VAR21);
        return true;
    }
    VAR22 = FUN16(&VAR13, VAR6, VAR7, &VAR18, &VAR20, &VAR24, &VAR25, VAR11->VAR45);
    if (VAR22)
    {
        VAR22 = -VAR22;
        if (VAR23 && FUN9(VAR22))
        {
            FUN10();
        }
        else
        {
            FUN11(VAR11, VAR21, VAR6, VAR22, VAR7);
        }
        goto VAR37;
    }
    VAR19 = FUN17(VAR20);
    VAR26 = FUN18(VAR24, VAR25);
    FUN19(VAR11, VAR21, FUN20(VAR13.VAR34), VAR6, VAR18, VAR26, VAR20);
VAR31:
    VAR9->VAR39 = VAR6 & VAR19;
    VAR9->VAR41 = FUN21(VAR18, VAR11->VAR45) & VAR19;
    VAR9->VAR42 = ~VAR19;
    VAR9->VAR43 = VAR26;
    return true;
VAR37:
    VAR9->VAR39 = 0;
    VAR9->VAR41 = 0;
    VAR9->VAR42 = 0;
    VAR9->VAR43 = VAR46;
    return false;
}