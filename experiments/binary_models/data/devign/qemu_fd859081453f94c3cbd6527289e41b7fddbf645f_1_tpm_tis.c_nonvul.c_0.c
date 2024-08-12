static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4, bool VAR5)
{
    VAR6 *VAR7 = VAR1;
    VAR8 *VAR9 = &VAR7->VAR7.VAR9;
    uint16_t VAR10 = VAR2 & 0xffc;
    uint8_t VAR11 = (VAR2 & 0x3) * 8;
    uint8_t VAR12 = FUN2(VAR2);
    uint8_t VAR13, VAR14;
    int VAR15, VAR16 = 1;
    uint16_t VAR17;
    uint32_t VAR18 = (VAR4 == 1) ? 0xff : ((VAR4 == 2) ? 0xffff : ~0);
    FUN3("", VAR4, (int)VAR2, (VAR19)VAR3);
    if (VAR12 == 4 && !VAR5)
    {
        FUN3("");
        return;
    }
    if (FUN4(VAR7->VAR20))
    {
        return;
    }
    VAR3 &= VAR18;
    if (VAR11)
    {
        VAR3 <<= VAR11;
        VAR18 <<= VAR11;
    }
    VAR18 ^= 0xffffffff;
    switch (VAR10)
    {
    case VAR21:
        if ((VAR3 & VAR22))
        {
            VAR3 &= ~(VAR23 | VAR24);
        }
        VAR13 = VAR9->VAR13;
        if ((VAR3 & VAR24))
        {
            if (VAR9->VAR13 == VAR12)
            {
                FUN3("", VAR12);
                uint8_t VAR25 = VAR26;
                for (VAR15 = VAR27 - 1; VAR15 >= 0; VAR15--)
                {
                    if ((VAR9->VAR28[VAR15].VAR29 & VAR23))
                    {
                        FUN3("", VAR15);
                        VAR25 = VAR15;
                        break;
                    }
                }
                FUN3(""
                        "",
                        VAR25);
                if (FUN5(VAR25))
                {
                    VAR16 = 0;
                    FUN6(VAR7, VAR12, VAR25);
                }
                else
                {
                    VAR13 = VAR26;
                }
            }
            else
            {
                VAR9->VAR28[VAR12].VAR29 &= ~VAR23;
            }
        }
        if ((VAR3 & VAR30))
        {
            VAR9->VAR28[VAR12].VAR29 &= ~VAR30;
        }
        if ((VAR3 & VAR22))
        {
            while ((FUN5(VAR9->VAR13) && VAR12 > VAR9->VAR13) || !FUN5(VAR9->VAR13))
            {
                bool VAR31 = VAR32;
                if ((VAR9->VAR28[VAR12].VAR29 & VAR22))
                {
                    break;
                }
                for (VAR14 = VAR12 + 1; VAR14 < VAR27; VAR14++)
                {
                    if ((VAR9->VAR28[VAR14].VAR29 & VAR22))
                    {
                        VAR31 = VAR33;
                        break;
                    }
                }
                if (VAR31)
                {
                    break;
                }
                for (VAR14 = 0; VAR14 < VAR12 - 1; VAR14++)
                {
                    VAR9->VAR28[VAR14].VAR29 &= ~VAR22;
                }
                VAR9->VAR28[VAR12].VAR29 |= VAR22;
                FUN3(""
                        "",
                        VAR12, VAR9->VAR13);
                FUN3("");
                VAR16 = 0;
                FUN6(VAR7, VAR9->VAR13, VAR12);
                break;
            }
        }
        if ((VAR3 & VAR23))
        {
            if (VAR9->VAR13 != VAR12)
            {
                if (FUN5(VAR9->VAR13))
                {
                    VAR9->VAR28[VAR12].VAR29 |= VAR23;
                }
                else
                {
                    VAR13 = VAR12;
                }
            }
        }
        if (VAR16)
        {
            FUN7(VAR7, VAR13);
        }
        break;
    case VAR34:
        if (VAR9->VAR13 != VAR12)
        {
            break;
        }
        VAR9->VAR28[VAR12].VAR35 &= VAR18;
        VAR9->VAR28[VAR12].VAR35 |= (VAR3 & (VAR36 | VAR37 | VAR38));
        break;
    case VAR39:
        break;
    case VAR40:
        if (VAR9->VAR13 != VAR12)
        {
            break;
        }
        if (((VAR3 & VAR38)) && (VAR9->VAR28[VAR12].VAR41 & VAR38))
        {
            VAR9->VAR28[VAR12].VAR41 &= ~VAR3;
            if (VAR9->VAR28[VAR12].VAR41 == 0)
            {
                FUN8(VAR9->VAR42);
                FUN3("");
            }
        }
        VAR9->VAR28[VAR12].VAR41 &= ~(VAR3 & VAR38);
        break;
    case VAR43:
        if (VAR9->VAR13 != VAR12)
        {
            break;
        }
        VAR3 &= (VAR44 | VAR45 | VAR46);
        if (VAR3 == VAR44)
        {
            switch (VAR9->VAR28[VAR12].VAR47)
            {
            case VAR48:
                VAR9->VAR28[VAR12].VAR49 = 0;
                VAR9->VAR28[VAR12].VAR50 = 0;
                break;
            case VAR51:
                FUN9(&VAR9->VAR28[VAR12], VAR44);
                VAR9->VAR28[VAR12].VAR47 = VAR48;
                FUN10(VAR7, VAR12, VAR52);
                break;
            case VAR53:
            case VAR54:
                FUN3("", VAR55);
                FUN6(VAR7, VAR12, VAR12);
                break;
            case VAR56:
                VAR9->VAR28[VAR12].VAR49 = 0;
                VAR9->VAR28[VAR12].VAR50 = 0;
                VAR9->VAR28[VAR12].VAR47 = VAR48;
                if (!(VAR9->VAR28[VAR12].VAR57 & VAR44))
                {
                    FUN9(&VAR9->VAR28[VAR12], VAR44);
                    FUN10(VAR7, VAR12, VAR52);
                }
                VAR9->VAR28[VAR12].VAR57 &= ~(VAR58);
                break;
            }
        }
        else if (VAR3 == VAR45)
        {
            switch (VAR9->VAR28[VAR12].VAR47)
            {
            case VAR54:
                if ((VAR9->VAR28[VAR12].VAR57 & VAR59) == 0)
                {
                    FUN11(VAR7, VAR12);
                }
                break;
            default:
                break;
            }
        }
        else if (VAR3 == VAR46)
        {
            switch (VAR9->VAR28[VAR12].VAR47)
            {
            case VAR56:
                VAR9->VAR28[VAR12].VAR50 = 0;
                FUN9(&VAR9->VAR28[VAR12], VAR60 | VAR58);
                break;
            default:
                break;
            }
        }
        break;
    case VAR61:
    case VAR62 ... VAR63:
        if (VAR9->VAR13 != VAR12)
        {
            break;
        }
        if (VAR9->VAR28[VAR12].VAR47 == VAR51 || VAR9->VAR28[VAR12].VAR47 == VAR53 || VAR9->VAR28[VAR12].VAR47 == VAR56)
        {
        }
        else
        {
            FUN3("", VAR3, VAR4);
            if (VAR9->VAR28[VAR12].VAR47 == VAR48)
            {
                VAR9->VAR28[VAR12].VAR47 = VAR54;
                FUN9(&VAR9->VAR28[VAR12], VAR59 | VAR60);
            }
            VAR3 >>= VAR11;
            if (VAR4 > 4 - (VAR2 & 0x3))
            {
                VAR4 = 4 - (VAR2 & 0x3);
            }
            while ((VAR9->VAR28[VAR12].VAR57 & VAR59) && VAR4 > 0)
            {
                if (VAR9->VAR28[VAR12].VAR49 < VAR9->VAR28[VAR12].VAR64.VAR4)
                {
                    VAR9->VAR28[VAR12].VAR64.VAR65[VAR9->VAR28[VAR12].VAR49++] = (VAR66)VAR3;
                    VAR3 >>= 8;
                    VAR4--;
                }
                else
                {
                    FUN9(&VAR9->VAR28[VAR12], VAR60);
                }
            }
            if (VAR9->VAR28[VAR12].VAR49 > 5 && (VAR9->VAR28[VAR12].VAR57 & VAR59))
            {
                bool VAR67 = !(VAR9->VAR28[VAR12].VAR57 & VAR60);
                VAR17 = FUN12(&VAR9->VAR28[VAR12].VAR64);
                if (VAR17 > VAR9->VAR28[VAR12].VAR49)
                {
                    FUN9(&VAR9->VAR28[VAR12], VAR59 | VAR60);
                }
                else
                {
                    FUN9(&VAR9->VAR28[VAR12], VAR60);
                }
                if (VAR67)
                {
                    FUN10(VAR7, VAR12, VAR68);
                }
            }
        }
        break;
    }
}