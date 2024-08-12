static int FUN1(void *VAR1, VAR2 *VAR3, int VAR4, int VAR5, UID VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR1;
    VAR9->VAR10 = VAR11;
    switch (VAR4)
    {
    case 0x3F01:
        VAR9->VAR12 = FUN2(VAR3);
        if (VAR9->VAR12 >= VAR13 / sizeof(VAR14))
            return VAR15;
        VAR9->VAR16 = FUN3(VAR9->VAR12 * sizeof(VAR14));
        if (!VAR9->VAR16)
            return FUN4(VAR17);
        FUN5(VAR3, 4);
        FUN6(VAR3, (VAR18 *)VAR9->VAR16, VAR9->VAR12 * sizeof(VAR14));
        break;
    case 0x3004:
        FUN6(VAR3, VAR9->VAR19, 16);
        break;
    case 0x3006:
        VAR9->VAR20 = FUN2(VAR3);
        break;
    case 0x3201:
        FUN6(VAR3, VAR9->VAR21, 16);
        break;
    case 0x3203:
        VAR9->VAR22 = FUN2(VAR3);
        break;
    case 0x3202:
        VAR9->VAR23 = FUN2(VAR3);
        break;
    case 0x320C:
        VAR9->VAR24 = FUN7(VAR3);
        break;
    case 0x320E:
        VAR9->VAR25.VAR26 = FUN2(VAR3);
        VAR9->VAR25.VAR27 = FUN2(VAR3);
        break;
    case 0x3301:
        VAR9->VAR28 = FUN2(VAR3);
        break;
    case 0x3302:
        VAR9->VAR29 = FUN2(VAR3);
        break;
    case 0x3308:
        VAR9->VAR30 = FUN2(VAR3);
        break;
    case 0x3D03:
        VAR9->VAR31.VAR26 = FUN2(VAR3);
        VAR9->VAR31.VAR27 = FUN2(VAR3);
        break;
    case 0x3D06:
        FUN6(VAR3, VAR9->VAR21, 16);
        break;
    case 0x3D07:
        VAR9->VAR32 = FUN2(VAR3);
        break;
    case 0x3D01:
        VAR9->VAR33 = FUN2(VAR3);
        break;
    case 0x3401:
        FUN8(VAR3, VAR9);
        break;
    default:
        if (FUN9(VAR6, VAR34))
        {
            VAR9->VAR35 = FUN3(VAR5 + VAR36);
            if (!VAR9->VAR35)
                return FUN4(VAR17);
            VAR9->VAR37 = VAR5;
            FUN6(VAR3, VAR9->VAR35, VAR5);
        }
        break;
    }
    return 0;