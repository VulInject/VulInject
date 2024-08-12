static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    char VAR8[32];
    uint32_t VAR9, VAR10, VAR11;
    enum DDSDXGIFormat VAR12;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19, VAR20, VAR21, VAR22, VAR23;
    FUN2(VAR7, 4 * 3);
    VAR11 = FUN3(VAR7);
    VAR19 = VAR11 == FUN4('', '', '', '');
    VAR20 = VAR11 == FUN4('', '', '', '');
    VAR21 = VAR11 == FUN4('', '', '', '');
    FUN2(VAR7, 4 * 7);
    VAR13 = FUN3(VAR7);
    if (VAR13 != 32)
    {
        FUN5(VAR2, VAR24, "", VAR13);
        return VAR25;
        VAR9 = FUN3(VAR7);
        VAR4->VAR26 = VAR9 & VAR27;
        VAR4->VAR28 = VAR9 & VAR29;
        VAR22 = VAR9 & VAR30;
        VAR10 = FUN3(VAR7);
        VAR14 = FUN3(VAR7);
        VAR15 = FUN3(VAR7);
        VAR16 = FUN3(VAR7);
        VAR17 = FUN3(VAR7);
        VAR18 = FUN3(VAR7);
        FUN2(VAR7, 4);
        FUN2(VAR7, 4);
        FUN2(VAR7, 4);
        FUN2(VAR7, 4);
        FUN2(VAR7, 4);
        FUN6(VAR8, sizeof(VAR8), VAR10);
        FUN5(VAR2, VAR31, ""
                                      "",
               VAR8, VAR14, VAR15, VAR16, VAR17, VAR18);
        if (VAR11)
        {
            FUN6(VAR8, sizeof(VAR8), VAR11);
            FUN5(VAR2, VAR31, "", VAR8);
            if (VAR4->VAR26)
                VAR2->VAR32 = VAR33;
            if (VAR4->VAR26)
            {
                switch (VAR10)
                {
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 8;
                    VAR4->VAR35 = VAR4->VAR36.VAR37;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 16;
                    VAR4->VAR35 = VAR4->VAR36.VAR38;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 16;
                    VAR4->VAR35 = VAR4->VAR36.VAR39;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 16;
                    VAR4->VAR35 = VAR4->VAR36.VAR40;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 16;
                    if (VAR21)
                        VAR4->VAR35 = VAR4->VAR36.VAR41;
                    else if (VAR20)
                        VAR4->VAR35 = VAR4->VAR36.VAR42;
                    else
                        VAR4->VAR35 = VAR4->VAR36.VAR43;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 16;
                    VAR4->VAR35 = VAR4->VAR36.VAR43;
                    VAR4->VAR44 = VAR45;
                    VAR22 = 0;
                    break;
                case FUN4('', '', '', ''):
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 8;
                    VAR4->VAR35 = VAR4->VAR36.VAR46;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 8;
                    VAR4->VAR35 = VAR4->VAR36.VAR47;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 16;
                    VAR4->VAR35 = VAR4->VAR36.VAR48;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 16;
                    VAR4->VAR35 = VAR4->VAR36.VAR49;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR34 = 16;
                    VAR4->VAR35 = VAR4->VAR36.VAR50;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR26 = 0;
                    VAR2->VAR32 = VAR51;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR26 = 0;
                    VAR2->VAR32 = VAR52;
                    break;
                case FUN4('', '', '', ''):
                    VAR4->VAR26 = 0;
                    VAR4->VAR28 = 1;
                    VAR2->VAR32 = VAR53;
                    break;
                case FUN4('', '', '', ''):
                    VAR12 = FUN3(VAR7);
                    FUN2(VAR7, 4);
                    FUN2(VAR7, 4);
                    VAR23 = FUN3(VAR7);
                    FUN2(VAR7, 4);
                    if (VAR23 != 0)
                        FUN5(VAR2, VAR31, "", VAR23);
                    VAR4->VAR26 = (VAR12 >= 70) && (VAR12 <= 84);
                    FUN5(VAR2, VAR31, "", VAR12);
                    switch (VAR12)
                    {
                    case VAR54:
                    case VAR55:
                    case VAR56:
                    case VAR57:
                    case VAR58:
                    case VAR59:
                        VAR2->VAR32 = VAR60;
                        break;
                    case VAR61:
                        VAR2->VAR62 = VAR63;
                    case VAR64:
                    case VAR65:
                    case VAR66:
                    case VAR67:
                    case VAR68:
                        VAR2->VAR32 = VAR69;
                        break;
                    case VAR70:
                        VAR2->VAR62 = VAR63;
                    case VAR71:
                    case VAR72:
                        VAR2->VAR32 = VAR33;
                        break;
                    case VAR73:
                        VAR2->VAR62 = VAR63;
                    case VAR74:
                    case VAR75:
                        VAR2->VAR32 = VAR33;
                        break;
                    case VAR76:
                        VAR2->VAR32 = VAR77;
                        break;
                    case VAR78:
                        VAR2->VAR62 = VAR63;
                    case VAR79:
                    case VAR80:
                        VAR4->VAR34 = 8;
                        VAR4->VAR35 = VAR4->VAR36.VAR37;
                        break;
                    case VAR81:
                        VAR2->VAR62 = VAR63;
                    case VAR82:
                    case VAR83:
                        VAR4->VAR34 = 16;
                        VAR4->VAR35 = VAR4->VAR36.VAR39;
                        break;
                    case VAR84:
                        VAR2->VAR62 = VAR63;
                    case VAR85:
                    case VAR86:
                        VAR4->VAR34 = 16;
                        VAR4->VAR35 = VAR4->VAR36.VAR43;
                        break;
                    case VAR87:
                    case VAR88:
                        VAR4->VAR34 = 8;
                        VAR4->VAR35 = VAR4->VAR36.VAR46;
                        break;
                    case VAR89:
                        VAR4->VAR34 = 8;
                        VAR4->VAR35 = VAR4->VAR36.VAR47;
                        break;
                    case VAR90:
                    case VAR91:
                        VAR4->VAR34 = 16;
                        VAR4->VAR35 = VAR4->VAR36.VAR49;
                        break;
                    case VAR92:
                        VAR4->VAR34 = 16;
                        VAR4->VAR35 = VAR4->VAR36.VAR50;
                        break;
                    default:
                        FUN5(VAR2, VAR24, "", VAR12);
                        return VAR25;
                        break;
                    default:
                        FUN5(VAR2, VAR24, "", VAR8);
                        return VAR25;
                    }
                    else if (VAR4->VAR28)
                    {
                        if (VAR14 == 8)
                        {
                            VAR2->VAR32 = VAR53;
                        }
                        else
                        {
                            FUN5(VAR2, VAR24, "", VAR14);
                            return VAR25;
                        }
                        else
                        {
                            if (VAR14 == 8 && VAR15 == 0xff && VAR16 == 0 && VAR17 == 0 && VAR18 == 0)
                                VAR2->VAR32 = VAR93;
                            else if (VAR14 == 16 && VAR15 == 0xff && VAR16 == 0 && VAR17 == 0 && VAR18 == 0xff00)
                                VAR2->VAR32 = VAR94;
                            else if (VAR14 == 16 && VAR15 == 0xffff && VAR16 == 0 && VAR17 == 0 && VAR18 == 0)
                                VAR2->VAR32 = VAR95;
                            else if (VAR14 == 16 && VAR15 == 0xf800 && VAR16 == 0x7e0 && VAR17 == 0x1f && VAR18 == 0)
                                VAR2->VAR32 = VAR77;
                            else if (VAR14 == 24 && VAR15 == 0xff0000 && VAR16 == 0xff00 && VAR17 == 0xff && VAR18 == 0)
                                VAR2->VAR32 = VAR96;
                            else if (VAR14 == 32 && VAR15 == 0xff0000 && VAR16 == 0xff00 && VAR17 == 0xff && VAR18 == 0)
                                VAR2->VAR32 = VAR69;
                            else if (VAR14 == 32 && VAR15 == 0xff && VAR16 == 0xff00 && VAR17 == 0xff0000 && VAR18 == 0)
                                VAR2->VAR32 = VAR33;
                            else if (VAR14 == 32 && VAR15 == 0xff0000 && VAR16 == 0xff00 && VAR17 == 0xff && VAR18 == 0xff000000)
                                VAR2->VAR32 = VAR69;
                            else if (VAR14 == 32 && VAR15 == 0xff && VAR16 == 0xff00 && VAR17 == 0xff0000 && VAR18 == 0xff000000)
                                VAR2->VAR32 = VAR33;
                            else
                            {
                                FUN5(VAR2, VAR24, ""
                                                            "",
                                       VAR14, VAR15, VAR16, VAR17, VAR18);
                                return VAR25;
                                if (VAR19)
                                    VAR4->VAR44 = VAR97;
                                else if (VAR22)
                                    VAR4->VAR44 = VAR98;
                                else if (VAR20 && !VAR4->VAR26)
                                    VAR4->VAR44 = VAR99;
                                else if (VAR2->VAR32 == VAR94)
                                    VAR4->VAR44 = VAR100;
                                switch (VAR14)
                                {
                                case FUN4('', '', '', ''):
                                    VAR4->VAR44 = VAR101;
                                    break;
                                case FUN4('', '', '', ''):
                                    VAR4->VAR44 = VAR102;
                                    break;
                                case FUN4('', '', '', ''):
                                    VAR4->VAR44 = VAR103;
                                    break;
                                case FUN4('', '', '', ''):
                                    VAR4->VAR44 = VAR104;
                                    break;
                                case FUN4('', '', '', ''):
                                    VAR4->VAR44 = VAR105;
                                    break;
                                case FUN4('', '', '', ''):
                                    VAR4->VAR44 = VAR106;
                                    break;
                                case FUN4('', '', '', ''):
                                    VAR4->VAR44 = VAR107;
                                    break;
                                case FUN4('', '', '', ''):
                                    VAR4->VAR44 = VAR98;
                                    break;
                                    return 0