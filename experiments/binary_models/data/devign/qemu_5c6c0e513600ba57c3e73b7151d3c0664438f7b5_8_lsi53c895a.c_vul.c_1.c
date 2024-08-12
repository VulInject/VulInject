static void FUN1(VAR1 *VAR2)
{
    uint8_t VAR3;
    int VAR4;
    uint32_t VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11;
    if (VAR2->VAR12)
    {
        VAR5 = VAR2->VAR12->VAR13;
    }
    else
    {
        VAR5 = VAR2->VAR14;
    }
    VAR11 = (VAR5 >> 8) & 0xf;
    VAR7 = VAR2->VAR15.VAR16[VAR11];
    FUN2("", VAR2->VAR17);
    while (VAR2->VAR17)
    {
        VAR3 = FUN3(VAR2);
        VAR2->VAR18 = VAR3;
        switch (VAR3)
        {
        case 0x04:
            FUN2("");
            FUN4(VAR2);
            break;
        case 0x08:
            FUN2("");
            FUN5(VAR2, VAR19);
            break;
        case 0x01:
            VAR4 = FUN3(VAR2);
            VAR3 = FUN3(VAR2);
            (void)VAR4;
            FUN2("", VAR3, VAR4);
            switch (VAR3)
            {
            case 1:
                FUN2("");
                FUN6(VAR2, 2);
                break;
            case 3:
                FUN2("");
                FUN6(VAR2, 1);
                break;
            default:
                goto VAR20;
            }
            break;
        case 0x20:
            VAR2->VAR14 |= FUN3(VAR2) | VAR21;
            FUN2("", VAR2->VAR14 & 0xff);
            break;
        case 0x21:
            FUN7("");
            VAR2->VAR14 |= FUN3(VAR2) | VAR21;
            break;
        case 0x22:
            FUN7("");
            VAR2->VAR14 |= FUN3(VAR2) | VAR21;
            break;
        case 0x0d:
            FUN2("", VAR5);
            VAR7->VAR22->FUN8(VAR7, VAR5);
            FUN4(VAR2);
            break;
        case 0x06:
        case 0x0e:
        case 0x0c:
            if (VAR3 == 0x06)
            {
                FUN2("", VAR5);
            }
            if (VAR3 == 0x0e)
            {
                FUN2("", VAR5);
            }
            if (VAR3 == 0x0c)
            {
                FUN2("", VAR5);
            }
            VAR7->VAR22->FUN8(VAR7, VAR5);
            VAR11 = VAR5 & 0x0000ff00;
            FUN9(VAR9, &VAR2->VAR23, VAR24, VAR10)
            {
                if ((VAR9->VAR13 & 0x0000ff00) == VAR11)
                {
                    VAR7->VAR22->FUN8(VAR7, VAR9->VAR13);
                    FUN10(&VAR2->VAR23, VAR9, VAR24);
                }
            }
            FUN4(VAR2);
            break;
        default:
            if ((VAR3 & 0x80) == 0)
            {
                goto VAR20;
            }
            VAR2->VAR25 = VAR3 & 7;
            FUN2("", VAR2->VAR25);
            FUN5(VAR2, VAR19);
            break;
        }
    }
    return;
VAR20:
    FUN7("", VAR3);
    FUN5(VAR2, VAR26);
    FUN11(VAR2, 7);
    VAR2->VAR27 = 0;
}