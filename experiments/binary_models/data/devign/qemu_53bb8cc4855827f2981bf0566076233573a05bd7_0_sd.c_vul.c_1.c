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
        VAR3->VAR28 |= VAR29;
        return VAR18;
    case 6:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR30)
        {
        case VAR31:
            FUN5(VAR3, VAR4.VAR9);
            VAR3->VAR14 = VAR32;
            VAR3->VAR33 = 0;
            VAR3->VAR34 = 0;
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
                return VAR18;
            VAR3->VAR14 = VAR22;
            return VAR35;
        case VAR22:
        case VAR32:
            if (VAR3->VAR5 == VAR5)
                break;
            VAR3->VAR14 = VAR26;
            return VAR35;
        case VAR36:
            if (VAR3->VAR5 != VAR5)
                return VAR18;
            VAR3->VAR14 = VAR37;
            return VAR35;
        case VAR37:
            if (VAR3->VAR5 == VAR5)
                break;
            VAR3->VAR14 = VAR36;
            return VAR35;
        default:
            break;
        }
        break;
    case 8:
        switch (VAR3->VAR14)
        {
        case VAR19:
            VAR3->VAR38 = 0;
            if (!(VAR4.VAR9 >> 8) || (VAR4.VAR9 >> FUN6(VAR4.VAR9 & ~0xff)))
                return VAR3->VAR16 ? VAR39 : VAR18;
            VAR3->VAR38 = VAR4.VAR9;
            return VAR39;
        default:
            break;
        }
        break;
    case 9:
        switch (VAR3->VAR14)
        {
        case VAR26:
            if (VAR3->VAR5 != VAR5)
                return VAR18;
            return VAR40;
        case VAR22:
            if (!VAR3->VAR16)
                break;
            VAR3->VAR14 = VAR32;
            memcpy(VAR3->VAR41, VAR3->VAR42, 16);
            VAR3->VAR33 = VAR6;
            VAR3->VAR34 = 0;
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
                return VAR18;
            return VAR25;
        case VAR22:
            if (!VAR3->VAR16)
                break;
            VAR3->VAR14 = VAR32;
            memcpy(VAR3->VAR41, VAR3->VAR43, 16);
            VAR3->VAR33 = VAR6;
            VAR3->VAR34 = 0;
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
            VAR3->VAR14 = VAR32;
            VAR3->VAR33 = VAR4.VAR9;
            VAR3->VAR34 = 0;
            if (VAR3->VAR33 + VAR3->VAR44 > VAR3->VAR45)
                VAR3->VAR28 |= VAR46;
            return VAR18;
        default:
            break;
        }
        break;
    case 12:
        switch (VAR3->VAR14)
        {
        case VAR32:
            VAR3->VAR14 = VAR22;
            return VAR35;
        case VAR47:
            VAR3->VAR14 = VAR37;
            VAR3->VAR14 = VAR22;
            return VAR35;
        default:
            break;
        }
        break;
    case 13:
        switch (VAR3->VAR30)
        {
        case VAR31:
            if (VAR3->VAR5 != VAR5)
                return VAR18;
            return VAR17;
        default:
            break;
        }
        break;
    case 15:
        if (VAR3->VAR16)
            goto VAR21;
        switch (VAR3->VAR30)
        {
        case VAR31:
            if (VAR3->VAR5 != VAR5)
                return VAR18;
            VAR3->VAR14 = VAR15;
            return VAR18;
        default:
            break;
        }
        break;
    case 16:
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR4.VAR9 > (1 << VAR48))
                VAR3->VAR28 |= VAR49;
            else
                VAR3->VAR44 = VAR4.VAR9;
            return VAR17;
        default:
            break;
        }
        break;
    case 17:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR32;
            VAR3->VAR33 = VAR6;
            VAR3->VAR34 = 0;
            if (VAR3->VAR33 + VAR3->VAR44 > VAR3->VAR45)
                VAR3->VAR28 |= VAR46;
            return VAR17;
        default:
            break;
        }
        break;
    case 18:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR32;
            VAR3->VAR33 = VAR6;
            VAR3->VAR34 = 0;
            if (VAR3->VAR33 + VAR3->VAR44 > VAR3->VAR45)
                VAR3->VAR28 |= VAR46;
            return VAR17;
        default:
            break;
        }
        break;
    case 24:
        if (VAR3->VAR16)
            goto VAR50;
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR3->VAR16)
                break;
            VAR3->VAR14 = VAR47;
            VAR3->VAR33 = VAR6;
            VAR3->VAR34 = 0;
            VAR3->VAR51 = 0;
            if (VAR3->VAR33 + VAR3->VAR44 > VAR3->VAR45)
                VAR3->VAR28 |= VAR46;
            if (FUN7(VAR3, VAR3->VAR33))
                VAR3->VAR28 |= VAR52;
            if (VAR3->VAR42[14] & 0x30)
                VAR3->VAR28 |= VAR52;
            return VAR17;
        default:
            break;
        }
        break;
    case 25:
        if (VAR3->VAR16)
            goto VAR50;
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR3->VAR16)
                break;
            VAR3->VAR14 = VAR47;
            VAR3->VAR33 = VAR6;
            VAR3->VAR34 = 0;
            VAR3->VAR51 = 0;
            if (VAR3->VAR33 + VAR3->VAR44 > VAR3->VAR45)
                VAR3->VAR28 |= VAR46;
            if (FUN7(VAR3, VAR3->VAR33))
                VAR3->VAR28 |= VAR52;
            if (VAR3->VAR42[14] & 0x30)
                VAR3->VAR28 |= VAR52;
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
            VAR3->VAR14 = VAR47;
            VAR3->VAR33 = 0;
            VAR3->VAR34 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 27:
        if (VAR3->VAR16)
            goto VAR50;
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR47;
            VAR3->VAR33 = 0;
            VAR3->VAR34 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 28:
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR6 >= VAR3->VAR45)
            {
                VAR3->VAR28 |= VAR46;
                return VAR35;
            }
            VAR3->VAR14 = VAR37;
            VAR3->VAR53[VAR6 >> (VAR48 + VAR54 + VAR55)] = 1;
            VAR3->VAR14 = VAR22;
            return VAR35;
        default:
            break;
        }
        break;
    case 29:
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR6 >= VAR3->VAR45)
            {
                VAR3->VAR28 |= VAR46;
                return VAR35;
            }
            VAR3->VAR14 = VAR37;
            VAR3->VAR53[VAR6 >> (VAR48 + VAR54 + VAR55)] = 0;
            VAR3->VAR14 = VAR22;
            return VAR35;
        default:
            break;
        }
        break;
    case 30:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR32;
            *(VAR56 *)VAR3->VAR41 = FUN8(VAR3, VAR4.VAR9);
            VAR3->VAR33 = VAR6;
            VAR3->VAR34 = 0;
            return VAR35;
        default:
            break;
        }
        break;
    case 32:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR57 = VAR4.VAR9;
            return VAR17;
        default:
            break;
        }
        break;
    case 33:
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR58 = VAR4.VAR9;
            return VAR17;
        default:
            break;
        }
        break;
    case 38:
        switch (VAR3->VAR14)
        {
        case VAR22:
            if (VAR3->VAR42[14] & 0x30)
            {
                VAR3->VAR28 |= VAR52;
                return VAR35;
            }
            VAR3->VAR14 = VAR37;
            FUN9(VAR3);
            VAR3->VAR14 = VAR22;
            return VAR35;
        default:
            break;
        }
        break;
    case 42:
        if (VAR3->VAR16)
            goto VAR50;
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR14 = VAR47;
            VAR3->VAR33 = 0;
            VAR3->VAR34 = 0;
            return VAR17;
        default:
            break;
        }
        break;
    case 52:
    case 53:
        VAR3->VAR28 |= VAR29;
        return VAR18;
    case 55:
        if (VAR3->VAR5 != VAR5)
            return VAR18;
        VAR3->VAR28 |= VAR59;
        return VAR17;
    case 56:
        fprintf(VAR60, "", VAR4.VAR9);
        switch (VAR3->VAR14)
        {
        case VAR22:
            VAR3->VAR34 = 0;
            if (VAR4.VAR9 & 1)
                VAR3->VAR14 = VAR32;
            else
                VAR3->VAR14 = VAR47;
            return VAR17;
        default:
            break;
        }
        break;
    default:
    VAR21:
        VAR3->VAR28 |= VAR29;
        fprintf(VAR60, "", VAR4.VAR11);
        return VAR18;
    VAR50:
        VAR3->VAR28 |= VAR29;
        fprintf(VAR60, "", VAR4.VAR11);
        return VAR18;
    }
    VAR3->VAR28 |= VAR29;
    fprintf(VAR60, "", VAR4.VAR11);
    return VAR18;
}