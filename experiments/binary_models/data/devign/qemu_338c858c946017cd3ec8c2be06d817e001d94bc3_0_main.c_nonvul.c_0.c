void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(VAR2));
    int VAR5;
    target_siginfo_t VAR6;
    abi_long VAR7;
    while (1)
    {
        FUN4(VAR4);
        VAR5 = FUN5(VAR4);
        FUN6(VAR4);
        VAR2->VAR8 = 0;
        switch (VAR5)
        {
        case VAR9:
            fprintf(VAR10, "");
            FUN7(VAR11);
            break;
        case VAR12:
            fprintf(VAR10, "");
            FUN7(VAR11);
            break;
        case VAR13:
        case VAR14:
        case VAR15:
            fprintf(VAR10, "");
            FUN7(VAR11);
            break;
        case VAR16:
            VAR2->VAR17 = -1;
            VAR6.VAR18 = VAR19;
            VAR6.VAR20 = 0;
            VAR6.VAR21 = (FUN8(VAR2->VAR22) & VAR23 ? VAR24 : VAR25);
            VAR6.VAR26.VAR27.VAR28 = VAR2->VAR22;
            FUN9(VAR2, VAR6.VAR18, &VAR6);
            break;
        case VAR29:
            VAR2->VAR17 = -1;
            VAR6.VAR18 = VAR30;
            VAR6.VAR20 = 0;
            VAR6.VAR21 = VAR31;
            VAR6.VAR26.VAR27.VAR28 = VAR2->VAR22;
            FUN9(VAR2, VAR6.VAR18, &VAR6);
            break;
        case VAR32:
        VAR33:
            VAR2->VAR17 = -1;
            VAR6.VAR18 = VAR34;
            VAR6.VAR20 = 0;
            VAR6.VAR21 = VAR35;
            VAR6.VAR26.VAR27.VAR28 = VAR2->VAR36;
            FUN9(VAR2, VAR6.VAR18, &VAR6);
            break;
        case VAR37:
            VAR2->VAR17 = -1;
            VAR6.VAR18 = VAR38;
            VAR6.VAR20 = 0;
            VAR6.VAR21 = VAR39;
            VAR6.VAR26.VAR27.VAR28 = VAR2->VAR36;
            FUN9(VAR2, VAR6.VAR18, &VAR6);
            break;
        case VAR40:
            break;
        case VAR41:
            VAR2->VAR17 = -1;
            switch (VAR2->VAR42)
            {
            case 0x80:
                VAR6.VAR18 = VAR43;
                VAR6.VAR20 = 0;
                VAR6.VAR21 = VAR44;
                VAR6.VAR26.VAR27.VAR28 = VAR2->VAR36;
                FUN9(VAR2, VAR6.VAR18, &VAR6);
                break;
            case 0x81:
                VAR6.VAR18 = VAR43;
                VAR6.VAR20 = 0;
                VAR6.VAR21 = 0;
                VAR6.VAR26.VAR27.VAR28 = VAR2->VAR36;
                FUN9(VAR2, VAR6.VAR18, &VAR6);
                break;
            case 0x83:
                VAR5 = VAR2->VAR45[VAR46];
                VAR7 = FUN10(VAR2, VAR5, VAR2->VAR45[VAR47], VAR2->VAR45[VAR48], VAR2->VAR45[VAR49], VAR2->VAR45[VAR50], VAR2->VAR45[VAR51], VAR2->VAR45[VAR52], 0, 0);
                if (VAR7 == -VAR53)
                {
                    VAR2->VAR36 -= 4;
                    break;
                }
                if (VAR7 == -VAR54)
                {
                    break;
                }
                VAR5 = (VAR2->VAR45[VAR46] != 0 && VAR7 < 0);
                VAR2->VAR45[VAR46] = (VAR5 ? -VAR7 : VAR7);
                VAR2->VAR45[VAR50] = VAR5;
                break;
            case 0x86:
                break;
            case 0x9E:
                FUN11();
            case 0x9F:
                FUN11();
            case 0xAA:
                VAR6.VAR18 = VAR38;
                switch (VAR2->VAR45[VAR47])
                {
                case VAR55:
                    VAR6.VAR21 = VAR56;
                    break;
                case VAR57:
                    VAR6.VAR21 = VAR58;
                    break;
                case VAR59:
                    VAR6.VAR21 = VAR60;
                    break;
                case VAR61:
                    VAR6.VAR21 = VAR62;
                    break;
                case VAR63:
                    VAR6.VAR21 = VAR39;
                    break;
                case VAR64:
                    VAR6.VAR21 = VAR65;
                    break;
                case VAR66:
                    VAR6.VAR21 = 0;
                    break;
                default:
                    VAR6.VAR18 = VAR43;
                    VAR6.VAR21 = 0;
                    break;
                }
                VAR6.VAR20 = 0;
                VAR6.VAR26.VAR27.VAR28 = VAR2->VAR36;
                FUN9(VAR2, VAR6.VAR18, &VAR6);
                break;
            default:
                goto VAR33;
            }
            break;
        case VAR67:
            VAR6.VAR18 = FUN12(VAR4, VAR43);
            if (VAR6.VAR18)
            {
                VAR2->VAR17 = -1;
                VAR6.VAR20 = 0;
                VAR6.VAR21 = VAR44;
                FUN9(VAR2, VAR6.VAR18, &VAR6);
            }
            break;
        case VAR68:
        case VAR69:
            FUN13(VAR2, VAR2->VAR42, VAR5 - VAR68);
            break;
        case VAR70:
            break;
        default:
            FUN14("", VAR5);
            FUN15(VAR4, VAR10, fprintf, 0);
            FUN7(VAR11);
        }
        FUN16(VAR2);
    }
}