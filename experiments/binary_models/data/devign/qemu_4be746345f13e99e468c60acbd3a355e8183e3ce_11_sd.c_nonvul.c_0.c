static VAR1 FUN1(VAR2 *VAR3, SDRequest VAR4)
{
    uint32_t VAR5 = 0x0000;
    uint64_t VAR6 = (VAR3->VAR7 & (1 << 30)) ? (VAR8)VAR4.VAR9 << 9 : VAR4.VAR9;
    VAR3->VAR10 &= ~VAR11;
    if (VAR12[VAR4.VAR13] == VAR14 || VAR12[VAR4.VAR13] == VAR15)
        VAR5 = VAR4.VAR9 >> 16;
    FUN2("", VAR4.VAR13, VAR4.VAR9, VAR3->VAR16);
    switch (VAR4.VAR13)
    {
    case 0:
        switch (VAR3->VAR16)
        {
        case VAR17:
            return VAR3->VAR18 ? VAR19 : VAR20;
        default:
            VAR3->VAR16 = VAR21;
            FUN3(VAR3, VAR3->VAR22);
            return VAR3->VAR18 ? VAR19 : VAR20;
        }
        break;
    case 1:
        if (!VAR3->VAR18)
            goto VAR23;
        VAR3->VAR16 = VAR24;
        return VAR19;
    case 2:
        if (VAR3->VAR18)
            goto VAR23;
        switch (VAR3->VAR16)
        {
        case VAR25:
            VAR3->VAR16 = VAR26;
            return VAR27;
        default:
            break;
        }
        break;
    case 3:
        if (VAR3->VAR18)
            goto VAR23;
        switch (VAR3->VAR16)
        {
        case VAR26:
        case VAR28:
            VAR3->VAR16 = VAR28;
            FUN4(VAR3);
            return VAR29;
        default:
            break;
        }
        break;
    case 4:
        if (VAR3->VAR18)
            goto VAR23;
        switch (VAR3->VAR16)
        {
        case VAR28:
            break;
        default:
            break;
        }
        break;
    case 5:
        return VAR30;
    case 6:
        if (VAR3->VAR18)
            goto VAR23;
        switch (VAR3->VAR31)
        {
        case VAR32:
            FUN5(VAR3, VAR4.VAR9);
            VAR3->VAR16 = VAR33;
            VAR3->VAR34 = 0;
            VAR3->VAR35 = 0;
            return VAR19;
        default:
            break;
        }
        break;
    case 7:
        if (VAR3->VAR18)
            goto VAR23;
        switch (VAR3->VAR16)
        {
        case VAR28:
            if (VAR3->VAR5 != VAR5)
                return VAR20;
            VAR3->VAR16 = VAR24;
            return VAR36;
        case VAR24:
        case VAR33:
            if (VAR3->VAR5 == VAR5)
                break;
            VAR3->VAR16 = VAR28;
            return VAR36;
        case VAR37:
            if (VAR3->VAR5 != VAR5)
                return VAR20;
            VAR3->VAR16 = VAR38;
            return VAR36;
        case VAR38:
            if (VAR3->VAR5 == VAR5)
                break;
            VAR3->VAR16 = VAR37;
            return VAR36;
        default:
            break;
        }
        break;
    case 8:
        switch (VAR3->VAR16)
        {
        case VAR21:
            VAR3->VAR39 = 0;
            if (!(VAR4.VAR9 >> 8) || (VAR4.VAR9 >> FUN6(VAR4.VAR9 & ~0xff)))
                return VAR3->VAR18 ? VAR40 : VAR20;
            VAR3->VAR39 = VAR4.VAR9;
            return VAR40;
        default:
            break;
        }
        break;
    case 9:
        switch (VAR3->VAR16)
        {
        case VAR28:
            if (VAR3->VAR5 != VAR5)
                return VAR20;
            return VAR41;
        case VAR24:
            if (!VAR3->VAR18)
                break;
            VAR3->VAR16 = VAR33;
            memcpy(VAR3->VAR42, VAR3->VAR43, 16);
            VAR3->VAR34 = VAR6;
            VAR3->VAR35 = 0;
            return VAR19;
        default:
            break;
        }
        break;
    case 10:
        switch (VAR3->VAR16)
        {
        case VAR28:
            if (VAR3->VAR5 != VAR5)
                return VAR20;
            return VAR27;
        case VAR24:
            if (!VAR3->VAR18)
                break;
            VAR3->VAR16 = VAR33;
            memcpy(VAR3->VAR42, VAR3->VAR44, 16);
            VAR3->VAR34 = VAR6;
            VAR3->VAR35 = 0;
            return VAR19;
        default:
            break;
        }
        break;
    case 11:
        if (VAR3->VAR18)
            goto VAR23;
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR16 = VAR33;
            VAR3->VAR34 = VAR4.VAR9;
            VAR3->VAR35 = 0;
            if (VAR3->VAR34 + VAR3->VAR45 > VAR3->VAR46)
                VAR3->VAR10 |= VAR47;
            return VAR20;
        default:
            break;
        }
        break;
    case 12:
        switch (VAR3->VAR16)
        {
        case VAR33:
            VAR3->VAR16 = VAR24;
            return VAR36;
        case VAR48:
            VAR3->VAR16 = VAR38;
            VAR3->VAR16 = VAR24;
            return VAR36;
        default:
            break;
        }
        break;
    case 13:
        switch (VAR3->VAR31)
        {
        case VAR32:
            if (VAR3->VAR5 != VAR5)
                return VAR20;
            return VAR19;
        default:
            break;
        }
        break;
    case 15:
        if (VAR3->VAR18)
            goto VAR23;
        switch (VAR3->VAR31)
        {
        case VAR32:
            if (VAR3->VAR5 != VAR5)
                return VAR20;
            VAR3->VAR16 = VAR17;
            return VAR20;
        default:
            break;
        }
        break;
    case 16:
        switch (VAR3->VAR16)
        {
        case VAR24:
            if (VAR4.VAR9 > (1 << VAR49))
                VAR3->VAR10 |= VAR50;
            else
                VAR3->VAR45 = VAR4.VAR9;
            return VAR19;
        default:
            break;
        }
        break;
    case 17:
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR16 = VAR33;
            VAR3->VAR34 = VAR6;
            VAR3->VAR35 = 0;
            if (VAR3->VAR34 + VAR3->VAR45 > VAR3->VAR46)
                VAR3->VAR10 |= VAR47;
            return VAR19;
        default:
            break;
        }
        break;
    case 18:
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR16 = VAR33;
            VAR3->VAR34 = VAR6;
            VAR3->VAR35 = 0;
            if (VAR3->VAR34 + VAR3->VAR45 > VAR3->VAR46)
                VAR3->VAR10 |= VAR47;
            return VAR19;
        default:
            break;
        }
        break;
    case 24:
        if (VAR3->VAR18)
            goto VAR51;
        switch (VAR3->VAR16)
        {
        case VAR24:
            if (VAR3->VAR18)
                break;
            VAR3->VAR16 = VAR48;
            VAR3->VAR34 = VAR6;
            VAR3->VAR35 = 0;
            VAR3->VAR52 = 0;
            if (VAR3->VAR34 + VAR3->VAR45 > VAR3->VAR46)
                VAR3->VAR10 |= VAR47;
            if (FUN7(VAR3, VAR3->VAR34))
                VAR3->VAR10 |= VAR53;
            if (VAR3->VAR43[14] & 0x30)
                VAR3->VAR10 |= VAR53;
            return VAR19;
        default:
            break;
        }
        break;
    case 25:
        if (VAR3->VAR18)
            goto VAR51;
        switch (VAR3->VAR16)
        {
        case VAR24:
            if (VAR3->VAR18)
                break;
            VAR3->VAR16 = VAR48;
            VAR3->VAR34 = VAR6;
            VAR3->VAR35 = 0;
            VAR3->VAR52 = 0;
            if (VAR3->VAR34 + VAR3->VAR45 > VAR3->VAR46)
                VAR3->VAR10 |= VAR47;
            if (FUN7(VAR3, VAR3->VAR34))
                VAR3->VAR10 |= VAR53;
            if (VAR3->VAR43[14] & 0x30)
                VAR3->VAR10 |= VAR53;
            return VAR19;
        default:
            break;
        }
        break;
    case 26:
        if (VAR3->VAR18)
            goto VAR23;
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR16 = VAR48;
            VAR3->VAR34 = 0;
            VAR3->VAR35 = 0;
            return VAR19;
        default:
            break;
        }
        break;
    case 27:
        if (VAR3->VAR18)
            goto VAR51;
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR16 = VAR48;
            VAR3->VAR34 = 0;
            VAR3->VAR35 = 0;
            return VAR19;
        default:
            break;
        }
        break;
    case 28:
        switch (VAR3->VAR16)
        {
        case VAR24:
            if (VAR6 >= VAR3->VAR46)
            {
                VAR3->VAR10 |= VAR47;
                return VAR36;
            }
            VAR3->VAR16 = VAR38;
            FUN8(FUN9(VAR6), VAR3->VAR54);
            VAR3->VAR16 = VAR24;
            return VAR36;
        default:
            break;
        }
        break;
    case 29:
        switch (VAR3->VAR16)
        {
        case VAR24:
            if (VAR6 >= VAR3->VAR46)
            {
                VAR3->VAR10 |= VAR47;
                return VAR36;
            }
            VAR3->VAR16 = VAR38;
            FUN10(FUN9(VAR6), VAR3->VAR54);
            VAR3->VAR16 = VAR24;
            return VAR36;
        default:
            break;
        }
        break;
    case 30:
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR16 = VAR33;
            *(VAR55 *)VAR3->VAR42 = FUN11(VAR3, VAR4.VAR9);
            VAR3->VAR34 = VAR6;
            VAR3->VAR35 = 0;
            return VAR36;
        default:
            break;
        }
        break;
    case 32:
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR56 = VAR4.VAR9;
            return VAR19;
        default:
            break;
        }
        break;
    case 33:
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR57 = VAR4.VAR9;
            return VAR19;
        default:
            break;
        }
        break;
    case 38:
        switch (VAR3->VAR16)
        {
        case VAR24:
            if (VAR3->VAR43[14] & 0x30)
            {
                VAR3->VAR10 |= VAR53;
                return VAR36;
            }
            VAR3->VAR16 = VAR38;
            FUN12(VAR3);
            VAR3->VAR16 = VAR24;
            return VAR36;
        default:
            break;
        }
        break;
    case 42:
        if (VAR3->VAR18)
            goto VAR51;
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR16 = VAR48;
            VAR3->VAR34 = 0;
            VAR3->VAR35 = 0;
            return VAR19;
        default:
            break;
        }
        break;
    case 52:
    case 53:
        return VAR30;
    case 55:
        if (VAR3->VAR5 != VAR5)
            return VAR20;
        VAR3->VAR58 = true;
        VAR3->VAR10 |= VAR11;
        return VAR19;
    case 56:
        fprintf(VAR59, "", VAR4.VAR9);
        switch (VAR3->VAR16)
        {
        case VAR24:
            VAR3->VAR35 = 0;
            if (VAR4.VAR9 & 1)
                VAR3->VAR16 = VAR33;
            else
                VAR3->VAR16 = VAR48;
            return VAR19;
        default:
            break;
        }
        break;
    default:
    VAR23:
        fprintf(VAR59, "", VAR4.VAR13);
        return VAR30;
    VAR51:
        fprintf(VAR59, "", VAR4.VAR13);
        return VAR30;
    }
    fprintf(VAR59, "", VAR4.VAR13);
    return VAR30;
}