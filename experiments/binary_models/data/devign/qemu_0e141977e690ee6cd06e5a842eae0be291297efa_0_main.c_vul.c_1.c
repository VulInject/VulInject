void FUN1(VAR1 *VAR2)
{
    int VAR3;
    target_siginfo_t VAR4;
    abi_long VAR5;
    while (1)
    {
        VAR3 = FUN2(VAR2);
        VAR2->VAR6 = 0;
        switch (VAR3)
        {
        case VAR7:
            fprintf(VAR8, "");
            FUN3(1);
            break;
        case VAR9:
            fprintf(VAR8, "");
            FUN3(1);
            break;
        case VAR10:
        case VAR11:
        case VAR12:
            fprintf(VAR8, "");
            FUN3(1);
            break;
        case VAR13:
            VAR2->VAR14 = -1;
            VAR4.VAR15 = VAR16;
            VAR4.VAR17 = 0;
            VAR4.VAR18 = (FUN4(VAR2->VAR19) & VAR20 ? VAR21 : VAR22);
            VAR4.VAR23.VAR24.VAR25 = VAR2->VAR19;
            FUN5(VAR2, VAR4.VAR15, &VAR4);
            break;
        case VAR26:
            VAR2->VAR14 = -1;
            VAR4.VAR15 = VAR27;
            VAR4.VAR17 = 0;
            VAR4.VAR18 = VAR28;
            VAR4.VAR23.VAR24.VAR25 = VAR2->VAR19;
            FUN5(VAR2, VAR4.VAR15, &VAR4);
            break;
        case VAR29:
        VAR30:
            VAR2->VAR14 = -1;
            VAR4.VAR15 = VAR31;
            VAR4.VAR17 = 0;
            VAR4.VAR18 = VAR32;
            VAR4.VAR23.VAR24.VAR25 = VAR2->VAR33;
            FUN5(VAR2, VAR4.VAR15, &VAR4);
            break;
        case VAR34:
            VAR2->VAR14 = -1;
            VAR4.VAR15 = VAR35;
            VAR4.VAR17 = 0;
            VAR4.VAR18 = VAR36;
            VAR4.VAR23.VAR24.VAR25 = VAR2->VAR33;
            FUN5(VAR2, VAR4.VAR15, &VAR4);
            break;
        case VAR37:
            break;
        case VAR38:
            VAR2->VAR14 = -1;
            switch (VAR2->VAR39)
            {
            case 0x80:
                VAR4.VAR15 = VAR40;
                VAR4.VAR17 = 0;
                VAR4.VAR18 = VAR41;
                VAR4.VAR23.VAR24.VAR25 = VAR2->VAR33;
                FUN5(VAR2, VAR4.VAR15, &VAR4);
                break;
            case 0x81:
                VAR4.VAR15 = VAR40;
                VAR4.VAR17 = 0;
                VAR4.VAR18 = 0;
                VAR4.VAR23.VAR24.VAR25 = VAR2->VAR33;
                FUN5(VAR2, VAR4.VAR15, &VAR4);
                break;
            case 0x83:
                VAR3 = VAR2->VAR42[VAR43];
                VAR5 = FUN6(VAR2, VAR3, VAR2->VAR42[VAR44], VAR2->VAR42[VAR45], VAR2->VAR42[VAR46], VAR2->VAR42[VAR47], VAR2->VAR42[VAR48], VAR2->VAR42[VAR49], 0, 0);
                if (VAR3 == VAR50 || VAR3 == VAR51)
                {
                    break;
                }
                if (VAR2->VAR42[VAR43] == 0)
                {
                    VAR2->VAR42[VAR43] = VAR5;
                }
                else
                {
                    VAR2->VAR42[VAR43] = (VAR5 < 0 ? -VAR5 : VAR5);
                    VAR2->VAR42[VAR47] = (VAR5 < 0);
                }
                break;
            case 0x86:
                break;
            case 0x9E:
                FUN7();
            case 0x9F:
                FUN7();
            case 0xAA:
                VAR4.VAR15 = VAR35;
                switch (VAR2->VAR42[VAR44])
                {
                case VAR52:
                    VAR4.VAR18 = VAR53;
                    break;
                case VAR54:
                    VAR4.VAR18 = VAR55;
                    break;
                case VAR56:
                    VAR4.VAR18 = VAR57;
                    break;
                case VAR58:
                    VAR4.VAR18 = VAR59;
                    break;
                case VAR60:
                    VAR4.VAR18 = VAR36;
                    break;
                case VAR61:
                    VAR4.VAR18 = VAR62;
                    break;
                case VAR63:
                    VAR4.VAR18 = 0;
                    break;
                default:
                    VAR4.VAR15 = VAR40;
                    VAR4.VAR18 = 0;
                    break;
                }
                VAR4.VAR17 = 0;
                VAR4.VAR23.VAR24.VAR25 = VAR2->VAR33;
                FUN5(VAR2, VAR4.VAR15, &VAR4);
                break;
            default:
                goto VAR30;
            }
            break;
        case VAR64:
            VAR4.VAR15 = FUN8(VAR2, VAR40);
            if (VAR4.VAR15)
            {
                VAR2->VAR14 = -1;
                VAR4.VAR17 = 0;
                VAR4.VAR18 = VAR41;
                FUN5(VAR2, VAR4.VAR15, &VAR4);
            }
            break;
        case VAR65:
        case VAR66:
            FUN9(VAR2, VAR2->VAR39, VAR3 - VAR65);
            break;
        case VAR67:
            break;
        default:
            FUN10("", VAR3);
            FUN11(VAR2, VAR8, fprintf, 0);
            FUN3(1);
        }
        FUN12(VAR2);
    }
}