void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    target_ulong VAR7;
    int VAR8 = -1;
    const char *VAR9;
    if (FUN3() && VAR2->VAR10 != VAR11)
    {
        if (VAR2->VAR10 < 0 || VAR2->VAR10 > VAR12)
        {
            VAR9 = "";
        }
        else
        {
            VAR9 = VAR13[VAR2->VAR10];
        }
        FUN4("" VAR14 "" VAR14 "", VAR15, VAR6->VAR16.VAR17, VAR6->VAR18, VAR9);
    }
    if (VAR2->VAR10 == VAR11 && (VAR6->VAR19 & VAR20))
    {
        VAR2->VAR10 = VAR21;
    }
    VAR7 = 0x180;
    switch (VAR2->VAR10)
    {
    case VAR22:
        VAR6->VAR23 |= 1 << VAR24;
        VAR6->VAR25 = VAR6->VAR16.VAR17 | !!(VAR6->VAR19 & VAR26);
        goto VAR27;
    case VAR21:
        VAR6->VAR23 |= 1 << VAR28;
        goto VAR29;
    case VAR30:
        VAR6->VAR23 |= 1 << VAR31;
        goto VAR29;
    case VAR32:
        VAR6->VAR23 |= 1 << VAR33;
        goto VAR29;
    case VAR34:
        VAR6->VAR23 |= 1 << VAR35;
        goto VAR29;
    case VAR36:
        VAR6->VAR23 |= 1 << VAR37;
    VAR29:
        VAR6->VAR25 = FUN5(VAR6);
        VAR6->VAR19 &= ~VAR38;
    VAR27:
        VAR6->VAR19 |= VAR20 | VAR39 | VAR40;
        VAR6->VAR19 &= ~(VAR41);
        if (!(VAR6->VAR42 & (1 << VAR43)))
            VAR6->VAR44 &= ~(1 << VAR45);
        VAR6->VAR16.VAR17 = (VAR46)0xBFC00480;
        FUN6(VAR6);
        break;
    case VAR47:
        FUN7(FUN8(VAR4));
        break;
    case VAR48:
        VAR6->VAR42 |= (1 << VAR49);
        memset(VAR6->VAR50, 0, sizeof(*VAR6->VAR50));
        goto VAR51;
    case VAR52:
        VAR6->VAR42 |= (1 << VAR53);
    VAR51:
        VAR6->VAR54 = FUN5(VAR6);
        VAR6->VAR19 &= ~VAR38;
        VAR6->VAR42 |= (1 << VAR55) | (1 << VAR56);
        VAR6->VAR19 |= VAR39 | VAR40;
        VAR6->VAR19 &= ~(VAR41);
        if (!(VAR6->VAR42 & (1 << VAR43)))
            VAR6->VAR44 &= ~(1 << VAR45);
        VAR6->VAR16.VAR17 = (VAR46)0xBFC00000;
        FUN6(VAR6);
        break;
    case VAR11:
        VAR8 = 0;
        if (VAR6->VAR44 & (1 << VAR57))
            VAR7 = 0x200;
        if (VAR6->VAR58 & ((1 << VAR59) | (1 << VAR60)))
        {
            unsigned int VAR61;
            unsigned int VAR62;
            unsigned int VAR63 = (VAR6->VAR44 & VAR64) >> 8;
            VAR63 &= VAR6->VAR42 >> 8;
            VAR61 = (VAR6->VAR65 >> VAR66) & ((1 << 6) - 1);
            VAR61 <<= 5;
            if (VAR6->VAR58 & (1 << VAR59))
            {
                for (VAR62 = 7; VAR62 > 0; VAR62--)
                {
                    if (VAR63 & (1 << VAR62))
                    {
                        break;
                    }
                }
            }
            else
            {
                VAR62 = VAR63;
            }
            VAR7 = 0x200 + VAR62 * VAR61;
        }
        goto VAR67;
    case VAR68:
        VAR8 = 1;
        goto VAR67;
    case VAR69:
        VAR8 = 2;
        if (VAR6->VAR70 == 1 && !(VAR6->VAR42 & (1 << VAR43)))
        {
            int VAR71 = VAR6->VAR72 >> 62;
            int VAR73 = (VAR6->VAR42 & (1 << VAR74)) != 0;
            int VAR75 = (VAR6->VAR42 & (1 << VAR76)) != 0;
            int VAR77 = (VAR6->VAR42 & (1 << VAR78)) != 0;
            if (((VAR71 == 0 && VAR73) || (VAR71 == 1 && VAR75) || (VAR71 == 3 && VAR77)) && (!(VAR6->VAR79 & (VAR80 | VAR81))))
                VAR7 = 0x080;
            else
                VAR7 = 0x000;
        }
        goto VAR67;
    case VAR82:
        VAR8 = 3;
        if (VAR6->VAR70 == 1 && !(VAR6->VAR42 & (1 << VAR43)))
        {
            int VAR71 = VAR6->VAR72 >> 62;
            int VAR73 = (VAR6->VAR42 & (1 << VAR74)) != 0;
            int VAR75 = (VAR6->VAR42 & (1 << VAR76)) != 0;
            int VAR77 = (VAR6->VAR42 & (1 << VAR78)) != 0;
            if (((VAR71 == 0 && VAR73) || (VAR71 == 1 && VAR75) || (VAR71 == 3 && VAR77)) && (!(VAR6->VAR79 & (VAR80 | VAR81))))
                VAR7 = 0x080;
            else
                VAR7 = 0x000;
        }
        goto VAR67;
    case VAR83:
        VAR8 = 4;
        goto VAR67;
    case VAR84:
        VAR8 = 5;
        goto VAR67;
    case VAR85:
        VAR8 = 6;
        goto VAR67;
    case VAR86:
        VAR8 = 7;
        goto VAR67;
    case VAR87:
        VAR8 = 8;
        goto VAR67;
    case VAR88:
        VAR8 = 9;
        goto VAR67;
    case VAR89:
        VAR8 = 10;
        goto VAR67;
    case VAR90:
        VAR8 = 11;
        VAR6->VAR44 = (VAR6->VAR44 & ~(0x3 << VAR91)) | (VAR6->VAR70 << VAR91);
        goto VAR67;
    case VAR92:
        VAR8 = 12;
        goto VAR67;
    case VAR93:
        VAR8 = 13;
        goto VAR67;
    case VAR94:
        VAR8 = 15;
        goto VAR67;
    case VAR95:
        VAR8 = 18;
        goto VAR67;
    case VAR96:
        VAR8 = 22;
        goto VAR67;
    case VAR97:
        VAR8 = 23;
        goto VAR67;
    case VAR98:
        VAR8 = 24;
        goto VAR67;
    case VAR99:
        VAR8 = 25;
        goto VAR67;
    case VAR100:
        VAR8 = 26;
        goto VAR67;
    case VAR101:
        VAR8 = 30;
        if (VAR6->VAR42 & (1 << VAR56))
        {
            VAR7 = 0x100;
        }
        else
        {
            VAR7 = 0x20000100;
        }
    VAR67:
        if (!(VAR6->VAR42 & (1 << VAR43)))
        {
            VAR6->VAR18 = FUN5(VAR6);
            if (VAR6->VAR19 & VAR38)
            {
                VAR6->VAR44 |= (1 << VAR45);
            }
            else
            {
                VAR6->VAR44 &= ~(1 << VAR45);
            }
            VAR6->VAR42 |= (1 << VAR43);
            VAR6->VAR19 |= VAR39 | VAR40;
            VAR6->VAR19 &= ~(VAR41);
        }
        VAR6->VAR19 &= ~VAR38;
        if (VAR6->VAR42 & (1 << VAR56))
        {
            VAR6->VAR16.VAR17 = (VAR46)0xBFC00200;
        }
        else
        {
            VAR6->VAR16.VAR17 = (VAR46)(VAR6->VAR102 & ~0x3ff);
        }
        VAR6->VAR16.VAR17 += VAR7;
        FUN6(VAR6);
        VAR6->VAR44 = (VAR6->VAR44 & ~(0x1f << VAR103)) | (VAR8 << VAR103);
        break;
    default:
        FUN4("", VAR2->VAR10);
        FUN9("", VAR2->VAR10);
        FUN10(1);
    }
    if (FUN3() && VAR2->VAR10 != VAR11)
    {
        FUN4("" VAR14 "" VAR14 ""
                 "" VAR14 "" VAR14 "",
                 VAR15, VAR6->VAR16.VAR17, VAR6->VAR18, VAR8, VAR6->VAR42, VAR6->VAR44, VAR6->VAR72, VAR6->VAR25);
    }
    VAR2->VAR10 = VAR104;
}