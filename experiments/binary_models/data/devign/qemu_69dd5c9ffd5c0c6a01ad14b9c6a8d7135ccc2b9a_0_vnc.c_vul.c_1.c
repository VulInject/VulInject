static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    int VAR6;
    uint16_t VAR7;
    switch (VAR4[0])
    {
    case 0:
        if (VAR5 == 1)
            return 20;
        FUN2(VAR2, FUN3(VAR4, 4), FUN3(VAR4, 5), FUN3(VAR4, 6), FUN3(VAR4, 7), FUN4(VAR4, 8), FUN4(VAR4, 10), FUN4(VAR4, 12), FUN3(VAR4, 14), FUN3(VAR4, 15), FUN3(VAR4, 16));
        break;
    case 2:
        if (VAR5 == 1)
            return 4;
        if (VAR5 == 4)
            return 4 + (FUN4(VAR4, 2) * 4);
        VAR7 = FUN4(VAR4, 2);
        for (VAR6 = 0; VAR6 < VAR7; VAR6++)
        {
            int32_t VAR8 = FUN5(VAR4, 4 + (VAR6 * 4));
            memcpy(VAR4 + 4 + (VAR6 * 4), &VAR8, sizeof(VAR8));
        }
        FUN6(VAR2, (VAR9 *)(VAR4 + 4), VAR7);
        break;
    case 3:
        if (VAR5 == 1)
            return 10;
        FUN7(VAR2, FUN3(VAR4, 1), FUN4(VAR4, 2), FUN4(VAR4, 4), FUN4(VAR4, 6), FUN4(VAR4, 8));
        break;
    case 4:
        if (VAR5 == 1)
            return 8;
        FUN8(VAR2, FUN3(VAR4, 1), FUN9(VAR4, 4));
        break;
    case 5:
        if (VAR5 == 1)
            return 6;
        FUN10(VAR2, FUN3(VAR4, 1), FUN4(VAR4, 2), FUN4(VAR4, 4));
        break;
    case 6:
        if (VAR5 == 1)
            return 8;
        if (VAR5 == 8)
        {
            uint32_t VAR10 = FUN9(VAR4, 4);
            if (VAR10 > 0)
                return 8 + VAR10;
        }
        FUN11(VAR2, FUN9(VAR4, 4), VAR4 + 8);
        break;
    case 255:
        if (VAR5 == 1)
            return 2;
        switch (FUN3(VAR4, 1))
        {
        case 0:
            if (VAR5 == 2)
                return 12;
            FUN12(VAR2, FUN4(VAR4, 2), FUN9(VAR4, 4), FUN9(VAR4, 8));
            break;
        case 1:
            if (VAR5 == 2)
                return 4;
            switch (FUN4(VAR4, 2))
            {
            case 0:
                FUN13(VAR2);
                break;
            case 1:
                FUN14(VAR2);
                break;
            case 2:
                if (VAR5 == 4)
                    return 10;
                switch (FUN3(VAR4, 4))
                {
                case 0:
                    VAR2->VAR11.VAR12 = VAR13;
                    break;
                case 1:
                    VAR2->VAR11.VAR12 = VAR14;
                    break;
                case 2:
                    VAR2->VAR11.VAR12 = VAR15;
                    break;
                case 3:
                    VAR2->VAR11.VAR12 = VAR16;
                    break;
                case 4:
                    VAR2->VAR11.VAR12 = VAR17;
                    break;
                case 5:
                    VAR2->VAR11.VAR12 = VAR18;
                    break;
                default:
                    FUN15("", FUN3(VAR4, 4));
                    FUN16(VAR2);
                    break;
                }
                VAR2->VAR11.VAR19 = FUN3(VAR4, 5);
                if (VAR2->VAR11.VAR19 != 1 && VAR2->VAR11.VAR19 != 2)
                {
                    FUN15("", FUN3(VAR4, 5));
                    FUN16(VAR2);
                    break;
                }
                VAR2->VAR11.VAR20 = FUN9(VAR4, 6);
                break;
            default:
                FUN15("", FUN3(VAR4, 4));
                FUN16(VAR2);
                break;
            }
            break;
        default:
            FUN15("", FUN4(VAR4, 0));
            FUN16(VAR2);
            break;
        }
        break;
    default:
        FUN15("", VAR4[0]);
        FUN16(VAR2);
        break;
    }
    FUN17(VAR2, VAR21, 1);
    return 0;
}