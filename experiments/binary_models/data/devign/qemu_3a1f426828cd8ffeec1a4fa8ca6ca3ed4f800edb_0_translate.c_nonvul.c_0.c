static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5;
    if (VAR4->VAR6 & 0x1)
    {
        VAR2->VAR7 = VAR4->VAR6;
        FUN2(VAR4, VAR8);
        VAR4->VAR9 = VAR10;
        return 2;
    }
    VAR5 = (VAR4->VAR11 >> 10) & 0x3f;
    if (VAR4->VAR12 & VAR13)
    {
        switch (VAR5 & 0x7)
        {
        case 0:
        case 4:
        case 5:
        case 6:
        case 7:
            if (VAR4->VAR12 & VAR14)
            {
                FUN2(VAR4, VAR15);
                VAR4->VAR9 = VAR10;
                return 2;
            }
            break;
        case 1:
        case 2:
        case 3:
            if (VAR4->VAR12 & VAR16)
            {
                FUN2(VAR4, VAR15);
                VAR4->VAR9 = VAR10;
                return 2;
            }
            break;
        }
    }
    switch (VAR5)
    {
    case VAR17:
    {
        int VAR18 = FUN3(FUN4(VAR4->VAR11));
        int VAR19 = FUN3(FUN5(VAR4->VAR11));
        int VAR20 = FUN3(FUN6(VAR4->VAR11));
        uint32_t VAR21 = 0;
        switch (VAR4->VAR11 & 0x1)
        {
        case VAR22:
            VAR21 = VAR23;
            break;
        case VAR24:
            VAR21 = VAR25;
            break;
        }
        FUN7(VAR4, VAR21, VAR18, VAR19, VAR20);
    }
    break;
    case VAR26:
    {
        int VAR18 = FUN3(FUN4(VAR4->VAR11));
        int VAR27 = FUN3(FUN8(VAR4->VAR11));
        int VAR28 = (VAR4->VAR11 >> 1) & 0x7;
        uint32_t VAR21 = 0;
        VAR28 = VAR28 == 0 ? 8 : VAR28;
        switch (VAR4->VAR11 & 0x1)
        {
        case VAR29:
            VAR21 = VAR30;
            break;
        case VAR31:
            VAR21 = VAR32;
            break;
        }
        FUN9(VAR4, VAR21, VAR18, VAR27, VAR28);
    }
    break;
    case VAR33:
        FUN10(VAR4);
        break;
    case VAR34:
    {
        int VAR18 = FUN3(FUN4(VAR4->VAR11));
        int VAR35 = 28;
        int16_t VAR36 = FUN11(VAR4->VAR11, 0, 7) << 2;
        FUN12(VAR4, VAR37, VAR18, VAR35, VAR36);
    }
    break;
    case VAR38:
        FUN13(VAR4, VAR39);
        if (VAR4->VAR11 & 1)
        {
            FUN2(VAR4, VAR15);
        }
        else
        {
            int VAR40 = FUN4(VAR4->VAR11);
            int VAR41 = FUN6(VAR4->VAR11);
            int VAR42 = FUN5(VAR4->VAR11);
            int VAR18, VAR27, VAR43, VAR44;
            static const int VAR45[] = {5, 5, 6, 4, 4, 4, 4, 4};
            static const int VAR46[] = {6, 7, 7, 21, 22, 5, 6, 7};
            static const int VAR47[] = {0, 17, 2, 3, 16, 18, 19, 20};
            VAR18 = VAR45[VAR40];
            VAR43 = VAR46[VAR40];
            VAR27 = VAR47[VAR42];
            VAR44 = VAR47[VAR41];
            FUN7(VAR4, VAR23, VAR18, VAR27, 0);
            FUN7(VAR4, VAR23, VAR43, VAR44, 0);
        }
        break;
    case VAR48:
    {
        int VAR18 = FUN3(FUN4(VAR4->VAR11));
        int VAR35 = FUN3(FUN8(VAR4->VAR11));
        int16_t VAR36 = FUN14(VAR4->VAR11, 0, 4);
        VAR36 = (VAR36 == 0xf ? -1 : VAR36);
        FUN12(VAR4, VAR49, VAR18, VAR35, VAR36);
    }
    break;
    case VAR50:
    {
        int VAR18 = FUN3(FUN4(VAR4->VAR11));
        int VAR35 = FUN3(FUN8(VAR4->VAR11));
        int16_t VAR36 = FUN14(VAR4->VAR11, 0, 4) << 1;
        FUN12(VAR4, VAR51, VAR18, VAR35, VAR36);
    }
    break;
    case VAR52:
    {
        int VAR18 = (VAR4->VAR11 >> 5) & 0x1f;
        int VAR35 = 29;
        int16_t VAR36 = FUN14(VAR4->VAR11, 0, 5) << 2;
        FUN12(VAR4, VAR37, VAR18, VAR35, VAR36);
    }
    break;
    case VAR53:
    {
        int VAR18 = FUN3(FUN4(VAR4->VAR11));
        int VAR35 = FUN3(FUN8(VAR4->VAR11));
        int16_t VAR36 = FUN14(VAR4->VAR11, 0, 4) << 2;
        FUN12(VAR4, VAR37, VAR18, VAR35, VAR36);
    }
    break;
    case VAR54:
    {
        int VAR18 = FUN15(FUN4(VAR4->VAR11));
        int VAR35 = FUN3(FUN8(VAR4->VAR11));
        int16_t VAR36 = FUN14(VAR4->VAR11, 0, 4);
        FUN16(VAR4, VAR55, VAR18, VAR35, VAR36);
    }
    break;
    case VAR56:
    {
        int VAR18 = FUN15(FUN4(VAR4->VAR11));
        int VAR35 = FUN3(FUN8(VAR4->VAR11));
        int16_t VAR36 = FUN14(VAR4->VAR11, 0, 4) << 1;
        FUN16(VAR4, VAR57, VAR18, VAR35, VAR36);
    }
    break;
    case VAR58:
    {
        int VAR18 = (VAR4->VAR11 >> 5) & 0x1f;
        int VAR35 = 29;
        int16_t VAR36 = FUN14(VAR4->VAR11, 0, 5) << 2;
        FUN16(VAR4, VAR59, VAR18, VAR35, VAR36);
    }
    break;
    case VAR60:
    {
        int VAR18 = FUN15(FUN4(VAR4->VAR11));
        int VAR35 = FUN3(FUN8(VAR4->VAR11));
        int16_t VAR36 = FUN14(VAR4->VAR11, 0, 4) << 2;
        FUN16(VAR4, VAR59, VAR18, VAR35, VAR36);
    }
    break;
    case VAR61:
    {
        int VAR18 = FUN17(VAR4->VAR11);
        int VAR27 = FUN18(VAR4->VAR11);
        FUN7(VAR4, VAR23, VAR18, VAR27, 0);
    }
    break;
    case VAR62:
        FUN19(VAR4);
        break;
    case VAR63:
        switch (VAR4->VAR11 & 0x1)
        {
        case VAR64:
            FUN20(VAR4);
            break;
        case VAR65:
            FUN21(VAR4);
            break;
        }
        break;
    case VAR66:
        switch (VAR4->VAR11 & 0x1)
        {
        case VAR67:
            FUN22(VAR4);
            break;
        case VAR68:
            FUN23(VAR4);
            break;
        }
        break;
    case VAR69:
        FUN24(VAR4, VAR70, 2, 0, 0, FUN11(VAR4->VAR11, 0, 10) << 1, 4);
        break;
    case VAR71:
    case VAR72:
        FUN24(VAR4, VAR5 == VAR71 ? VAR73 : VAR70, 2, FUN3(FUN4(VAR4->VAR11)), 0, FUN11(VAR4->VAR11, 0, 7) << 1, 4);
        break;
    case VAR74:
    {
        int VAR75 = FUN3(FUN4(VAR4->VAR11));
        int VAR76 = FUN14(VAR4->VAR11, 0, 7);
        VAR76 = (VAR76 == 0x7f ? -1 : VAR76);
        FUN25(VAR77[VAR75], VAR76);
    }
    break;
    case VAR78:
    case VAR79:
    case VAR80:
        FUN2(VAR4, VAR15);
        break;
    default:
        FUN26(VAR2, VAR4);
        return 4;
    }
    return 2;
}