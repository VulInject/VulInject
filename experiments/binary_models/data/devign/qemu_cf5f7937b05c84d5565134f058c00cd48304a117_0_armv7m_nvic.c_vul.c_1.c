static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, MemTxAttrs VAR5)
{
    VAR6 *VAR7 = VAR3->VAR7;
    uint32_t VAR8;
    switch (VAR4)
    {
    case 4:
        return ((VAR3->VAR9 - VAR10) / 32) - 1;
    case 0x380 ... 0x3bf:
    {
        int VAR11 = 32 * (VAR4 - 0x380) + VAR10;
        int VAR12;
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        if (!VAR5.VAR16)
        {
            return 0;
        }
        VAR8 = 0;
        for (VAR12 = 0; VAR12 < 32 && VAR11 + VAR12 < VAR3->VAR9; VAR12++)
        {
            if (VAR3->VAR17[VAR11 + VAR12])
            {
                VAR8 |= (1 << VAR12);
            }
        }
        return VAR8;
    }
    case 0xd00:
        return VAR7->VAR18;
    case 0xd04:
        VAR8 = VAR7->VAR13.VAR19.VAR20;
        VAR8 |= (VAR3->VAR21 & 0xff) << 12;
        if (FUN3(VAR3))
        {
            VAR8 |= (1 << 22);
        }
        if (FUN4(VAR3))
        {
            VAR8 |= (1 << 11);
        }
        if (VAR5.VAR16)
        {
            if (VAR3->VAR22[VAR23].VAR24)
            {
                VAR8 |= (1 << 26);
            }
            if (VAR3->VAR22[VAR25].VAR24)
            {
                VAR8 |= (1 << 28);
            }
        }
        else
        {
            if (VAR3->VAR26[VAR23].VAR24)
            {
                VAR8 |= (1 << 26);
            }
            if (VAR3->VAR26[VAR25].VAR24)
            {
                VAR8 |= (1 << 28);
            }
        }
        if ((VAR7->VAR13.VAR19.VAR27 & VAR28) && VAR3->VAR26[VAR29].VAR24)
        {
            VAR8 |= (1 << 31);
        }
        return VAR8;
    case 0xd08:
        return VAR7->VAR13.VAR19.VAR30[VAR5.VAR16];
    case 0xd0c:
        VAR8 = 0xfa050000 | (VAR3->VAR31[VAR5.VAR16] << 8);
        if (VAR5.VAR16)
        {
            VAR8 |= VAR7->VAR13.VAR19.VAR27;
        }
        else
        {
            if (FUN2(&VAR7->VAR13, VAR14))
            {
                VAR8 |= VAR7->VAR13.VAR19.VAR27 & VAR28;
            }
        }
        return VAR8;
    case 0xd10:
        return 0;
    case 0xd14:
        VAR8 = VAR7->VAR13.VAR19.VAR32[VAR5.VAR16];
        VAR8 |= VAR7->VAR13.VAR19.VAR32[VAR33] & VAR34;
        return VAR8;
    case 0xd24:
        VAR8 = 0;
        if (VAR5.VAR16)
        {
            if (VAR3->VAR22[VAR35].VAR36)
            {
                VAR8 |= (1 << 0);
            }
            if (VAR3->VAR22[VAR37].VAR36)
            {
                VAR8 |= (1 << 2);
            }
            if (VAR3->VAR22[VAR38].VAR36)
            {
                VAR8 |= (1 << 3);
            }
            if (VAR3->VAR22[VAR39].VAR36)
            {
                VAR8 |= (1 << 7);
            }
            if (VAR3->VAR22[VAR25].VAR36)
            {
                VAR8 |= (1 << 10);
            }
            if (VAR3->VAR22[VAR23].VAR36)
            {
                VAR8 |= (1 << 11);
            }
            if (VAR3->VAR22[VAR38].VAR24)
            {
                VAR8 |= (1 << 12);
            }
            if (VAR3->VAR22[VAR35].VAR24)
            {
                VAR8 |= (1 << 13);
            }
            if (VAR3->VAR22[VAR39].VAR24)
            {
                VAR8 |= (1 << 15);
            }
            if (VAR3->VAR22[VAR35].VAR40)
            {
                VAR8 |= (1 << 16);
            }
            if (VAR3->VAR22[VAR38].VAR40)
            {
                VAR8 |= (1 << 18);
            }
            if (VAR3->VAR22[VAR37].VAR24)
            {
                VAR8 |= (1 << 21);
            }
            if (VAR3->VAR26[VAR41].VAR36)
            {
                VAR8 |= (1 << 4);
            }
            if (VAR3->VAR26[VAR41].VAR40)
            {
                VAR8 |= (1 << 19);
            }
            if (VAR3->VAR26[VAR41].VAR24)
            {
                VAR8 |= (1 << 20);
            }
        }
        else
        {
            if (VAR3->VAR26[VAR35].VAR36)
            {
                VAR8 |= (1 << 0);
            }
            if (FUN2(&VAR7->VAR13, VAR14))
            {
                if (VAR3->VAR26[VAR37].VAR36)
                {
                    VAR8 |= (1 << 2);
                }
                if (VAR3->VAR26[VAR37].VAR24)
                {
                    VAR8 |= (1 << 21);
                }
            }
            if (VAR3->VAR26[VAR38].VAR36)
            {
                VAR8 |= (1 << 3);
            }
            if (VAR3->VAR26[VAR39].VAR36)
            {
                VAR8 |= (1 << 7);
            }
            if (VAR3->VAR26[VAR25].VAR36)
            {
                VAR8 |= (1 << 10);
            }
            if (VAR3->VAR26[VAR23].VAR36)
            {
                VAR8 |= (1 << 11);
            }
            if (VAR3->VAR26[VAR38].VAR24)
            {
                VAR8 |= (1 << 12);
            }
            if (VAR3->VAR26[VAR35].VAR24)
            {
                VAR8 |= (1 << 13);
            }
            if (VAR3->VAR26[VAR39].VAR24)
            {
                VAR8 |= (1 << 15);
            }
            if (VAR3->VAR26[VAR35].VAR40)
            {
                VAR8 |= (1 << 16);
            }
            if (VAR3->VAR26[VAR38].VAR40)
            {
                VAR8 |= (1 << 18);
            }
        }
        if (VAR5.VAR16 || (VAR7->VAR13.VAR19.VAR27 & VAR28))
        {
            if (VAR3->VAR26[VAR42].VAR36)
            {
                VAR8 |= (1 << 1);
            }
            if (VAR3->VAR26[VAR42].VAR24)
            {
                VAR8 |= (1 << 14);
            }
            if (VAR3->VAR26[VAR42].VAR40)
            {
                VAR8 |= (1 << 17);
            }
            if (FUN2(&VAR7->VAR13, VAR14) && VAR3->VAR26[VAR29].VAR36)
            {
                VAR8 |= (1 << 5);
            }
        }
        if (VAR3->VAR26[VAR43].VAR36)
        {
            VAR8 |= (1 << 8);
        }
        return VAR8;
    case 0xd28:
        VAR8 = VAR7->VAR13.VAR19.VAR44[VAR5.VAR16];
        VAR8 |= VAR7->VAR13.VAR19.VAR44[VAR33] & VAR45;
        return VAR8;
    case 0xd2c:
        return VAR7->VAR13.VAR19.VAR46;
    case 0xd30:
        return VAR7->VAR13.VAR19.VAR47;
    case 0xd34:
        return VAR7->VAR13.VAR19.VAR48[VAR5.VAR16];
    case 0xd38:
        return VAR7->VAR13.VAR19.VAR49;
    case 0xd3c:
        FUN5(VAR50, "");
        return 0;
    case 0xd40:
        return 0x00000030;
    case 0xd44:
        return 0x00000200;
    case 0xd48:
        return 0x00100000;
    case 0xd4c:
        return 0x00000000;
    case 0xd50:
        return 0x00000030;
    case 0xd54:
        return 0x00000000;
    case 0xd58:
        return 0x00000000;
    case 0xd5c:
        return 0x00000000;
    case 0xd60:
        return 0x01141110;
    case 0xd64:
        return 0x02111000;
    case 0xd68:
        return 0x21112231;
    case 0xd6c:
        return 0x01111110;
    case 0xd70:
        return 0x01310102;
    case 0xd90:
        return VAR7->VAR51 << 8;
        break;
    case 0xd94:
        return VAR7->VAR13.VAR19.VAR52[VAR5.VAR16];
    case 0xd98:
        return VAR7->VAR13.VAR53.VAR54[VAR5.VAR16];
    case 0xd9c:
    case 0xda4:
    case 0xdac:
    case 0xdb4:
    {
        int VAR55 = VAR7->VAR13.VAR53.VAR54[VAR5.VAR16];
        if (FUN2(&VAR7->VAR13, VAR14))
        {
            int VAR56 = (VAR4 - 0xd9c) / 8;
            if (VAR56)
            {
                VAR55 = FUN6(VAR55, 0, 2, VAR56);
            }
            if (VAR55 >= VAR7->VAR51)
            {
                return 0;
            }
            return VAR7->VAR13.VAR57.VAR58[VAR5.VAR16][VAR55];
        }
        if (VAR55 >= VAR7->VAR51)
        {
            return 0;
        }
        return (VAR7->VAR13.VAR53.VAR59[VAR55] & 0x1f) | (VAR55 & 0xf);
    }
    case 0xda0:
    case 0xda8:
    case 0xdb0:
    case 0xdb8:
    {
        int VAR55 = VAR7->VAR13.VAR53.VAR54[VAR5.VAR16];
        if (FUN2(&VAR7->VAR13, VAR14))
        {
            int VAR56 = (VAR4 - 0xda0) / 8;
            if (VAR56)
            {
                VAR55 = FUN6(VAR55, 0, 2, VAR56);
            }
            if (VAR55 >= VAR7->VAR51)
            {
                return 0;
            }
            return VAR7->VAR13.VAR57.VAR60[VAR5.VAR16][VAR55];
        }
        if (VAR55 >= VAR7->VAR51)
        {
            return 0;
        }
        return ((VAR7->VAR13.VAR53.VAR61[VAR55] & 0xffff) << 16) | (VAR7->VAR13.VAR53.VAR62[VAR55] & 0xffff);
    }
    case 0xdc0:
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        return VAR7->VAR13.VAR57.VAR63[VAR5.VAR16];
    case 0xdc4:
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        return VAR7->VAR13.VAR57.VAR64[VAR5.VAR16];
    case 0xdd0:
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        if (!VAR5.VAR16)
        {
            return 0;
        }
        return VAR7->VAR13.VAR65.VAR66;
    case 0xdd4:
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        if (!VAR5.VAR16)
        {
            return 0;
        }
        return VAR7->VAR67;
    case 0xdd8:
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        if (!VAR5.VAR16)
        {
            return 0;
        }
        return VAR7->VAR13.VAR65.VAR54;
    case 0xddc:
    {
        int VAR55 = VAR7->VAR13.VAR65.VAR54;
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        if (!VAR5.VAR16)
        {
            return 0;
        }
        if (VAR55 >= VAR7->VAR67)
        {
            return 0;
        }
        return VAR7->VAR13.VAR65.VAR58[VAR55];
    }
    case 0xde0:
    {
        int VAR55 = VAR7->VAR13.VAR65.VAR54;
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        if (!VAR5.VAR16)
        {
            return 0;
        }
        if (VAR55 >= VAR7->VAR67)
        {
            return 0;
        }
        return VAR7->VAR13.VAR65.VAR60[VAR55];
    }
    case 0xde4:
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        if (!VAR5.VAR16)
        {
            return 0;
        }
        return VAR7->VAR13.VAR19.VAR68;
    case 0xde8:
        if (!FUN2(&VAR7->VAR13, VAR14))
        {
            goto VAR15;
        }
        if (!VAR5.VAR16)
        {
            return 0;
        }
        return VAR7->VAR13.VAR19.VAR69;
    default:
    VAR15:
        FUN5(VAR70, "", VAR4);
        return 0;
    }
}