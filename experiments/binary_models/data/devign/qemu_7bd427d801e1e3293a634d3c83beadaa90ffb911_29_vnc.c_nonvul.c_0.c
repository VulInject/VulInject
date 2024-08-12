static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    int VAR6;
    uint16_t VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    if (VAR4[0] > 3)
    {
        VAR9->VAR10 = VAR11;
        if (!FUN2(VAR9->VAR12, FUN3(VAR13) + VAR9->VAR10))
            FUN4(VAR9->VAR12, FUN3(VAR13) + VAR9->VAR10);
    }
    switch (VAR4[0])
    {
    case VAR14:
        if (VAR5 == 1)
            return 20;
        FUN5(VAR2, FUN6(VAR4, 4), FUN6(VAR4, 5), FUN6(VAR4, 6), FUN6(VAR4, 7), FUN7(VAR4, 8), FUN7(VAR4, 10), FUN7(VAR4, 12), FUN6(VAR4, 14), FUN6(VAR4, 15), FUN6(VAR4, 16));
        break;
    case VAR15:
        if (VAR5 == 1)
            return 4;
        if (VAR5 == 4)
        {
            VAR7 = FUN7(VAR4, 2);
            if (VAR7 > 0)
                return 4 + (VAR7 * 4);
        }
        else
            VAR7 = FUN7(VAR4, 2);
        for (VAR6 = 0; VAR6 < VAR7; VAR6++)
        {
            int32_t VAR16 = FUN8(VAR4, 4 + (VAR6 * 4));
            memcpy(VAR4 + 4 + (VAR6 * 4), &VAR16, sizeof(VAR16));
        }
        FUN9(VAR2, (VAR17 *)(VAR4 + 4), VAR7);
        break;
    case VAR18:
        if (VAR5 == 1)
            return 10;
        FUN10(VAR2, FUN6(VAR4, 1), FUN7(VAR4, 2), FUN7(VAR4, 4), FUN7(VAR4, 6), FUN7(VAR4, 8));
        break;
    case VAR19:
        if (VAR5 == 1)
            return 8;
        FUN11(VAR2, FUN6(VAR4, 1), FUN12(VAR4, 4));
        break;
    case VAR20:
        if (VAR5 == 1)
            return 6;
        FUN13(VAR2, FUN6(VAR4, 1), FUN7(VAR4, 2), FUN7(VAR4, 4));
        break;
    case VAR21:
        if (VAR5 == 1)
            return 8;
        if (VAR5 == 8)
        {
            uint32_t VAR22 = FUN12(VAR4, 4);
            if (VAR22 > 0)
                return 8 + VAR22;
        }
        FUN14(VAR2, FUN12(VAR4, 4), VAR4 + 8);
        break;
    case VAR23:
        if (VAR5 == 1)
            return 2;
        switch (FUN6(VAR4, 1))
        {
        case VAR24:
            if (VAR5 == 2)
                return 12;
            FUN15(VAR2, FUN7(VAR4, 2), FUN12(VAR4, 4), FUN12(VAR4, 8));
            break;
        case VAR25:
            if (VAR5 == 2)
                return 4;
            switch (FUN7(VAR4, 2))
            {
            case VAR26:
                FUN16(VAR2);
                break;
            case VAR27:
                FUN17(VAR2);
                break;
            case VAR28:
                if (VAR5 == 4)
                    return 10;
                switch (FUN6(VAR4, 4))
                {
                case 0:
                    VAR2->VAR29.VAR30 = VAR31;
                    break;
                case 1:
                    VAR2->VAR29.VAR30 = VAR32;
                    break;
                case 2:
                    VAR2->VAR29.VAR30 = VAR33;
                    break;
                case 3:
                    VAR2->VAR29.VAR30 = VAR34;
                    break;
                case 4:
                    VAR2->VAR29.VAR30 = VAR35;
                    break;
                case 5:
                    VAR2->VAR29.VAR30 = VAR36;
                    break;
                default:
                    FUN18("", FUN6(VAR4, 4));
                    FUN19(VAR2);
                    break;
                }
                VAR2->VAR29.VAR37 = FUN6(VAR4, 5);
                if (VAR2->VAR29.VAR37 != 1 && VAR2->VAR29.VAR37 != 2)
                {
                    FUN18("", FUN6(VAR4, 5));
                    FUN19(VAR2);
                    break;
                }
                VAR2->VAR29.VAR38 = FUN12(VAR4, 6);
                break;
            default:
                FUN18("", FUN6(VAR4, 4));
                FUN19(VAR2);
                break;
            }
            break;
        default:
            FUN18("", FUN7(VAR4, 0));
            FUN19(VAR2);
            break;
        }
        break;
    default:
        FUN18("", VAR4[0]);
        FUN19(VAR2);
        break;
    }
    FUN20(VAR2, VAR39, 1);
    return 0;
}