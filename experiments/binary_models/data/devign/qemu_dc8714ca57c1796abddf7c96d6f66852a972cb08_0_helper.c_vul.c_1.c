void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8;
    VAR6 = (VAR4 >> 21) & 7;
    VAR7 = (VAR4 >> 5) & 7;
    VAR8 = VAR4 & 0xf;
    switch ((VAR4 >> 16) & 0xf)
    {
    case 0:
        if (FUN2(VAR3, VAR9))
            break;
        if (FUN2(VAR3, VAR10))
            break;
        if (FUN2(VAR3, VAR11) && VAR6 == 2 && VAR8 == 0 && VAR7 == 0)
        {
            VAR3->VAR12.VAR13 = VAR5 & 0xf;
            break;
        }
        goto VAR14;
    case 1:
        if (FUN2(VAR3, VAR11) && VAR6 == 0 && VAR8 == 1 && VAR7 == 0)
        {
            VAR3->VAR12.VAR15 = VAR5;
            break;
        }
        if (FUN2(VAR3, VAR10))
            VAR7 = 0;
        switch (VAR7)
        {
        case 0:
            if (!FUN2(VAR3, VAR9) || VAR8 == 0)
                VAR3->VAR12.VAR16 = VAR5;
            FUN3(VAR3, 1);
            break;
        case 1:
            if (FUN2(VAR3, VAR9))
            {
                VAR3->VAR12.VAR17 = VAR5;
                break;
            }
            break;
        case 2:
            if (FUN2(VAR3, VAR9))
                goto VAR14;
            if (VAR3->VAR12.VAR18 != VAR5)
            {
                VAR3->VAR12.VAR18 = VAR5;
                FUN4(VAR3);
            }
            break;
        default:
            goto VAR14;
        }
        break;
    case 2:
        if (FUN2(VAR3, VAR19))
        {
            switch (VAR7)
            {
            case 0:
                VAR3->VAR12.VAR20 = VAR5;
                break;
            case 1:
                VAR3->VAR12.VAR21 = VAR5;
                break;
            default:
                goto VAR14;
            }
        }
        else
        {
            switch (VAR7)
            {
            case 0:
                VAR3->VAR12.VAR22 = VAR5;
                break;
            case 1:
                VAR3->VAR12.VAR23 = VAR5;
                break;
            case 2:
                VAR5 &= 7;
                VAR3->VAR12.VAR24 = VAR5;
                VAR3->VAR12.VAR25 = ~(((VAR26)0xffffffffu) >> VAR5);
                VAR3->VAR12.VAR27 = ~((VAR26)0x3fffu >> VAR5);
                break;
            default:
                goto VAR14;
            }
        }
        break;
    case 3:
        VAR3->VAR12.VAR28 = VAR5;
        FUN3(VAR3, 1);
        break;
    case 4:
        goto VAR14;
    case 5:
        if (FUN2(VAR3, VAR10))
            VAR7 = 0;
        switch (VAR7)
        {
        case 0:
            if (FUN2(VAR3, VAR19))
                VAR5 = FUN5(VAR5);
            VAR3->VAR12.VAR29 = VAR5;
            break;
        case 1:
            if (FUN2(VAR3, VAR19))
                VAR5 = FUN5(VAR5);
            VAR3->VAR12.VAR30 = VAR5;
            break;
        case 2:
            if (!FUN2(VAR3, VAR19))
                goto VAR14;
            VAR3->VAR12.VAR29 = VAR5;
            break;
        case 3:
            if (!FUN2(VAR3, VAR19))
                goto VAR14;
            VAR3->VAR12.VAR30 = VAR5;
            break;
        default:
            goto VAR14;
        }
        break;
    case 6:
        if (FUN2(VAR3, VAR19))
        {
            if (VAR8 >= 8)
                goto VAR14;
            VAR3->VAR12.VAR31[VAR8] = VAR5;
        }
        else
        {
            if (FUN2(VAR3, VAR10))
                VAR7 = 0;
            switch (VAR7)
            {
            case 0:
                VAR3->VAR12.VAR32 = VAR5;
                break;
            case 1:
            case 2:
                VAR3->VAR12.VAR33 = VAR5;
                break;
            default:
                goto VAR14;
            }
        }
        break;
    case 7:
        VAR3->VAR12.VAR34 = 0x000;
        VAR3->VAR12.VAR35 = 0xff0;
        if (VAR6 != 0)
        {
            goto VAR14;
        }
        if (FUN2(VAR3, VAR36))
        {
            switch (VAR8)
            {
            case 4:
                if (FUN2(VAR3, VAR11))
                {
                    VAR3->VAR12.VAR37 = VAR5 & 0xfffff6ff;
                }
                else
                {
                    VAR3->VAR12.VAR37 = VAR5 & 0xfffff1ff;
                }
                break;
            case 8:
            {
                uint32_t VAR38;
                target_ulong VAR39;
                int VAR40;
                int VAR41, VAR42 = VAR7 & 2;
                int VAR43 = VAR7 & 1;
                if (VAR7 & 4)
                {
                    goto VAR14;
                }
                VAR41 = FUN6(VAR3, VAR5, VAR43, VAR42, &VAR38, &VAR40, &VAR39);
                if (VAR41 == 0)
                {
                    if (VAR39 == (1 << 24) && FUN2(VAR3, VAR11))
                    {
                        VAR3->VAR12.VAR37 = (VAR38 & 0xff000000) | 1 << 1;
                    }
                    else
                    {
                        VAR3->VAR12.VAR37 = VAR38 & 0xfffff000;
                    }
                }
                else
                {
                    VAR3->VAR12.VAR37 = ((VAR41 & (10 << 1)) >> 5) | ((VAR41 & (12 << 1)) >> 6) | ((VAR41 & 0xf) << 1) | 1;
                }
                break;
            }
            }
        }
        break;
    case 8:
        switch (VAR7)
        {
        case 0:
            FUN3(VAR3, 0);
            break;
        case 1:
            FUN7(VAR3, VAR5 & VAR44);
            break;
        case 2:
            FUN3(VAR3, VAR5 == 0);
            break;
        case 3:
            FUN3(VAR3, 1);
            break;
        default:
            goto VAR14;
        }
        break;
    case 9:
        if (FUN2(VAR3, VAR10))
            break;
        if (FUN2(VAR3, VAR45))
            break;
        switch (VAR8)
        {
        case 0:
            switch (VAR6)
            {
            case 0:
                switch (VAR7)
                {
                case 0:
                    VAR3->VAR12.VAR46 = VAR5;
                    break;
                case 1:
                    VAR3->VAR12.VAR47 = VAR5;
                    break;
                default:
                    goto VAR14;
                }
                break;
            case 1:
                break;
            default:
                goto VAR14;
            }
            break;
        case 1:
            goto VAR14;
        case 12:
            if (!FUN2(VAR3, VAR11))
            {
                goto VAR14;
            }
            switch (VAR7)
            {
            case 0:
                VAR3->VAR12.VAR48 &= ~0x39;
                VAR3->VAR12.VAR48 |= (VAR5 & 0x39);
                break;
            case 1:
                VAR5 &= (1 << 31);
                VAR3->VAR12.VAR49 |= VAR5;
                break;
            case 2:
                VAR5 &= (1 << 31);
                VAR3->VAR12.VAR49 &= ~VAR5;
                break;
            case 3:
                VAR3->VAR12.VAR50 &= ~VAR5;
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                goto VAR14;
            }
            break;
        case 13:
            if (!FUN2(VAR3, VAR11))
            {
                goto VAR14;
            }
            switch (VAR7)
            {
            case 0:
                break;
            case 1:
                VAR3->VAR12.VAR51 = VAR5 & 0xff;
                break;
            case 2:
                break;
            default:
                goto VAR14;
            }
            break;
        case 14:
            if (!FUN2(VAR3, VAR11))
            {
                goto VAR14;
            }
            switch (VAR7)
            {
            case 0:
                VAR3->VAR12.VAR52 = VAR5 & 1;
                FUN4(VAR3);
                break;
            case 1:
                VAR5 &= (1 << 31);
                VAR3->VAR12.VAR53 |= VAR5;
                break;
            case 2:
                VAR5 &= (1 << 31);
                VAR3->VAR12.VAR53 &= ~VAR5;
                break;
            }
            break;
        default:
            goto VAR14;
        }
        break;
    case 10:
        break;
    case 12:
        goto VAR14;
    case 13:
        switch (VAR7)
        {
        case 0:
            if (VAR3->VAR12.VAR54 != VAR5)
                FUN3(VAR3, 1);
            VAR3->VAR12.VAR54 = VAR5;
            break;
        case 1:
            if (VAR3->VAR12.VAR55 != VAR5 && !FUN2(VAR3, VAR19))
                FUN3(VAR3, 0);
            VAR3->VAR12.VAR55 = VAR5;
            break;
        default:
            goto VAR14;
        }
        break;
    case 14:
        goto VAR14;
    case 15:
        if (FUN2(VAR3, VAR9))
        {
            if (VAR7 == 0 && VAR8 == 1)
            {
                if (VAR3->VAR12.VAR56 != (VAR5 & 0x3fff))
                {
                    FUN4(VAR3);
                    VAR3->VAR12.VAR56 = VAR5 & 0x3fff;
                }
                break;
            }
            goto VAR14;
        }
        if (FUN2(VAR3, VAR10))
        {
            switch (VAR8)
            {
            case 0:
                break;
            case 1:
                VAR3->VAR12.VAR57 = VAR5 & 0xe7;
                VAR3->VAR12.VAR58 = (VAR5 & (1 << 5)) ? VAR59 : VAR60;
                break;
            case 2:
                VAR3->VAR12.VAR34 = VAR5;
                break;
            case 3:
                VAR3->VAR12.VAR35 = VAR5;
                break;
            case 4:
                VAR3->VAR12.VAR61 = VAR5 & 0xffff;
                break;
            case 8:
                FUN8(VAR3, VAR62);
                break;
            default:
                goto VAR14;
            }
        }
        if (FUN9(VAR3) == VAR63)
        {
            switch (VAR8)
            {
            case 0:
                if ((VAR6 == 0) && (VAR7 == 0))
                {
                    VAR3->VAR12.VAR64 = VAR5;
                }
                else if ((VAR6 == 0) && (VAR7 == 1))
                {
                    VAR3->VAR12.VAR65 = VAR5;
                }
                else if ((VAR6 == 0) && (VAR7 == 2))
                {
                    VAR3->VAR12.VAR66 = VAR5;
                }
            default:
                break;
            }
        }
        break;
    }
    return;
VAR14:
    FUN10(VAR3, "", (VAR4 >> 16) & 0xf, VAR8, VAR6, VAR7);
}