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
            }
            VAR6->VAR17 = 0;
            VAR6->VAR18 &= ~VAR19;
            VAR6->VAR18 &= ~VAR20;
            FUN7(VAR6);
            if (VAR6->VAR21 == 0)
            {
                FUN8(NULL, VAR22, VAR6);
            }
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
            uint8_t VAR23 = (VAR6->VAR24 ^ VAR3) & 0x0f;
            VAR6->VAR24 = VAR3 & 0x0f;
            if ((VAR23 & VAR25) && VAR6->VAR26 >= 0)
            {
                if (VAR6->VAR24 & VAR25)
                {
                    VAR6->VAR26 = 1;
                    FUN9(VAR6);
                }
                else
                {
                    FUN10(VAR6->VAR27);
                    VAR6->VAR26 = 0;
                }
            }
            if (VAR23 & VAR28)
            {
                if ((VAR6->VAR24 & VAR28) && (VAR6->VAR18 & VAR19))
                {
                    VAR6->VAR17 = 1;
                }
                else
                {
                    VAR6->VAR17 = 0;
                }
            }
            if (VAR23)
            {
                FUN7(VAR6);
            }
        }
        break;
    case 2:
        if ((VAR3 ^ VAR6->VAR14) & VAR15)
        {
            VAR3 |= VAR29 | VAR30;
        }
        if (VAR3 & VAR30)
        {
            VAR6->VAR18 &= ~(VAR31 | VAR32);
            FUN10(VAR6->VAR33);
            VAR6->VAR34 = 0;
            FUN11(&VAR6->VAR35);
        }
        if (VAR3 & VAR29)
        {
            VAR6->VAR18 |= VAR19;
            VAR6->VAR17 = 1;
            FUN11(&VAR6->VAR16);
        }
        FUN12(VAR6, VAR3 & 0xC9);
        FUN7(VAR6);
        break;
    case 3:
    {
        int VAR36;
        VAR6->VAR9 = VAR3;
        FUN3(VAR6);
        VAR36 = (VAR3 >> 6) & 1;
        if (VAR36 != VAR6->VAR37)
        {
            VAR6->VAR37 = VAR36;
            FUN13(VAR6->VAR38, VAR39, &VAR36);
        }
    }
    break;
    case 4:
    {
        int VAR40;
        int VAR41 = VAR6->VAR42;
        VAR6->VAR42 = VAR3 & 0x1f;
        if (VAR3 & VAR43)
            break;
        if (VAR6->VAR26 >= 0 && VAR41 != VAR6->VAR42)
        {
            FUN13(VAR6->VAR38, VAR44, &VAR40);
            VAR40 &= ~(VAR45 | VAR46);
            if (VAR3 & VAR47)
                VAR40 |= VAR45;
            if (VAR3 & VAR48)
                VAR40 |= VAR46;
            FUN13(VAR6->VAR38, VAR49, &VAR40);
            FUN14(VAR6->VAR27, FUN15(VAR50) + VAR6->VAR51);
        }
    }
    break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        VAR6->VAR52 = VAR3;
        break;
    }
}