static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    uint32_t VAR5;
    bool VAR6 = false;
    if (FUN2(VAR2->VAR7, &VAR5, sizeof(VAR5), VAR4) < 0)
    {
        FUN3(VAR4, "");
        return -VAR8;
    }
    FUN4();
    FUN5(&VAR5);
    if (VAR5 & VAR9)
    {
        FUN6();
        VAR6 = true;
        VAR5 &= ~VAR9;
    }
    if (VAR5 & VAR10)
    {
        FUN7();
        VAR2->VAR11 = true;
        VAR5 &= ~VAR10;
    }
    if (VAR5 != 0)
    {
        FUN8(VAR4, "" VAR12 "", VAR5);
        return -VAR8;
    }
    while (1)
    {
        int VAR13;
        uint32_t VAR14, VAR15;
        uint64_t VAR16;
        if (FUN2(VAR2->VAR7, &VAR16, sizeof(VAR16), VAR4) < 0)
        {
            FUN3(VAR4, "");
            return -VAR17;
        }
        VAR16 = FUN9(VAR16);
        FUN10(VAR16);
        if (VAR16 != VAR18)
        {
            FUN8(VAR4, "");
            return -VAR17;
        }
        if (FUN2(VAR2->VAR7, &VAR14, sizeof(VAR14), VAR4) < 0)
        {
            FUN3(VAR4, "");
            return -VAR17;
        }
        VAR14 = FUN11(VAR14);
        if (FUN2(VAR2->VAR7, &VAR15, sizeof(VAR15), VAR4) < 0)
        {
            FUN3(VAR4, "");
            return -VAR17;
        }
        VAR15 = FUN11(VAR15);
        FUN12(VAR14, FUN13(VAR14));
        if (VAR2->VAR19 && VAR2->VAR7 == (VAR20 *)VAR2->VAR21)
        {
            VAR20 *VAR22;
            if (!VAR6)
            {
                FUN8(VAR4, "" VAR12, VAR14);
                return -VAR17;
            }
            switch (VAR14)
            {
            case VAR23:
                VAR22 = FUN14(VAR2, VAR15, VAR4);
                if (!VAR22)
                {
                    return -VAR8;
                }
                FUN15(FUN16(VAR2->VAR7));
                VAR2->VAR7 = FUN17(VAR22);
                break;
            case VAR24:
                FUN8(VAR4, "", VAR14);
                return -VAR17;
            default:
                if (FUN18(VAR2->VAR7, VAR15, VAR4) < 0)
                {
                    return -VAR8;
                }
                VAR13 = FUN19(VAR2->VAR7, VAR25, VAR14, VAR4, "" VAR12 "", VAR14);
                if (VAR13 < 0)
                {
                    return VAR13;
                }
                if (VAR14 == VAR26)
                {
                    return 1;
                }
                break;
            }
        }
        else if (VAR6)
        {
            switch (VAR14)
            {
            case VAR27:
                VAR13 = FUN20(VAR2, VAR15, VAR4);
                if (VAR13 < 0)
                {
                    return VAR13;
                }
                break;
            case VAR26:
                FUN21(VAR2->VAR7, VAR28, VAR14, NULL);
                return 1;
            case VAR24:
                return FUN22(VAR2, VAR15, VAR4);
            case VAR23:
                if (FUN18(VAR2->VAR7, VAR15, VAR4) < 0)
                {
                    return -VAR8;
                }
                if (VAR2->VAR19)
                {
                    VAR13 = FUN19(VAR2->VAR7, VAR29, VAR14, VAR4, "");
                }
                else
                {
                    VAR13 = FUN19(VAR2->VAR7, VAR30, VAR14, VAR4, "");
                }
                if (VAR13 < 0)
                {
                    return VAR13;
                }
                break;
            default:
                if (FUN18(VAR2->VAR7, VAR15, VAR4) < 0)
                {
                    return -VAR8;
                }
                VAR13 = FUN19(VAR2->VAR7, VAR31, VAR14, VAR4, "" VAR12 "", VAR14, FUN13(VAR14));
                if (VAR13 < 0)
                {
                    return VAR13;
                }
                break;
            }
        }
        else
        {
            switch (VAR14)
            {
            case VAR24:
                return FUN22(VAR2, VAR15, VAR4);
            default:
                FUN8(VAR4, "" VAR12 "", VAR14, FUN13(VAR14));
                return -VAR17;
            }
        }
    }
}