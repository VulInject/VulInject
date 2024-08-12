static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, MemTxAttrs VAR5)
{
    VAR6 *VAR7 = VAR3->VAR7;
    uint32_t VAR8;
    switch (VAR4)
    {
    case 4:
        return ((VAR3->VAR9 - VAR10) / 32) - 1;
    case 0xd00:
        return VAR7->VAR11;
    case 0xd04:
        VAR8 = VAR7->VAR12.VAR13.VAR14;
        VAR8 |= (VAR3->VAR15 & 0xff) << 12;
        if (FUN2(VAR3))
        {
            VAR8 |= (1 << 22);
        }
        if (FUN3(VAR3))
        {
            VAR8 |= (1 << 11);
        }
        if (VAR3->VAR16[VAR17].VAR18)
        {
            VAR8 |= (1 << 26);
        }
        if (VAR3->VAR16[VAR19].VAR18)
        {
            VAR8 |= (1 << 28);
        }
        if (VAR3->VAR16[VAR20].VAR18)
        {
            VAR8 |= (1 << 31);
        }
        return VAR8;
    case 0xd08:
        return VAR7->VAR12.VAR13.VAR21[VAR5.VAR22];
    case 0xd0c:
        return 0xfa050000 | (VAR3->VAR23 << 8);
    case 0xd10:
        return 0;
    case 0xd14:
        return VAR7->VAR12.VAR13.VAR24;
    case 0xd24:
        VAR8 = 0;
        if (VAR3->VAR16[VAR25].VAR26)
        {
            VAR8 |= (1 << 0);
        }
        if (VAR3->VAR16[VAR27].VAR26)
        {
            VAR8 |= (1 << 1);
        }
        if (VAR3->VAR16[VAR28].VAR26)
        {
            VAR8 |= (1 << 3);
        }
        if (VAR3->VAR16[VAR29].VAR26)
        {
            VAR8 |= (1 << 7);
        }
        if (VAR3->VAR16[VAR30].VAR26)
        {
            VAR8 |= (1 << 8);
        }
        if (VAR3->VAR16[VAR19].VAR26)
        {
            VAR8 |= (1 << 10);
        }
        if (VAR3->VAR16[VAR17].VAR26)
        {
            VAR8 |= (1 << 11);
        }
        if (VAR3->VAR16[VAR28].VAR18)
        {
            VAR8 |= (1 << 12);
        }
        if (VAR3->VAR16[VAR25].VAR18)
        {
            VAR8 |= (1 << 13);
        }
        if (VAR3->VAR16[VAR27].VAR18)
        {
            VAR8 |= (1 << 14);
        }
        if (VAR3->VAR16[VAR29].VAR18)
        {
            VAR8 |= (1 << 15);
        }
        if (VAR3->VAR16[VAR25].VAR31)
        {
            VAR8 |= (1 << 16);
        }
        if (VAR3->VAR16[VAR27].VAR31)
        {
            VAR8 |= (1 << 17);
        }
        if (VAR3->VAR16[VAR28].VAR31)
        {
            VAR8 |= (1 << 18);
        }
        return VAR8;
    case 0xd28:
        return VAR7->VAR12.VAR13.VAR32;
    case 0xd2c:
        return VAR7->VAR12.VAR13.VAR33;
    case 0xd30:
        return VAR7->VAR12.VAR13.VAR34;
    case 0xd34:
        return VAR7->VAR12.VAR13.VAR35;
    case 0xd38:
        return VAR7->VAR12.VAR13.VAR36;
    case 0xd3c:
        FUN4(VAR37, "");
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
        return VAR7->VAR38 << 8;
        break;
    case 0xd94:
        return VAR7->VAR12.VAR13.VAR39[VAR5.VAR22];
    case 0xd98:
        return VAR7->VAR12.VAR40.VAR41[VAR5.VAR22];
    case 0xd9c:
    case 0xda4:
    case 0xdac:
    case 0xdb4:
    {
        int VAR42 = VAR7->VAR12.VAR40.VAR41[VAR5.VAR22];
        if (FUN5(&VAR7->VAR12, VAR43))
        {
            int VAR44 = (VAR4 - 0xd9c) / 8;
            if (VAR44)
            {
                VAR42 = FUN6(VAR42, 0, 2, VAR44);
            }
            if (VAR42 >= VAR7->VAR38)
            {
                return 0;
            }
            return VAR7->VAR12.VAR45.VAR46[VAR5.VAR22][VAR42];
        }
        if (VAR42 >= VAR7->VAR38)
        {
            return 0;
        }
        return (VAR7->VAR12.VAR40.VAR47[VAR42] & 0x1f) | (VAR42 & 0xf);
    }
    case 0xda0:
    case 0xda8:
    case 0xdb0:
    case 0xdb8:
    {
        int VAR42 = VAR7->VAR12.VAR40.VAR41[VAR5.VAR22];
        if (FUN5(&VAR7->VAR12, VAR43))
        {
            int VAR44 = (VAR4 - 0xda0) / 8;
            if (VAR44)
            {
                VAR42 = FUN6(VAR42, 0, 2, VAR44);
            }
            if (VAR42 >= VAR7->VAR38)
            {
                return 0;
            }
            return VAR7->VAR12.VAR45.VAR48[VAR5.VAR22][VAR42];
        }
        if (VAR42 >= VAR7->VAR38)
        {
            return 0;
        }
        return ((VAR7->VAR12.VAR40.VAR49[VAR42] & 0xffff) << 16) | (VAR7->VAR12.VAR40.VAR50[VAR42] & 0xffff);
    }
    case 0xdc0:
        if (!FUN5(&VAR7->VAR12, VAR43))
        {
            goto VAR51;
        }
        return VAR7->VAR12.VAR45.VAR52[VAR5.VAR22];
    case 0xdc4:
        if (!FUN5(&VAR7->VAR12, VAR43))
        {
            goto VAR51;
        }
        return VAR7->VAR12.VAR45.VAR53[VAR5.VAR22];
    default:
    VAR51:
        FUN4(VAR54, "", VAR4);
        return 0;
    }
}