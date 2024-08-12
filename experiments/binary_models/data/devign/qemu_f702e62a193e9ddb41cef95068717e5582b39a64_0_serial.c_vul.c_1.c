static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR2 &= 7;
    FUN2("" VAR7 "" VAR8 "", VAR2, VAR3);
    switch (VAR2)
    {
    default:
    case 0:
        if (VAR6->VAR9 & VAR10)
        {
            VAR6->VAR11 = (VAR6->VAR11 & 0xff00) | VAR3;
            FUN3(VAR6);
        }
        else
        {
            VAR6->VAR12 = (VAR13)VAR3;
            if (VAR6->VAR14 & VAR15)
            {
                if (FUN4(&VAR6->VAR16))
                {
                    FUN5(&VAR6->VAR16);
                }
                FUN6(&VAR6->VAR16, VAR6->VAR12);
                VAR6->VAR17 &= ~VAR18;
            }
            VAR6->VAR19 = 0;
            VAR6->VAR17 &= ~VAR20;
            FUN7(VAR6);
            FUN8(NULL, VAR21, VAR6);
        }
        break;
    case 1:
        if (VAR6->VAR9 & VAR10)
        {
            VAR6->VAR11 = (VAR6->VAR11 & 0x00ff) | (VAR3 << 8);
            FUN3(VAR6);
        }
        else
        {
            VAR6->VAR22 = VAR3 & 0x0f;
            if (VAR6->VAR23 >= 0)
            {
                if (VAR6->VAR22 & VAR24)
                {
                    VAR6->VAR23 = 1;
                    FUN9(VAR6);
                }
                else
                {
                    FUN10(VAR6->VAR25);
                    VAR6->VAR23 = 0;
                }
            }
            if (VAR6->VAR17 & VAR20)
            {
                VAR6->VAR19 = 1;
                FUN7(VAR6);
            }
        }
        break;
    case 2:
        VAR3 = VAR3 & 0xFF;
        if (VAR6->VAR14 == VAR3)
            break;
        if ((VAR3 ^ VAR6->VAR14) & VAR15)
            VAR3 |= VAR26 | VAR27;
        if (VAR3 & VAR27)
        {
            FUN10(VAR6->VAR28);
            VAR6->VAR29 = 0;
            FUN11(&VAR6->VAR30);
        }
        if (VAR3 & VAR26)
        {
            FUN11(&VAR6->VAR16);
        }
        if (VAR3 & VAR15)
        {
            VAR6->VAR31 |= VAR32;
            switch (VAR3 & 0xC0)
            {
            case VAR33:
                VAR6->VAR34 = 1;
                break;
            case VAR35:
                VAR6->VAR34 = 4;
                break;
            case VAR36:
                VAR6->VAR34 = 8;
                break;
            case VAR37:
                VAR6->VAR34 = 14;
                break;
            }
        }
        else
            VAR6->VAR31 &= ~VAR32;
        VAR6->VAR14 = VAR3 & 0xC9;
        FUN7(VAR6);
        break;
    case 3:
    {
        int VAR38;
        VAR6->VAR9 = VAR3;
        FUN3(VAR6);
        VAR38 = (VAR3 >> 6) & 1;
        if (VAR38 != VAR6->VAR39)
        {
            VAR6->VAR39 = VAR38;
            FUN12(VAR6->VAR40, VAR41, &VAR38);
        }
    }
    break;
    case 4:
    {
        int VAR42;
        int VAR43 = VAR6->VAR44;
        VAR6->VAR44 = VAR3 & 0x1f;
        if (VAR3 & VAR45)
            break;
        if (VAR6->VAR23 >= 0 && VAR43 != VAR6->VAR44)
        {
            FUN12(VAR6->VAR40, VAR46, &VAR42);
            VAR42 &= ~(VAR47 | VAR48);
            if (VAR3 & VAR49)
                VAR42 |= VAR47;
            if (VAR3 & VAR50)
                VAR42 |= VAR48;
            FUN12(VAR6->VAR40, VAR51, &VAR42);
            FUN13(VAR6->VAR25, FUN14(VAR52) + VAR6->VAR53);
        }
    }
    break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        VAR6->VAR54 = VAR3;
        break;
    }
}