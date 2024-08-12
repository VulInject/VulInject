static void FUN1(VAR1 *VAR2)
{
    SDL_Event VAR3, *VAR4 = &VAR3;
    int VAR5;
    int VAR6 = FUN2(NULL, NULL);
    if (VAR7 != VAR8)
    {
        VAR7 = VAR8;
        FUN3();
    }
    FUN4();
    FUN5(!FUN6());
    while (FUN7(VAR4))
    {
        switch (VAR4->VAR9)
        {
        case VAR10:
            FUN8(VAR2, 0, 0, VAR11->VAR12, VAR11->VAR13);
            break;
        case VAR14:
        case VAR15:
            if (VAR4->VAR9 == VAR14)
            {
                if (!VAR16)
                {
                    VAR5 = (FUN9() & VAR17) == VAR17;
                }
                else
                {
                    VAR5 = (FUN9() & (VAR17 | VAR18)) == (VAR17 | VAR18);
                }
                VAR19 = VAR5;
                if (VAR19)
                {
                    int VAR20;
                    VAR20 = FUN10(&VAR4->VAR21);
                    switch (VAR20)
                    {
                    case 0x21:
                        FUN11(VAR2);
                        VAR22 = 1;
                        break;
                    case 0x02 ... 0x0a:
                        FUN12();
                        FUN13(VAR20 - 0x02);
                        if (!FUN6())
                        {
                            if (VAR23)
                                FUN14();
                        }
                        VAR22 = 1;
                        break;
                    default:
                        break;
                    }
                }
                else if (!FUN6())
                {
                    int VAR24;
                    VAR24 = 0;
                    if (VAR4->VAR21.VAR24.VAR25 & (VAR26 | VAR27))
                    {
                        switch (VAR4->VAR21.VAR24.VAR28)
                        {
                        case VAR29:
                            VAR24 = VAR30;
                            break;
                        case VAR31:
                            VAR24 = VAR32;
                            break;
                        case VAR33:
                            VAR24 = VAR34;
                            break;
                        case VAR35:
                            VAR24 = VAR36;
                            break;
                        case VAR37:
                            VAR24 = VAR38;
                            break;
                        case VAR39:
                            VAR24 = VAR40;
                            break;
                        case VAR41:
                            VAR24 = VAR42;
                            break;
                        case VAR43:
                            VAR24 = VAR44;
                            break;
                        default:
                            break;
                        }
                    }
                    else
                    {
                        switch (VAR4->VAR21.VAR24.VAR28)
                        {
                        case VAR29:
                            VAR24 = VAR45;
                            break;
                        case VAR31:
                            VAR24 = VAR46;
                            break;
                        case VAR33:
                            VAR24 = VAR47;
                            break;
                        case VAR35:
                            VAR24 = VAR48;
                            break;
                        case VAR37:
                            VAR24 = VAR49;
                            break;
                        case VAR39:
                            VAR24 = VAR50;
                            break;
                        case VAR41:
                            VAR24 = VAR51;
                            break;
                        case VAR43:
                            VAR24 = VAR52;
                            break;
                        case VAR53:
                            VAR24 = VAR54;
                            break;
                        case VAR55:
                            VAR24 = VAR56;
                            break;
                        default:
                            break;
                        }
                    }
                    if (VAR24)
                    {
                        FUN15(VAR24);
                    }
                    else if (VAR4->VAR21.VAR24.VAR57 != 0)
                    {
                        FUN15(VAR4->VAR21.VAR24.VAR57);
                    }
                }
            }
            else if (VAR4->VAR9 == VAR15)
            {
                if (!VAR16)
                {
                    VAR5 = (VAR4->VAR21.VAR24.VAR25 & VAR17);
                }
                else
                {
                    VAR5 = (VAR4->VAR21.VAR24.VAR25 & (VAR17 | VAR18));
                }
                if (!VAR5)
                {
                    if (VAR19)
                    {
                        VAR19 = 0;
                        if (VAR22 == 0)
                        {
                            if (!VAR23)
                            {
                                if (FUN16() & VAR58)
                                    FUN17();
                            }
                            else
                            {
                                FUN14();
                            }
                            FUN12();
                            break;
                        }
                        VAR22 = 0;
                    }
                }
            }
            if (FUN6() && !VAR22)
                FUN18(&VAR4->VAR21);
            break;
        case VAR59:
            if (!VAR60)
                FUN19();
            break;
        case VAR61:
            if (VAR23 || FUN20() || VAR62)
            {
                FUN21(VAR4->VAR63.VAR64, VAR4->VAR63.VAR65, 0, VAR4->VAR63.VAR66, VAR4->VAR63.VAR67, VAR4->VAR63.VAR68);
            }
            break;
        case VAR69:
        case VAR70:
        {
            VAR71 *VAR72 = &VAR4->VAR73;
            if (!VAR23 && !FUN20())
            {
                if (VAR4->VAR9 == VAR69 && (VAR72->VAR73 == VAR74))
                {
                    FUN17();
                }
            }
            else
            {
                int VAR75;
                VAR75 = 0;
                if (VAR4->VAR9 == VAR69)
                {
                    VAR6 |= FUN22(VAR72->VAR73);
                }
                else
                {
                    VAR6 &= ~FUN22(VAR72->VAR73);
                }
                if (VAR72->VAR73 == VAR76 && VAR4->VAR9 == VAR69)
                {
                    VAR75 = -1;
                }
                else if (VAR72->VAR73 == VAR77 && VAR4->VAR9 == VAR69)
                {
                    VAR75 = 1;
                }
                FUN21(0, 0, VAR75, VAR72->VAR66, VAR72->VAR67, VAR6);
            }
        }
        break;
        case VAR78:
            if (VAR23 && VAR4->VAR79.VAR68 == VAR80 && !VAR4->VAR79.VAR81 && !VAR82)
            {
                FUN14();
            }
            if (VAR4->VAR79.VAR68 & VAR58)
            {
                if (VAR4->VAR79.VAR81)
                {
                    VAR2->VAR83 = 0;
                }
                else
                {
                    VAR2->VAR83 = 500;
                }
            }
            break;
        default:
            break;
        }
    }
}