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
        if (FUN2(VAR2->VAR9, &VAR17, sizeof(VAR17), VAR5) < 0)
        {
            FUN3(VAR5, "");
            return -VAR14;
        }
        VAR17 = FUN9(VAR17);
        FUN10(VAR16, FUN11(VAR16));
        if (VAR2->VAR20 && VAR2->VAR9 == (VAR21 *)VAR2->VAR22)
        {
            VAR21 *VAR23;
            if (!VAR7)
            {
                FUN6(VAR5, "" VAR13, VAR16);
                return -VAR14;
            }
            switch (VAR16)
            {
            case VAR24:
                VAR23 = FUN12(VAR2, VAR17, VAR5);
                if (!VAR23)
                {
                    return -VAR10;
                }
                VAR15 = 0;
                FUN13(FUN14(VAR2->VAR9));
                VAR2->VAR9 = FUN15(VAR23);
                break;
            case VAR25:
                FUN6(VAR5, "", VAR16);
                return -VAR14;
            default:
                if (FUN16(VAR2->VAR9, VAR17, VAR5) < 0)
                {
                    return -VAR10;
                }
                VAR15 = FUN17(VAR2->VAR9, VAR26, VAR16, VAR5, "" VAR13 "", VAR16);
                if (VAR16 == VAR27)
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
            case VAR28:
                VAR15 = FUN18(VAR2, VAR17, VAR5);
                break;
            case VAR27:
                FUN19(VAR2->VAR9, VAR29, VAR16, NULL);
                return 1;
            case VAR25:
                return FUN20(VAR2, VAR17, VAR3, VAR8, VAR5);
            case VAR30:
            case VAR31:
                VAR15 = FUN21(VAR2, VAR17, VAR16, VAR3, VAR5);
                if (VAR15 == 1)
                {
                    assert(VAR16 == VAR31);
                    return 0;
                }
                break;
            case VAR24:
                if (FUN16(VAR2->VAR9, VAR17, VAR5) < 0)
                {
                    return -VAR10;
                }
                if (VAR2->VAR20)
                {
                    VAR15 = FUN17(VAR2->VAR9, VAR32, VAR16, VAR5, "");
                }
                else
                {
                    VAR15 = FUN17(VAR2->VAR9, VAR33, VAR16, VAR5, "");
                }
                break;
            default:
                if (FUN16(VAR2->VAR9, VAR17, VAR5) < 0)
                {
                    return -VAR10;
                }
                VAR15 = FUN17(VAR2->VAR9, VAR34, VAR16, VAR5, "" VAR13 "", VAR16, FUN11(VAR16));
                break;
            }
        }
        else
        {
            switch (VAR16)
            {
            case VAR25:
                return FUN20(VAR2, VAR17, VAR3, VAR8, VAR5);
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