static int FUN1(VAR1 *VAR2, uint16_t VAR3, VAR4 **VAR5)
{
    uint32_t VAR6;
    bool VAR7 = false;
    bool VAR8 = false;
    if (FUN2(VAR2->VAR9, &VAR6, sizeof(VAR6), VAR5) < 0)
    {
        FUN3(VAR5, "");
        return -VAR10;
    }
    FUN4(&VAR6);
    FUN5(VAR6);
    if (VAR6 & VAR11)
    {
        VAR7 = true;
        VAR6 &= ~VAR11;
    }
    if (VAR6 & VAR12)
    {
        VAR8 = true;
        VAR6 &= ~VAR12;
    }
    if (VAR6 != 0)
    {
        FUN6(VAR5, "" VAR13 "", VAR6);
        return -VAR14;
    }
    while (1)
    {
        int VAR15;
        uint32_t VAR16, VAR17;
        uint64_t VAR18;
        if (FUN2(VAR2->VAR9, &VAR18, sizeof(VAR18), VAR5) < 0)
        {
            FUN3(VAR5, "");
            return -VAR14;
        }
        VAR18 = FUN7(VAR18);
        FUN8(VAR18);
        if (VAR18 != VAR19)
        {
            FUN6(VAR5, "");
            return -VAR14;
        }
        if (FUN2(VAR2->VAR9, &VAR16, sizeof(VAR16), VAR5) < 0)
        {
            FUN3(VAR5, "");
            return -VAR14;
        }
        VAR16 = FUN9(VAR16);
        VAR2->VAR20 = VAR16;
        if (FUN2(VAR2->VAR9, &VAR17, sizeof(VAR17), VAR5) < 0)
        {
            FUN3(VAR5, "");
            return -VAR14;
        }
        VAR17 = FUN9(VAR17);
        VAR2->VAR21 = VAR17;
        if (VAR17 > VAR22)
        {
            FUN6(VAR5, "" VAR23 "", VAR17, VAR22);
            return -VAR14;
        }
        FUN10(VAR16, FUN11(VAR16));
        if (VAR2->VAR24 && VAR2->VAR9 == (VAR25 *)VAR2->VAR26)
        {
            VAR25 *VAR27;
            if (!VAR7)
            {
                FUN6(VAR5, "" VAR13, VAR16);
                return -VAR14;
            }
            switch (VAR16)
            {
            case VAR28:
                if (VAR17)
                {
                    return FUN12(VAR2, true, VAR5);
                }
                VAR27 = FUN13(VAR2, VAR5);
                if (!VAR27)
                {
                    return -VAR10;
                }
                VAR15 = 0;
                FUN14(FUN15(VAR2->VAR9));
                VAR2->VAR9 = FUN16(VAR27);
                break;
            case VAR29:
                FUN6(VAR5, "", VAR16);
                return -VAR14;
            default:
                if (FUN17(VAR2->VAR9, VAR17, VAR5) < 0)
                {
                    return -VAR10;
                }
                VAR15 = FUN18(VAR2, VAR30, VAR5, "" VAR13 "", VAR16);
                if (VAR16 == VAR31)
                {
                    return 1;
                }
                break;
            }
        }
        else if (VAR7)
        {
            switch (VAR16)
            {
            case VAR32:
                if (VAR17)
                {
                    VAR15 = FUN12(VAR2, false, VAR5);
                }
                else
                {
                    VAR15 = FUN19(VAR2, VAR5);
                }
                break;
            case VAR31:
                FUN20(VAR2, VAR33, NULL);
                return 1;
            case VAR29:
                return FUN21(VAR2, VAR3, VAR8, VAR5);
            case VAR34:
            case VAR35:
                VAR15 = FUN22(VAR2, VAR3, VAR5);
                if (VAR15 == 1)
                {
                    assert(VAR16 == VAR35);
                    return 0;
                }
                break;
            case VAR28:
                if (VAR17)
                {
                    VAR15 = FUN12(VAR2, false, VAR5);
                }
                else if (VAR2->VAR24)
                {
                    VAR15 = FUN18(VAR2, VAR36, VAR5, "");
                }
                else
                {
                    VAR15 = FUN18(VAR2, VAR37, VAR5, "");
                }
                break;
            case VAR38:
                if (VAR17)
                {
                    VAR15 = FUN12(VAR2, false, VAR5);
                }
                else if (VAR2->VAR39)
                {
                    VAR15 = FUN18(VAR2, VAR36, VAR5, "");
                }
                else
                {
                    VAR15 = FUN20(VAR2, VAR33, VAR5);
                    VAR2->VAR39 = true;
                    VAR3 |= VAR40;
                }
                break;
            default:
                if (FUN17(VAR2->VAR9, VAR17, VAR5) < 0)
                {
                    return -VAR10;
                }
                VAR15 = FUN18(VAR2, VAR41, VAR5, "" VAR13 "", VAR16, FUN11(VAR16));
                break;
            }
        }
        else
        {
            switch (VAR16)
            {
            case VAR29:
                return FUN21(VAR2, VAR3, VAR8, VAR5);
            default:
                FUN6(VAR5, "" VAR13 "", VAR16, FUN11(VAR16));
                return -VAR14;
            }
        }
        if (VAR15 < 0)
        {
            return VAR15;
        }
    }
}