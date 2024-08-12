static void FUN1(VAR1 *VAR2)
{
    SDL_Event VAR3;
    double VAR4, VAR5, VAR6;
    for (;;)
    {
        double VAR7;
        FUN2(VAR2, &VAR3);
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
                VAR2->VAR17 = 1;
                break;
            case VAR18:
            case VAR19:
                FUN5(VAR2);
                break;
            case VAR20:
                FUN6(VAR2);
                break;
            case VAR21:
                FUN7(VAR2, VAR22);
                break;
            case VAR23:
                FUN7(VAR2, VAR24);
                break;
            case VAR25:
                FUN7(VAR2, VAR26);
                break;
            case VAR27:
                FUN8(VAR2);
                break;
            case VAR28:
                VAR4 = 600.0;
                goto VAR29;
            case VAR30:
                VAR4 = -600.0;
                goto VAR29;
            case VAR31:
                VAR4 = -10.0;
                goto VAR29;
            case VAR32:
                VAR4 = 10.0;
                goto VAR29;
            case VAR33:
                VAR4 = 60.0;
                goto VAR29;
            case VAR34:
                VAR4 = -60.0;
            VAR29:
                if (VAR35)
                {
                    if (VAR2->VAR36 >= 0 && VAR2->VAR37 >= 0)
                    {
                        VAR5 = VAR2->VAR37;
                    }
                    else if (VAR2->VAR38 >= 0 && VAR2->VAR39.VAR5 >= 0)
                    {
                        VAR5 = VAR2->VAR39.VAR5;
                    }
                    else
                        VAR5 = FUN9(VAR2->VAR40->VAR41);
                    if (VAR2->VAR40->VAR42)
                        VAR4 *= VAR2->VAR40->VAR42 / 8.0;
                    else
                        VAR4 *= 180000.0;
                    VAR5 += VAR4;
                    FUN10(VAR2, VAR5, VAR4, 1);
                }
                else
                {
                    VAR5 = FUN11(VAR2);
                    if (FUN12(VAR5))
                        VAR5 = (double)VAR2->VAR43 / VAR44;
                    VAR5 += VAR4;
                    if (VAR2->VAR40->VAR45 != VAR46 && VAR5 < VAR2->VAR40->VAR45 / (double)VAR44)
                        VAR5 = VAR2->VAR40->VAR45 / (double)VAR44;
                    FUN10(VAR2, (VAR47)(VAR5 * VAR44), (VAR47)(VAR4 * VAR44), 0);
                }
                break;
            default:
                break;
            }
            break;
        case VAR48:
            VAR2->VAR17 = 1;
            break;
        case VAR49:
            if (VAR50)
            {
                FUN3(VAR2);
                break;
            }
        case VAR51:
            if (VAR52)
            {
                FUN13(1);
                VAR52 = 0;
            }
            VAR53 = FUN14();
            if (VAR3.VAR8 == VAR49)
            {
                VAR7 = VAR3.VAR54.VAR7;
            }
            else
            {
                if (VAR3.VAR55.VAR56 != VAR57)
                    break;
                VAR7 = VAR3.VAR55.VAR7;
            }
            if (VAR35 || VAR2->VAR40->VAR58 <= 0)
            {
                uint64_t VAR59 = FUN15(VAR2->VAR40->VAR41);
                FUN10(VAR2, VAR59 * VAR7 / VAR2->VAR60, 0, 1);
            }
            else
            {
                int64_t VAR61;
                int VAR62, VAR63, VAR64, VAR65;
                int VAR66, VAR67, VAR68, VAR69;
                VAR66 = VAR2->VAR40->VAR58 / 1000000LL;
                VAR67 = VAR66 / 3600;
                VAR68 = (VAR66 % 3600) / 60;
                VAR69 = (VAR66 % 60);
                VAR6 = VAR7 / VAR2->VAR60;
                VAR62 = VAR6 * VAR66;
                VAR63 = VAR62 / 3600;
                VAR64 = (VAR62 % 3600) / 60;
                VAR65 = (VAR62 % 60);
                fprintf(VAR70, "", VAR6 * 100, VAR63, VAR64, VAR65, VAR67, VAR68, VAR69);
                VAR61 = VAR6 * VAR2->VAR40->VAR58;
                if (VAR2->VAR40->VAR45 != VAR46)
                    VAR61 += VAR2->VAR40->VAR45;
                FUN10(VAR2, VAR61, 0, 0);
            }
            break;
        case VAR71:
            VAR72 = FUN16(VAR3.VAR73.VAR74, VAR3.VAR73.VAR75, 0, VAR76 | VAR77 | VAR78 | VAR79);
            VAR80 = VAR2->VAR60 = VAR3.VAR73.VAR74;
            VAR81 = VAR2->VAR82 = VAR3.VAR73.VAR75;
            VAR2->VAR17 = 1;
            break;
        case VAR83:
        case VAR84:
            FUN3(VAR2);
            break;
        case VAR85:
            FUN17(VAR3.VAR86.VAR87);
            break;
        default:
            break;
        }
    }
}