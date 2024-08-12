static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    uint8_t VAR6;
    uint16_t VAR7;
    if (VAR5->VAR8 >= 2)
    {
        FUN2("", VAR9, VAR5->VAR8);
        return 1;
    }
    VAR5->VAR10[VAR5->VAR8++] = VAR3;
    if (VAR5->VAR8 != 2)
        return 0;
    VAR6 = VAR5->VAR10[0] >> 1;
    VAR7 = ((VAR5->VAR10[0] << 8) | VAR5->VAR10[1]) & 0x1ff;
    switch (VAR6)
    {
    case VAR11:
        VAR5->VAR12[0] = (((VAR7 >> 6) & 3) == 3);
        if (VAR5->VAR12[0])
            VAR5->VAR13[0] = &VAR5->VAR14[0 + VAR5->VAR15 * 1];
        else
            VAR5->VAR13[0] = &VAR5->VAR14[((VAR7 >> 6) & 3) * 1 + 0];
        break;
    case VAR16:
        VAR5->VAR12[1] = (((VAR7 >> 6) & 3) == 3);
        if (VAR5->VAR12[1])
            VAR5->VAR13[1] = &VAR5->VAR14[0 + VAR5->VAR15 * 1];
        else
            VAR5->VAR13[1] = &VAR5->VAR14[((VAR7 >> 6) & 3) * 1 + 0];
        break;
    case VAR17:
        VAR5->VAR15 = (VAR7 >> 8) & 1;
        if (VAR5->VAR12[0])
            VAR5->VAR13[0] = &VAR5->VAR14[0 + VAR5->VAR15 * 1];
        if (VAR5->VAR12[1])
            VAR5->VAR13[1] = &VAR5->VAR14[0 + VAR5->VAR15 * 1];
        VAR5->VAR18[0] = (VAR7 >> 6) & 3;
        break;
    case VAR19:
        VAR5->VAR18[1] = (VAR7 >> 1) & 1;
        break;
    case VAR20:
        VAR5->VAR21 = ((VAR7 >> 6) & 7) == 3;
        FUN3(VAR5);
        break;
    case VAR22:
        VAR5->VAR23[0] = VAR7 & 0x3f;
        VAR5->VAR24[0] = (VAR7 >> 7) & 1;
        FUN4(VAR5);
        break;
    case VAR25:
        VAR5->VAR23[1] = VAR7 & 0x3f;
        VAR5->VAR24[1] = (VAR7 >> 7) & 1;
        FUN4(VAR5);
        break;
    case VAR26:
        VAR5->VAR27 = (VAR7 >> 5) & 3;
        VAR5->VAR28 = (VAR7 >> 3) & 1;
        FUN4(VAR5);
        break;
    case VAR29:
        break;
    case VAR30:
        VAR5->VAR23[2] = VAR7 & 0xff;
        FUN4(VAR5);
        break;
    case VAR31:
        VAR5->VAR23[3] = VAR7 & 0xff;
        FUN4(VAR5);
        break;
    case VAR32:
        VAR5->VAR33 = (VAR7 >> 7) & 3;
        break;
    case VAR34:
    case VAR35:
        break;
    case VAR36:
        VAR5->VAR37[0] = VAR7 & 0xff;
        FUN4(VAR5);
        break;
    case VAR38:
        VAR5->VAR37[1] = VAR7 & 0xff;
        FUN4(VAR5);
        break;
    case VAR39:
        break;
    case VAR40:
        VAR5->VAR41[0] = (VAR7 >> 8) & 1;
        FUN4(VAR5);
        break;
    case VAR42:
        VAR5->VAR41[1] = (VAR7 >> 8) & 1;
        FUN4(VAR5);
        break;
    case VAR43:
        VAR5->VAR41[2] = (VAR7 >> 8) & 1;
        FUN4(VAR5);
        break;
    case VAR44:
        VAR5->VAR41[3] = (VAR7 >> 8) & 1;
        FUN4(VAR5);
        break;
    case VAR45:
        VAR5->VAR46[0] = (VAR7 >> 8) & 1;
        FUN4(VAR5);
        break;
    case VAR47:
        VAR5->VAR46[1] = (VAR7 >> 8) & 1;
        FUN4(VAR5);
        break;
    case VAR48:
        VAR5->VAR37[2] = VAR7 & 0x7f;
        FUN4(VAR5);
        break;
    case VAR49:
        VAR5->VAR37[4] = VAR7 & 0x7f;
        FUN4(VAR5);
        break;
    case VAR50:
        VAR5->VAR37[3] = VAR7 & 0x7f;
        FUN4(VAR5);
        break;
    case VAR51:
        VAR5->VAR37[5] = VAR7 & 0x7f;
        FUN4(VAR5);
        break;
    case VAR52:
        VAR5->VAR37[6] = VAR7 & 0x7f;
        FUN4(VAR5);
        break;
    case VAR53:
        break;
    case VAR54:
        VAR5->VAR55 = VAR7 & 0x7e;
        FUN4(VAR5);
        break;
    case VAR56:
        VAR5->VAR57 = VAR7;
        VAR5->VAR58 = (VAR7 >> 6) & 1;
        FUN5(VAR5, VAR5->VAR58);
        break;
    case VAR59:
        VAR5->VAR60 = &VAR61[(VAR7 >> 1) & 0x1f];
        FUN5(VAR5, 0);
        break;
    case VAR62:
        FUN6(&VAR5->VAR2);
        break;
    default:
        FUN2("", VAR9, VAR6);
    }
    return 0;
}