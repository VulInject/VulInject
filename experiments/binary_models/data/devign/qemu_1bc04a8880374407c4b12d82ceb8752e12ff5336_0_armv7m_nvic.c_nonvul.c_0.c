static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, MemTxAttrs VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    switch (VAR3)
    {
    case 0xd04:
        if (VAR4 & (1 << 31))
        {
            FUN2(VAR2, VAR8);
        }
        if (VAR4 & (1 << 28))
        {
            FUN2(VAR2, VAR9);
        }
        else if (VAR4 & (1 << 27))
        {
            FUN3(VAR2, VAR9);
        }
        if (VAR4 & (1 << 26))
        {
            FUN2(VAR2, VAR10);
        }
        else if (VAR4 & (1 << 25))
        {
            FUN3(VAR2, VAR10);
        }
        break;
    case 0xd08:
        VAR7->VAR11.VAR12.VAR13[VAR5.VAR14] = VAR4 & 0xffffff80;
        break;
    case 0xd0c:
        if ((VAR4 >> 16) == 0x05fa)
        {
            if (VAR4 & 4)
            {
                FUN4(VAR2->VAR15);
            }
            if (VAR4 & 2)
            {
                FUN5(VAR16, ""
                                               "");
            }
            if (VAR4 & 1)
            {
                FUN5(VAR16, ""
                                               "");
            }
            VAR2->VAR17 = FUN6(VAR4, 8, 3);
            FUN7(VAR2);
        }
        break;
    case 0xd10:
        FUN5(VAR18, "");
        break;
    case 0xd14:
        VAR4 &= (VAR19 | VAR20 | VAR21 | VAR22 | VAR23 | VAR24);
        VAR7->VAR11.VAR12.VAR25 = VAR4;
        break;
    case 0xd24:
        VAR2->VAR26[VAR27].VAR28 = (VAR4 & (1 << 0)) != 0;
        VAR2->VAR26[VAR29].VAR28 = (VAR4 & (1 << 1)) != 0;
        VAR2->VAR26[VAR30].VAR28 = (VAR4 & (1 << 3)) != 0;
        VAR2->VAR26[VAR31].VAR28 = (VAR4 & (1 << 7)) != 0;
        VAR2->VAR26[VAR32].VAR28 = (VAR4 & (1 << 8)) != 0;
        VAR2->VAR26[VAR9].VAR28 = (VAR4 & (1 << 10)) != 0;
        VAR2->VAR26[VAR10].VAR28 = (VAR4 & (1 << 11)) != 0;
        VAR2->VAR26[VAR30].VAR33 = (VAR4 & (1 << 12)) != 0;
        VAR2->VAR26[VAR27].VAR33 = (VAR4 & (1 << 13)) != 0;
        VAR2->VAR26[VAR29].VAR33 = (VAR4 & (1 << 14)) != 0;
        VAR2->VAR26[VAR31].VAR33 = (VAR4 & (1 << 15)) != 0;
        VAR2->VAR26[VAR27].VAR34 = (VAR4 & (1 << 16)) != 0;
        VAR2->VAR26[VAR29].VAR34 = (VAR4 & (1 << 17)) != 0;
        VAR2->VAR26[VAR30].VAR34 = (VAR4 & (1 << 18)) != 0;
        FUN7(VAR2);
        break;
    case 0xd28:
        VAR7->VAR11.VAR12.VAR35 &= ~VAR4;
        break;
    case 0xd2c:
        VAR7->VAR11.VAR12.VAR36 &= ~VAR4;
        break;
    case 0xd30:
        VAR7->VAR11.VAR12.VAR37 &= ~VAR4;
        break;
    case 0xd34:
        VAR7->VAR11.VAR12.VAR38 = VAR4;
        return;
    case 0xd38:
        VAR7->VAR11.VAR12.VAR39 = VAR4;
        return;
    case 0xd3c:
        FUN5(VAR18, "");
        break;
    case 0xd90:
        return;
    case 0xd94:
        if ((VAR4 & (VAR40 | VAR41)) == VAR40)
        {
            FUN5(VAR16, ""
                                           "");
        }
        VAR7->VAR11.VAR12.VAR42 = VAR4 & (VAR41 | VAR40 | VAR43);
        FUN8(FUN9(VAR7));
        break;
    case 0xd98:
        if (VAR4 >= VAR7->VAR44)
        {
            FUN5(VAR16, "" VAR45 "" VAR45 "", VAR4, VAR7->VAR44);
        }
        else
        {
            VAR7->VAR11.VAR46.VAR47[VAR5.VAR14] = VAR4;
        }
        break;
    case 0xd9c:
    case 0xda4:
    case 0xdac:
    case 0xdb4:
    {
        int VAR48;
        if (FUN10(&VAR7->VAR11, VAR49))
        {
            int VAR50 = (VAR3 - 0xd9c) / 8;
            VAR48 = VAR7->VAR11.VAR46.VAR47[VAR5.VAR14];
            if (VAR50)
            {
                VAR48 = FUN11(VAR48, 0, 2, VAR50);
            }
            if (VAR48 >= VAR7->VAR44)
            {
                return;
            }
            VAR7->VAR11.VAR51.VAR52[VAR5.VAR14][VAR48] = VAR4;
            FUN8(FUN9(VAR7));
            return;
        }
        if (VAR4 & (1 << 4))
        {
            VAR48 = FUN6(VAR4, 0, 4);
            if (VAR48 >= VAR7->VAR44)
            {
                FUN5(VAR16, "" VAR45 "", VAR48, VAR7->VAR44);
                return;
            }
            VAR7->VAR11.VAR46.VAR47[VAR5.VAR14] = VAR48;
        }
        else
        {
            VAR48 = VAR7->VAR11.VAR46.VAR47[VAR5.VAR14];
        }
        if (VAR48 >= VAR7->VAR44)
        {
            return;
        }
        VAR7->VAR11.VAR46.VAR53[VAR48] = VAR4 & ~0x1f;
        FUN8(FUN9(VAR7));
        break;
    }
    case 0xda0:
    case 0xda8:
    case 0xdb0:
    case 0xdb8:
    {
        int VAR48 = VAR7->VAR11.VAR46.VAR47[VAR5.VAR14];
        if (FUN10(&VAR7->VAR11, VAR49))
        {
            int VAR50 = (VAR3 - 0xd9c) / 8;
            VAR48 = VAR7->VAR11.VAR46.VAR47[VAR5.VAR14];
            if (VAR50)
            {
                VAR48 = FUN11(VAR48, 0, 2, VAR50);
            }
            if (VAR48 >= VAR7->VAR44)
            {
                return;
            }
            VAR7->VAR11.VAR51.VAR54[VAR5.VAR14][VAR48] = VAR4;
            FUN8(FUN9(VAR7));
            return;
        }
        if (VAR48 >= VAR7->VAR44)
        {
            return;
        }
        VAR7->VAR11.VAR46.VAR55[VAR48] = VAR4 & 0xff3f;
        VAR7->VAR11.VAR46.VAR56[VAR48] = (VAR4 >> 16) & 0x173f;
        FUN8(FUN9(VAR7));
        break;
    }
    case 0xdc0:
        if (!FUN10(&VAR7->VAR11, VAR49))
        {
            goto VAR57;
        }
        if (VAR7->VAR44)
        {
            VAR7->VAR11.VAR51.VAR58[VAR5.VAR14] = VAR4;
        }
        break;
    case 0xdc4:
        if (!FUN10(&VAR7->VAR11, VAR49))
        {
            goto VAR57;
        }
        if (VAR7->VAR44)
        {
            VAR7->VAR11.VAR51.VAR59[VAR5.VAR14] = VAR4;
        }
        break;
    case 0xf00:
    {
        int VAR60 = (VAR4 & 0x1ff) + VAR61;
        if (VAR60 < VAR2->VAR62)
        {
            FUN2(VAR2, VAR60);
        }
        break;
    }
    default:
    VAR57:
        FUN5(VAR16, "", VAR3);
    }
}