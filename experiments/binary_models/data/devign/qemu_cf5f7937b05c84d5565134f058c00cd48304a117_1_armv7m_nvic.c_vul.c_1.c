static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, MemTxAttrs VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    switch (VAR3)
    {
    case 0x380 ... 0x3bf:
    {
        int VAR8 = 32 * (VAR3 - 0x380) + VAR9;
        int VAR10;
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (!VAR5.VAR14)
        {
            break;
        }
        for (VAR10 = 0; VAR10 < 32 && VAR8 + VAR10 < VAR2->VAR15; VAR10++)
        {
            VAR2->VAR16[VAR8 + VAR10] = (VAR4 >> VAR10) & 1;
        }
        FUN3(VAR2);
        break;
    }
    case 0xd04:
        if (VAR7->VAR11.VAR17.VAR18 & VAR19)
        {
            if (VAR4 & (1 << 31))
            {
                FUN4(VAR2, VAR20, false);
            }
            else if (VAR4 & (1 << 30) && FUN2(&VAR7->VAR11, VAR12))
            {
                FUN5(VAR2, VAR20, false);
            }
        }
        if (VAR4 & (1 << 28))
        {
            FUN4(VAR2, VAR21, VAR5.VAR14);
        }
        else if (VAR4 & (1 << 27))
        {
            FUN5(VAR2, VAR21, VAR5.VAR14);
        }
        if (VAR4 & (1 << 26))
        {
            FUN4(VAR2, VAR22, VAR5.VAR14);
        }
        else if (VAR4 & (1 << 25))
        {
            FUN5(VAR2, VAR22, VAR5.VAR14);
        }
        break;
    case 0xd08:
        VAR7->VAR11.VAR17.VAR23[VAR5.VAR14] = VAR4 & 0xffffff80;
        break;
    case 0xd0c:
        if ((VAR4 >> VAR24) == 0x05fa)
        {
            if (VAR4 & VAR25)
            {
                if (VAR5.VAR14 || !(VAR7->VAR11.VAR17.VAR18 & VAR26))
                {
                    FUN6(VAR2->VAR27);
                }
            }
            if (VAR4 & VAR28)
            {
                FUN7(VAR29, ""
                                               "");
            }
            if (VAR4 & VAR30)
            {
                FUN7(VAR29, ""
                                               "");
            }
            VAR2->VAR31[VAR5.VAR14] = FUN8(VAR4, VAR32, VAR33);
            if (VAR5.VAR14)
            {
                VAR7->VAR11.VAR17.VAR18 = VAR4 & (VAR26 | VAR19 | VAR34);
                if (VAR7->VAR11.VAR17.VAR18 & VAR19)
                {
                    VAR2->VAR35[VAR36].VAR37 = -3;
                    VAR2->VAR38[VAR36].VAR39 = 1;
                }
                else
                {
                    VAR2->VAR35[VAR36].VAR37 = -1;
                    VAR2->VAR38[VAR36].VAR39 = 0;
                }
            }
            FUN3(VAR2);
        }
        break;
    case 0xd10:
        FUN7(VAR40, "");
        break;
    case 0xd14:
        VAR4 &= (VAR41 | VAR42 | VAR43 | VAR44 | VAR45 | VAR46);
        if (FUN2(&VAR7->VAR11, VAR12))
        {
            VAR4 |= VAR46 | VAR41;
        }
        if (VAR5.VAR14)
        {
            VAR7->VAR11.VAR17.VAR47[VAR48] = (VAR7->VAR11.VAR17.VAR47[VAR48] & ~VAR42) | (VAR4 & VAR42);
            VAR4 &= ~VAR42;
        }
        VAR7->VAR11.VAR17.VAR47[VAR5.VAR14] = VAR4;
        break;
    case 0xd24:
        if (VAR5.VAR14)
        {
            VAR2->VAR35[VAR49].VAR50 = (VAR4 & (1 << 0)) != 0;
            VAR2->VAR35[VAR51].VAR50 = (VAR4 & (1 << 3)) != 0;
            VAR2->VAR35[VAR52].VAR50 = (VAR4 & (1 << 7)) != 0;
            VAR2->VAR35[VAR21].VAR50 = (VAR4 & (1 << 10)) != 0;
            VAR2->VAR35[VAR22].VAR50 = (VAR4 & (1 << 11)) != 0;
            VAR2->VAR35[VAR51].VAR53 = (VAR4 & (1 << 12)) != 0;
            VAR2->VAR35[VAR49].VAR53 = (VAR4 & (1 << 13)) != 0;
            VAR2->VAR35[VAR52].VAR53 = (VAR4 & (1 << 15)) != 0;
            VAR2->VAR35[VAR49].VAR39 = (VAR4 & (1 << 16)) != 0;
            VAR2->VAR35[VAR54].VAR39 = (VAR4 & (1 << 17)) != 0;
            VAR2->VAR35[VAR51].VAR39 = (VAR4 & (1 << 18)) != 0;
            VAR2->VAR35[VAR36].VAR53 = (VAR4 & (1 << 21)) != 0;
            VAR2->VAR38[VAR55].VAR50 = (VAR4 & (1 << 4)) != 0;
            VAR2->VAR38[VAR55].VAR39 = (VAR4 & (1 << 19)) != 0;
            VAR2->VAR38[VAR55].VAR53 = (VAR4 & (1 << 20)) != 0;
        }
        else
        {
            VAR2->VAR38[VAR49].VAR50 = (VAR4 & (1 << 0)) != 0;
            if (FUN2(&VAR7->VAR11, VAR12))
            {
                VAR2->VAR38[VAR36].VAR53 = (VAR4 & (1 << 21)) != 0;
            }
            VAR2->VAR38[VAR51].VAR50 = (VAR4 & (1 << 3)) != 0;
            VAR2->VAR38[VAR52].VAR50 = (VAR4 & (1 << 7)) != 0;
            VAR2->VAR38[VAR21].VAR50 = (VAR4 & (1 << 10)) != 0;
            VAR2->VAR38[VAR22].VAR50 = (VAR4 & (1 << 11)) != 0;
            VAR2->VAR38[VAR51].VAR53 = (VAR4 & (1 << 12)) != 0;
            VAR2->VAR38[VAR49].VAR53 = (VAR4 & (1 << 13)) != 0;
            VAR2->VAR38[VAR52].VAR53 = (VAR4 & (1 << 15)) != 0;
            VAR2->VAR38[VAR49].VAR39 = (VAR4 & (1 << 16)) != 0;
            VAR2->VAR38[VAR51].VAR39 = (VAR4 & (1 << 18)) != 0;
        }
        if (VAR5.VAR14 || (VAR7->VAR11.VAR17.VAR18 & VAR19))
        {
            VAR2->VAR38[VAR54].VAR50 = (VAR4 & (1 << 1)) != 0;
            VAR2->VAR38[VAR54].VAR53 = (VAR4 & (1 << 14)) != 0;
            VAR2->VAR38[VAR54].VAR39 = (VAR4 & (1 << 17)) != 0;
        }
        if (!VAR5.VAR14 && VAR7->VAR11.VAR17.VAR14 && (VAR7->VAR11.VAR17.VAR18 & VAR19) && (VAR4 & (1 << 5)) == 0)
        {
            VAR2->VAR38[VAR20].VAR50 = 0;
        }
        if (!VAR5.VAR14 && VAR7->VAR11.VAR17.VAR14 && (VAR7->VAR11.VAR17.VAR18 & VAR19) && (VAR4 & (1 << 2)) == 0)
        {
            VAR2->VAR38[VAR36].VAR50 = 0;
        }
        VAR2->VAR38[VAR56].VAR50 = (VAR4 & (1 << 8)) != 0;
        FUN3(VAR2);
        break;
    case 0xd28:
        VAR7->VAR11.VAR17.VAR57[VAR5.VAR14] &= ~VAR4;
        if (VAR5.VAR14)
        {
            VAR7->VAR11.VAR17.VAR57[VAR48] &= ~(VAR4 & VAR58);
        }
        break;
    case 0xd2c:
        VAR7->VAR11.VAR17.VAR59 &= ~VAR4;
        break;
    case 0xd30:
        VAR7->VAR11.VAR17.VAR60 &= ~VAR4;
        break;
    case 0xd34:
        VAR7->VAR11.VAR17.VAR61[VAR5.VAR14] = VAR4;
        return;
    case 0xd38:
        VAR7->VAR11.VAR17.VAR62 = VAR4;
        return;
    case 0xd3c:
        FUN7(VAR40, "");
        break;
    case 0xd90:
        return;
    case 0xd94:
        if ((VAR4 & (VAR63 | VAR64)) == VAR63)
        {
            FUN7(VAR29, ""
                                           "");
        }
        VAR7->VAR11.VAR17.VAR65[VAR5.VAR14] = VAR4 & (VAR64 | VAR63 | VAR66);
        FUN9(FUN10(VAR7));
        break;
    case 0xd98:
        if (VAR4 >= VAR7->VAR67)
        {
            FUN7(VAR29, "" VAR68 "" VAR68 "", VAR4, VAR7->VAR67);
        }
        else
        {
            VAR7->VAR11.VAR69.VAR70[VAR5.VAR14] = VAR4;
        }
        break;
    case 0xd9c:
    case 0xda4:
    case 0xdac:
    case 0xdb4:
    {
        int VAR71;
        if (FUN2(&VAR7->VAR11, VAR12))
        {
            int VAR72 = (VAR3 - 0xd9c) / 8;
            VAR71 = VAR7->VAR11.VAR69.VAR70[VAR5.VAR14];
            if (VAR72)
            {
                VAR71 = FUN11(VAR71, 0, 2, VAR72);
            }
            if (VAR71 >= VAR7->VAR67)
            {
                return;
            }
            VAR7->VAR11.VAR73.VAR74[VAR5.VAR14][VAR71] = VAR4;
            FUN9(FUN10(VAR7));
            return;
        }
        if (VAR4 & (1 << 4))
        {
            VAR71 = FUN8(VAR4, 0, 4);
            if (VAR71 >= VAR7->VAR67)
            {
                FUN7(VAR29, "" VAR68 "", VAR71, VAR7->VAR67);
                return;
            }
            VAR7->VAR11.VAR69.VAR70[VAR5.VAR14] = VAR71;
        }
        else
        {
            VAR71 = VAR7->VAR11.VAR69.VAR70[VAR5.VAR14];
        }
        if (VAR71 >= VAR7->VAR67)
        {
            return;
        }
        VAR7->VAR11.VAR69.VAR75[VAR71] = VAR4 & ~0x1f;
        FUN9(FUN10(VAR7));
        break;
    }
    case 0xda0:
    case 0xda8:
    case 0xdb0:
    case 0xdb8:
    {
        int VAR71 = VAR7->VAR11.VAR69.VAR70[VAR5.VAR14];
        if (FUN2(&VAR7->VAR11, VAR12))
        {
            int VAR72 = (VAR3 - 0xd9c) / 8;
            VAR71 = VAR7->VAR11.VAR69.VAR70[VAR5.VAR14];
            if (VAR72)
            {
                VAR71 = FUN11(VAR71, 0, 2, VAR72);
            }
            if (VAR71 >= VAR7->VAR67)
            {
                return;
            }
            VAR7->VAR11.VAR73.VAR76[VAR5.VAR14][VAR71] = VAR4;
            FUN9(FUN10(VAR7));
            return;
        }
        if (VAR71 >= VAR7->VAR67)
        {
            return;
        }
        VAR7->VAR11.VAR69.VAR77[VAR71] = VAR4 & 0xff3f;
        VAR7->VAR11.VAR69.VAR78[VAR71] = (VAR4 >> 16) & 0x173f;
        FUN9(FUN10(VAR7));
        break;
    }
    case 0xdc0:
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (VAR7->VAR67)
        {
            VAR7->VAR11.VAR73.VAR79[VAR5.VAR14] = VAR4;
        }
        break;
    case 0xdc4:
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (VAR7->VAR67)
        {
            VAR7->VAR11.VAR73.VAR80[VAR5.VAR14] = VAR4;
        }
        break;
    case 0xdd0:
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (!VAR5.VAR14)
        {
            return;
        }
        VAR7->VAR11.VAR81.VAR82 = VAR4 & 3;
        break;
    case 0xdd4:
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        break;
    case 0xdd8:
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (!VAR5.VAR14)
        {
            return;
        }
        if (VAR4 >= VAR7->VAR83)
        {
            FUN7(VAR29, "" VAR68 "" VAR68 "", VAR4, VAR7->VAR83);
        }
        else
        {
            VAR7->VAR11.VAR81.VAR70 = VAR4;
        }
        break;
    case 0xddc:
    {
        int VAR71 = VAR7->VAR11.VAR81.VAR70;
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (!VAR5.VAR14)
        {
            return;
        }
        if (VAR71 >= VAR7->VAR83)
        {
            return;
        }
        VAR7->VAR11.VAR81.VAR74[VAR71] = VAR4 & ~0x1f;
        FUN9(FUN10(VAR7));
        break;
    }
    case 0xde0:
    {
        int VAR71 = VAR7->VAR11.VAR81.VAR70;
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (!VAR5.VAR14)
        {
            return;
        }
        if (VAR71 >= VAR7->VAR83)
        {
            return;
        }
        VAR7->VAR11.VAR81.VAR76[VAR71] = VAR4 & ~0x1c;
        FUN9(FUN10(VAR7));
        break;
    }
    case 0xde4:
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (!VAR5.VAR14)
        {
            return;
        }
        VAR7->VAR11.VAR17.VAR84 &= ~VAR4;
        break;
    case 0xde8:
        if (!FUN2(&VAR7->VAR11, VAR12))
        {
            goto VAR13;
        }
        if (!VAR5.VAR14)
        {
            return;
        }
        VAR7->VAR11.VAR17.VAR84 = VAR4;
        break;
    case 0xf00:
    {
        int VAR85 = (VAR4 & 0x1ff) + VAR9;
        if (VAR85 < VAR2->VAR15)
        {
            FUN4(VAR2, VAR85, false);
        }
        break;
    }
    default:
    VAR13:
        FUN7(VAR29, "", VAR3);
    }
}