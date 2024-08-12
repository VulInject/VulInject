static VAR1 FUN1(VAR2 *VAR3, SDRequest VAR4)
{
    uint32_t VAR5 = 0x0000;
    uint64_t VAR6 = (VAR3->VAR7 & (1 << 30)) ? (VAR8)VAR4.VAR9 << 9 : VAR4.VAR9;
    if (VAR10[VAR4.VAR11] == VAR12 || VAR10[VAR4.VAR11] == VAR13)
        VAR5 = VAR4.VAR9 >> 16;
    FUN2("", VAR4.VAR11, VAR4.VAR9, VAR3->VAR14);
    switch (VAR4.VAR11)
    {
    case 0:
        switch (VAR3->VAR14)
        {
        case VAR15:
            return VAR3->VAR16 ? VAR17 : VAR18;
        default:
            VAR3->VAR14 = VAR19;
            FUN3(VAR3, VAR3->VAR20);
            return VAR3->VAR16 ? VAR17 : VAR18;
        }
        break;
    case 1:
        if (!VAR3->VAR16)
            goto VAR21;
        VAR3->VAR14 = VAR22;
        return VAR17;
    case 2:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR14)
        {
        case VAR23:
            VAR3->VAR14 = VAR24;
            return VAR25;
        default:
            break;
        }
        break;
    case 3:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR14)
        {
        case VAR24:
        case VAR26:
            VAR3->VAR14 = VAR26;
            FUN4(VAR3);
            return VAR27;
        default:
            break;
        }
        break;
    case 4:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR14)
        {
        case VAR26:
            break;
        default:
            break;
        }
        break;
    case 5:
    case 6:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR28)
        {
        case VAR29:
            FUN5(VAR3, VAR4.VAR9);
            VAR3->VAR14 = VAR30;
            VAR3->VAR31 = 0;
            VAR3->VAR32 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 7:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR14)
        {
        case VAR26:
            if (VAR3->VAR5 != VAR5)
                VAR3->VAR14 = VAR22;
            return VAR33;
        case VAR22:
        case VAR30:
            if (VAR3->VAR5 == VAR5)
                break;
            VAR3->VAR14 = VAR26;
            return VAR33;
        case VAR34:
            if (VAR3->VAR5 != VAR5)
                VAR3->VAR14 = VAR35;
            return VAR33;
        case VAR35:
            if (VAR3->VAR5 == VAR5)
                break;
            VAR3->VAR14 = VAR34;
            return VAR33;
        default:
            break;
        }
        break;
    case 8:
        switch (VAR3->VAR14)
        {
        case VAR19:
            VAR3->VAR36 = 0;
            if (!(VAR4.VAR9 >> 8) || (VAR4.VAR9 >> FUN6(VAR4.VAR9 & ~0xff)))
                return VAR3->VAR16 ? VAR37 : VAR18;
            VAR3->VAR36 = VAR4.VAR9;
            return VAR37;
        default:
            break;
        }
        break;
    case 9:
        switch (VAR3->VAR14)
        {
        case VAR26:
            if (VAR3->VAR5 != VAR5)
                return VAR38;
        case VAR22:
            if (!VAR3->VAR16)
                break;
            VAR3->VAR14 = VAR30;
            memcpy(VAR3->VAR39, VAR3->VAR40, 16);
            VAR3->VAR31 = VAR6;
            VAR3->VAR32 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 10:
        switch (VAR3->VAR14)
        {
        case VAR26:
            if (VAR3->VAR5 != VAR5)
                return VAR25;
        case VAR22:
            if (!VAR3->VAR16)
                break;
            VAR3->VAR14 = VAR30;
            memcpy(VAR3->VAR39, VAR3->VAR41, 16);
            VAR3->VAR31 = VAR6;
            VAR3->VAR32 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 11:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR30;
            VAR3->VAR31 = VAR4.VAR9;
            VAR3->VAR32 = 0;
            if (VAR3->VAR31 + VAR3->VAR42 > VAR3->VAR43)
                VAR3->VAR44 |= VAR45;
        default:
            break;
        }
        break;
    case 12:
        switch (VAR3->VAR14)
        {
        case VAR30:
            VAR3->VAR14 = VAR22;
            return VAR33;
        case VAR46:
            VAR3->VAR14 = VAR35;
            VAR3->VAR14 = VAR22;
            return VAR33;
        default:
            break;
        }
        break;
    case 13:
        switch (VAR3->VAR28)
        {
        case VAR29:
            if (VAR3->VAR5 != VAR5)
                return VAR17;
        default:
            break;
        }
        break;
    case 15:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR28)
        {
        case VAR29:
            if (VAR3->VAR5 != VAR5)
                VAR3->VAR14 = VAR15;
        default:
            break;
        }
        break;
    case 16:
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR4.VAR9 > (1 << VAR47))
                VAR3->VAR44 |= VAR48;
            else
                VAR3->VAR42 = VAR4.VAR9;
            return VAR17;
        default:
            break;
        }
        break;
    case 17:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR30;
            VAR3->VAR31 = VAR6;
            VAR3->VAR32 = 0;
            if (VAR3->VAR31 + VAR3->VAR42 > VAR3->VAR43)
                VAR3->VAR44 |= VAR45;
            return VAR17;
        default:
            break;
        }
        break;
    case 18:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR30;
            VAR3->VAR31 = VAR6;
            VAR3->VAR32 = 0;
            if (VAR3->VAR31 + VAR3->VAR42 > VAR3->VAR43)
                VAR3->VAR44 |= VAR45;
            return VAR17;
        default:
            break;
        }
        break;
    case 24:
        if (VAR3->VAR16)
            goto VAR49;
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR3->VAR16)
                break;
            VAR3->VAR14 = VAR46;
            VAR3->VAR31 = VAR6;
            VAR3->VAR32 = 0;
            VAR3->VAR50 = 0;
            if (VAR3->VAR31 + VAR3->VAR42 > VAR3->VAR43)
                VAR3->VAR44 |= VAR45;
            if (FUN7(VAR3, VAR3->VAR31))
                VAR3->VAR44 |= VAR51;
            if (VAR3->VAR40[14] & 0x30)
                VAR3->VAR44 |= VAR51;
            return VAR17;
        default:
            break;
        }
        break;
    case 25:
        if (VAR3->VAR16)
            goto VAR49;
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR3->VAR16)
                break;
            VAR3->VAR14 = VAR46;
            VAR3->VAR31 = VAR6;
            VAR3->VAR32 = 0;
            VAR3->VAR50 = 0;
            if (VAR3->VAR31 + VAR3->VAR42 > VAR3->VAR43)
                VAR3->VAR44 |= VAR45;
            if (FUN7(VAR3, VAR3->VAR31))
                VAR3->VAR44 |= VAR51;
            if (VAR3->VAR40[14] & 0x30)
                VAR3->VAR44 |= VAR51;
            return VAR17;
        default:
            break;
        }
        break;
    case 26:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR46;
            VAR3->VAR31 = 0;
            VAR3->VAR32 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 27:
        if (VAR3->VAR16)
            goto VAR49;
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR46;
            VAR3->VAR31 = 0;
            VAR3->VAR32 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 28:
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR6 >= VAR3->VAR43)
            {
                VAR3->VAR44 = VAR45;
                return VAR33;
            }
            VAR3->VAR14 = VAR35;
            VAR3->VAR52[VAR6 >> (VAR47 + VAR53 + VAR54)] = 1;
            VAR3->VAR14 = VAR22;
            return VAR33;
        default:
            break;
        }
        break;
    case 29:
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR6 >= VAR3->VAR43)
            {
                VAR3->VAR44 = VAR45;
                return VAR33;
            }
            VAR3->VAR14 = VAR35;
            VAR3->VAR52[VAR6 >> (VAR47 + VAR53 + VAR54)] = 0;
            VAR3->VAR14 = VAR22;
            return VAR33;
        default:
            break;
        }
        break;
    case 30:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR30;
            *(VAR55 *)VAR3->VAR39 = FUN8(VAR3, VAR4.VAR9);
            VAR3->VAR31 = VAR6;
            VAR3->VAR32 = 0;
            return VAR33;
        default:
            break;
        }
        break;
    case 32:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR56 = VAR4.VAR9;
            return VAR17;
        default:
            break;
        }
        break;
    case 33:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR57 = VAR4.VAR9;
            return VAR17;
        default:
            break;
        }
        break;
    case 38:
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR3->VAR40[14] & 0x30)
            {
                VAR3->VAR44 |= VAR51;
                return VAR33;
            }
            VAR3->VAR14 = VAR35;
            FUN9(VAR3);
            VAR3->VAR14 = VAR22;
            return VAR33;
        default:
            break;
        }
        break;
    case 42:
        if (VAR3->VAR16)
            goto VAR49;
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR46;
            VAR3->VAR31 = 0;
            VAR3->VAR32 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 55:
        if (VAR3->VAR5 != VAR5)
            VAR3->VAR44 |= VAR58;
        return VAR17;
    case 56:
        fprintf(VAR59, "", VAR4.VAR9);
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR32 = 0;
            if (VAR4.VAR9 & 1)
                VAR3->VAR14 = VAR30;
            else
                VAR3->VAR14 = VAR46;
            return VAR17;
        default:
            break;
        }
        break;
    default:
    VAR21:
        fprintf(VAR59, "", VAR4.VAR11);
    VAR49:
        fprintf(VAR59, "", VAR4.VAR11);
    }
    fprintf(VAR59, "", VAR4.VAR11);