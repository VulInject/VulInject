static void FUN1(VAR1 *VAR2)
{
    SDL_Event VAR3;
    double VAR4, VAR5, VAR6;
    for (;;)
    {
        double VAR7;
        FUN2(&VAR3);
        switch (VAR3.VAR8)
        {
        case VAR9:
            if (VAR10)
            {
                FUN3(VAR2);
                break;
            }
            switch (VAR3.VAR11.VAR12.VAR13)
            {
            case VAR14:
            case VAR15:
                FUN3(VAR2);
                break;
            case VAR16:
                FUN4(VAR2);
                break;
            case VAR17:
            case VAR18:
                FUN5(VAR2);
                break;
            case VAR19:
                FUN6(VAR2);
                break;
            case VAR20:
                FUN7(VAR2, VAR21);
                break;
            case VAR22:
                FUN7(VAR2, VAR23);
                break;
            case VAR24:
                FUN7(VAR2, VAR25);
                break;
            case VAR26:
                FUN8(VAR2);
                break;
            case VAR27:
                VAR4 = -10.0;
                goto VAR28;
            case VAR29:
                VAR4 = 10.0;
                goto VAR28;
            case VAR30:
                VAR4 = 60.0;
                goto VAR28;
            case VAR31:
                VAR4 = -60.0;
            VAR28:
                if (VAR32)
                {
                    if (VAR2->VAR33 >= 0 && VAR2->VAR34 >= 0)
                    {
                        VAR5 = VAR2->VAR34;
                    }
                    else if (VAR2->VAR35 >= 0 && VAR2->VAR36.VAR5 >= 0)
                    {
                        VAR5 = VAR2->VAR36.VAR5;
                    }
                    else
                        VAR5 = FUN9(VAR2->VAR37->VAR38);
                    if (VAR2->VAR37->VAR39)
                        VAR4 *= VAR2->VAR37->VAR39 / 8.0;
                    else
                        VAR4 *= 180000.0;
                    VAR5 += VAR4;
                    FUN10(VAR2, VAR5, VAR4, 1);
                }
                else
                {
                    VAR5 = FUN11(VAR2);
                    VAR5 += VAR4;
                    FUN10(VAR2, (VAR40)(VAR5 * VAR41), (VAR40)(VAR4 * VAR41), 0);
                }
                break;
            default:
                break;
            }
            break;
        case VAR42:
            if (VAR43)
            {
                FUN3(VAR2);
                break;
            }
        case VAR44:
            if (VAR3.VAR8 == VAR42)
            {
                VAR7 = VAR3.VAR45.VAR7;
            }
            else
            {
                if (VAR3.VAR46.VAR47 != VAR48)
                    break;
                VAR7 = VAR3.VAR46.VAR7;
            }
            if (VAR32 || VAR2->VAR37->VAR49 <= 0)
            {
                uint64_t VAR50 = FUN12(VAR2->VAR37->VAR38);
                FUN10(VAR2, VAR50 * VAR7 / VAR2->VAR51, 0, 1);
            }
            else
            {
                int64_t VAR52;
                int VAR53, VAR54, VAR55, VAR56;
                int VAR57, VAR58, VAR59, VAR60;
                VAR57 = VAR2->VAR37->VAR49 / 1000000LL;
                VAR58 = VAR57 / 3600;
                VAR59 = (VAR57 % 3600) / 60;
                VAR60 = (VAR57 % 60);
                VAR6 = VAR7 / VAR2->VAR51;
                VAR53 = VAR6 * VAR57;
                VAR54 = VAR53 / 3600;
                VAR55 = (VAR53 % 3600) / 60;
                VAR56 = (VAR53 % 60);
                fprintf(VAR61, "", VAR6 * 100, VAR54, VAR55, VAR56, VAR58, VAR59, VAR60);
                VAR52 = VAR6 * VAR2->VAR37->VAR49;
                if (VAR2->VAR37->VAR62 != VAR63)
                    VAR52 += VAR2->VAR37->VAR62;
                FUN10(VAR2, VAR52, 0, 0);
            }
            break;
        case VAR64:
            VAR65 = FUN13(VAR3.VAR66.VAR67, VAR3.VAR66.VAR68, 0, VAR69 | VAR70 | VAR71 | VAR72);
            VAR73 = VAR2->VAR51 = VAR3.VAR66.VAR67;
            VAR74 = VAR2->VAR75 = VAR3.VAR66.VAR68;
            break;
        case VAR76:
        case VAR77:
            FUN3(VAR2);
            break;
        case VAR78:
            FUN14(VAR3.VAR79.VAR80);
            FUN15(VAR3.VAR79.VAR80);
            break;
        case VAR81:
            FUN16(VAR3.VAR79.VAR80);
            VAR2->VAR82 = 0;
            break;
        default:
            break;
        }
    }
}