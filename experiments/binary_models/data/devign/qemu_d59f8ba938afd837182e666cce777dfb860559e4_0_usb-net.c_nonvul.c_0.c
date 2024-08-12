static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = (VAR9 *)VAR2;
    int VAR11 = 0;
    switch (VAR3)
    {
    case VAR12 | VAR13:
        VAR8[0] = (1 << VAR14) | (VAR2->VAR15 << VAR16);
        VAR8[1] = 0x00;
        VAR11 = 2;
        break;
    case VAR17 | VAR18:
        if (VAR4 == VAR16)
        {
            VAR2->VAR15 = 0;
        }
        else
        {
            goto VAR19;
        }
        VAR11 = 0;
        break;
    case VAR17 | VAR20:
        if (VAR4 == VAR16)
        {
            VAR2->VAR15 = 1;
        }
        else
        {
            goto VAR19;
        }
        VAR11 = 0;
        break;
    case VAR17 | VAR21:
        VAR2->VAR22 = VAR4;
        VAR11 = 0;
        break;
    case VAR23 | VAR24:
        if (!VAR10->VAR25 || VAR4 || VAR5 != 0)
            goto VAR19;
        {
            unsigned int VAR26;
            fprintf(VAR27, "");
            for (VAR26 = 0; VAR26 < VAR6; VAR26++)
            {
                if (!(VAR26 & 15))
                    fprintf(VAR27, "", VAR26);
                fprintf(VAR27, "", VAR8[VAR26]);
            }
            fprintf(VAR27, "");
        }
        VAR11 = FUN2(VAR10, VAR8, VAR6);
        break;
    case VAR28 | VAR29:
        if (!VAR10->VAR25 || VAR4 || VAR5 != 0)
            goto VAR19;
        VAR11 = FUN3(VAR10, VAR8);
        if (!VAR11)
        {
            VAR8[0] = 0;
            VAR11 = 1;
        }
        {
            unsigned int VAR26;
            fprintf(VAR27, "");
            for (VAR26 = 0; VAR26 < VAR11; VAR26++)
            {
                if (!(VAR26 & 15))
                    fprintf(VAR27, "", VAR26);
                fprintf(VAR27, "", VAR8[VAR26]);
            }
            fprintf(VAR27, "");
        }
        break;
    case VAR12 | VAR30:
        switch (VAR4 >> 8)
        {
        case VAR31:
            VAR11 = sizeof(VAR32);
            memcpy(VAR8, VAR32, VAR11);
            break;
        case VAR33:
            switch (VAR4 & 0xff)
            {
            case 0:
                VAR11 = sizeof(VAR34);
                memcpy(VAR8, VAR34, VAR11);
                break;
            case 1:
                VAR11 = sizeof(VAR35);
                memcpy(VAR8, VAR35, VAR11);
                break;
            default:
                goto VAR19;
            }
            VAR8[2] = VAR11 & 0xff;
            VAR8[3] = VAR11 >> 8;
            break;
        case VAR36:
            switch (VAR4 & 0xff)
            {
            case 0:
                VAR8[0] = 4;
                VAR8[1] = 3;
                VAR8[2] = 0x09;
                VAR8[3] = 0x04;
                VAR11 = 4;
                break;
            case VAR37:
                VAR11 = FUN4(VAR8, VAR10->VAR38);
                break;
            default:
                if (FUN5(VAR39) > (VAR4 & 0xff))
                {
                    VAR11 = FUN4(VAR8, VAR39[VAR4 & 0xff]);
                    break;
                }
                goto VAR19;
            }
            break;
        default:
            goto VAR19;
        }
        break;
    case VAR12 | VAR40:
        VAR8[0] = VAR10->VAR25 ? VAR41 : VAR42;
        VAR11 = 1;
        break;
    case VAR17 | VAR43:
        switch (VAR4 & 0xff)
        {
        case VAR42:
            VAR10->VAR25 = 0;
            break;
        case VAR41:
            VAR10->VAR25 = 1;
            break;
        default:
            goto VAR19;
        }
        VAR11 = 0;
        break;
    case VAR12 | VAR44:
    case VAR45 | VAR44:
        VAR8[0] = 0;
        VAR11 = 1;
        break;
    case VAR17 | VAR46:
    case VAR47 | VAR46:
        VAR11 = 0;
        break;
    default:
    VAR19:
        fprintf(VAR27, ""
                        "",
                VAR3, VAR4, VAR5, VAR6);
        VAR11 = VAR48;
        break;
    }
    return VAR11;
}