void FUN1(void)
{
    SDL_Event VAR1;
    double VAR2, VAR3, VAR4;
    for (;;)
    {
        FUN2(&VAR1);
        switch (VAR1.VAR5)
        {
        case VAR6:
            switch (VAR1.VAR7.VAR8.VAR9)
            {
            case VAR10:
            case VAR11:
                FUN3();
                break;
            case VAR12:
                FUN4();
                break;
            case VAR13:
            case VAR14:
                FUN5();
                break;
            case VAR15:
                FUN6();
                break;
            case VAR16:
                if (VAR17)
                    FUN7(VAR17, VAR18);
                break;
            case VAR19:
                if (VAR17)
                    FUN7(VAR17, VAR20);
                break;
            case VAR21:
                FUN8();
                break;
            case VAR22:
                VAR2 = -10.0;
                goto VAR23;
            case VAR24:
                VAR2 = 10.0;
                goto VAR23;
            case VAR25:
                VAR2 = 60.0;
                goto VAR23;
            case VAR26:
                VAR2 = -60.0;
            VAR23:
                if (VAR17)
                {
                    VAR3 = FUN9(VAR17);
                    VAR3 += VAR2;
                    FUN10(VAR17, (VAR27)(VAR3 * VAR28));
                }
                break;
            default:
                break;
            }
            break;
        case VAR29:
            if (VAR17)
            {
                int VAR30, VAR31, VAR32, VAR33;
                int VAR34, VAR35, VAR36, VAR37;
                VAR34 = VAR17->VAR38->VAR39 / 1000000LL;
                VAR35 = VAR34 / 3600;
                VAR36 = (VAR34 % 3600) / 60;
                VAR37 = (VAR34 % 60);
                VAR4 = (double)VAR1.VAR40.VAR41 / (double)VAR17->VAR42;
                VAR30 = VAR4 * VAR34;
                VAR31 = VAR30 / 3600;
                VAR32 = (VAR30 % 3600) / 60;
                VAR33 = (VAR30 % 60);
                fprintf(VAR43, "", VAR4 * 100, VAR31, VAR32, VAR33, VAR35, VAR36, VAR37);
                FUN10(VAR17, (VAR27)(VAR17->VAR38->VAR44 + VAR4 * VAR17->VAR38->VAR39));
            }
            break;
        case VAR45:
            if (VAR17)
            {
                VAR46 = FUN11(VAR1.VAR47.VAR48, VAR1.VAR47.VAR49, 0, VAR50 | VAR51 | VAR52 | VAR53);
                VAR17->VAR42 = VAR1.VAR47.VAR48;
                VAR17->VAR54 = VAR1.VAR47.VAR49;
            }
            break;
        case VAR55:
        case VAR56:
            FUN3();
            break;
        case VAR57:
            FUN12(VAR1.VAR58.VAR59);
            break;
        case VAR60:
            FUN13(VAR1.VAR58.VAR59);
            break;
        default:
            break;
        }
    }
}