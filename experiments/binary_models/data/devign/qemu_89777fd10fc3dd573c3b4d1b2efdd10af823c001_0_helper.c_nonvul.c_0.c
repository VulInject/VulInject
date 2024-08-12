void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    bool VAR7 = 0;
    target_ulong VAR8;
    int VAR9 = -1;
    const char *VAR10;
    if (FUN3(VAR11) && VAR2->VAR12 != VAR13)
    {
        if (VAR2->VAR12 < 0 || VAR2->VAR12 > VAR14)
        {
            VAR10 = "";
        }
        else
        {
            VAR10 = VAR15[VAR2->VAR12];
        }
        FUN4("" VAR16 "" VAR16 "", VAR17, VAR6->VAR18.VAR19, VAR6->VAR20, VAR10);
    }
    if (VAR2->VAR12 == VAR13 && (VAR6->VAR21 & VAR22))
    {
        VAR2->VAR12 = VAR23;
    }
    VAR8 = 0x180;
    switch (VAR2->VAR12)
    {
    case VAR24:
        VAR6->VAR25 |= 1 << VAR26;
        VAR6->VAR27 = VAR6->VAR18.VAR19 | !!(VAR6->VAR21 & VAR28);
        goto VAR29;
    case VAR23:
        VAR6->VAR25 |= 1 << VAR30;
        goto VAR31;
    case VAR32:
        VAR6->VAR25 |= 1 << VAR33;
        goto VAR31;
    case VAR34:
        VAR6->VAR25 |= 1 << VAR35;
        goto VAR31;
    case VAR36:
        VAR6->VAR25 |= 1 << VAR37;
        goto VAR31;
    case VAR38:
        VAR6->VAR25 |= 1 << VAR39;
    VAR31:
        VAR6->VAR27 = FUN5(VAR6);
        VAR6->VAR21 &= ~VAR40;
    VAR29:
        if (VAR6->VAR41 & VAR42)
        {
            VAR6->VAR21 |= VAR43;
            if (!(VAR6->VAR41 & VAR44) || VAR6->VAR45 & (1 << VAR46))
            {
                VAR6->VAR21 &= ~VAR47;
            }
        }
        VAR6->VAR21 |= VAR22 | VAR48;
        VAR6->VAR21 &= ~(VAR49);
        if (!(VAR6->VAR45 & (1 << VAR50)))
            VAR6->VAR51 &= ~(1U << VAR52);
        VAR6->VAR18.VAR19 = VAR6->VAR53 + 0x480;
        FUN6(VAR6);
        break;
    case VAR54:
        FUN7(FUN8(VAR4));
        break;
    case VAR55:
        VAR6->VAR45 |= (1 << VAR56);
        memset(VAR6->VAR57, 0, sizeof(VAR6->VAR57));
        goto VAR58;
    case VAR59:
        VAR6->VAR45 |= (1 << VAR60);
    VAR58:
        VAR6->VAR61 = FUN5(VAR6);
        VAR6->VAR21 &= ~VAR40;
        VAR6->VAR45 |= (1 << VAR62) | (1 << VAR63);
        if (VAR6->VAR41 & VAR42)
        {
            VAR6->VAR21 |= VAR43;
            if (!(VAR6->VAR41 & VAR44) || VAR6->VAR45 & (1 << VAR46))
            {
                VAR6->VAR21 &= ~VAR47;
            }
        }
        VAR6->VAR21 |= VAR48;
        VAR6->VAR21 &= ~(VAR49);
        if (!(VAR6->VAR45 & (1 << VAR50)))
            VAR6->VAR51 &= ~(1U << VAR52);
        VAR6->VAR18.VAR19 = VAR6->VAR53;
        FUN6(VAR6);
        break;
    case VAR13:
        VAR9 = 0;
        if (VAR6->VAR51 & (1 << VAR64))
        {
            uint32_t VAR65 = (VAR6->VAR66 >> VAR67) & 0x1f;
            if ((VAR6->VAR45 & (1 << VAR63)) || VAR65 == 0)
            {
                VAR8 = 0x200;
            }
            else
            {
                uint32_t VAR68 = 0;
                uint32_t VAR69 = (VAR6->VAR51 & VAR70) >> VAR71;
                if (VAR6->VAR72 & (1 << VAR73))
                {
                    VAR68 = VAR69;
                }
                else
                {
                    VAR69 &= (VAR6->VAR45 >> VAR74) & 0xff;
                    while (VAR69 >>= 1)
                    {
                        VAR68++;
                    }
                }
                VAR8 = 0x200 + (VAR68 * (VAR65 << 5));
            }
        }
        goto VAR75;
    case VAR76:
        VAR9 = 1;
        VAR7 = !(VAR6->VAR77 & VAR78);
        goto VAR75;
    case VAR79:
        VAR9 = 2;
        VAR7 = !(VAR6->VAR77 & VAR78);
        if ((VAR6->VAR77 & VAR80) && !(VAR6->VAR45 & (1 << VAR50)))
        {
            int VAR81 = VAR6->VAR82 >> 62;
            int VAR83 = (VAR6->VAR45 & (1 << VAR84)) != 0;
            int VAR85 = (VAR6->VAR45 & (1 << VAR86)) != 0;
            int VAR87 = (VAR6->VAR45 & (1 << VAR46)) != 0;
            if (((VAR81 == 0 && VAR83) || (VAR81 == 1 && VAR85) || (VAR81 == 3 && VAR87)) && (!(VAR6->VAR41 & (VAR88 | VAR89))))
                VAR8 = 0x080;
            else
                VAR8 = 0x000;
        }
        goto VAR75;
    case VAR90:
        VAR9 = 3;
        VAR7 = 1;
        if ((VAR6->VAR77 & VAR80) && !(VAR6->VAR45 & (1 << VAR50)))
        {
            int VAR81 = VAR6->VAR82 >> 62;
            int VAR83 = (VAR6->VAR45 & (1 << VAR84)) != 0;
            int VAR85 = (VAR6->VAR45 & (1 << VAR86)) != 0;
            int VAR87 = (VAR6->VAR45 & (1 << VAR46)) != 0;
            if (((VAR81 == 0 && VAR83) || (VAR81 == 1 && VAR85) || (VAR81 == 3 && VAR87)) && (!(VAR6->VAR41 & (VAR88 | VAR89))))
                VAR8 = 0x080;
            else
                VAR8 = 0x000;
        }
        goto VAR75;
    case VAR91:
        VAR9 = 4;
        VAR7 = !(VAR6->VAR77 & VAR78);
        goto VAR75;
    case VAR92:
        VAR9 = 5;
        VAR7 = 1;
        goto VAR75;
    case VAR93:
        VAR9 = 6;
        goto VAR75;
    case VAR94:
        VAR9 = 7;
        goto VAR75;
    case VAR95:
        VAR9 = 8;
        VAR7 = 1;
        goto VAR75;
    case VAR96:
        VAR9 = 9;
        VAR7 = 1;
        goto VAR75;
    case VAR97:
        VAR9 = 10;
        VAR7 = 1;
        goto VAR75;
    case VAR98:
        VAR9 = 11;
        VAR7 = 1;
        VAR6->VAR51 = (VAR6->VAR51 & ~(0x3 << VAR99)) | (VAR6->VAR77 << VAR99);
        goto VAR75;
    case VAR100:
        VAR9 = 12;
        VAR7 = 1;
        goto VAR75;
    case VAR101:
        VAR9 = 13;
        VAR7 = 1;
        goto VAR75;
    case VAR102:
        VAR9 = 14;
        VAR7 = 1;
        goto VAR75;
    case VAR103:
        VAR9 = 15;
        VAR7 = 1;
        goto VAR75;
    case VAR104:
        VAR9 = 18;
        goto VAR75;
    case VAR105:
        VAR9 = 19;
        VAR7 = 1;
        goto VAR75;
    case VAR106:
        VAR9 = 20;
        goto VAR75;
    case VAR107:
        VAR9 = 21;
        VAR7 = 1;
        goto VAR75;
    case VAR108:
        VAR9 = 22;
        goto VAR75;
    case VAR109:
        VAR9 = 23;
        goto VAR75;
    case VAR110:
        VAR9 = 24;
        goto VAR75;
    case VAR111:
        VAR9 = 25;
        goto VAR75;
    case VAR112:
        VAR9 = 26;
        goto VAR75;
    case VAR113:
        VAR9 = 30;
        if (VAR6->VAR45 & (1 << VAR63))
        {
            VAR8 = 0x100;
        }
        else
        {
            VAR8 = 0x20000100;
        }
    VAR75:
        if (!(VAR6->VAR45 & (1 << VAR50)))
        {
            VAR6->VAR20 = FUN5(VAR6);
            if (VAR7)
            {
                FUN9(VAR6);
            }
            if (VAR6->VAR21 & VAR40)
            {
                VAR6->VAR51 |= (1U << VAR52);
            }
            else
            {
                VAR6->VAR51 &= ~(1U << VAR52);
            }
            VAR6->VAR45 |= (1 << VAR50);
            if (VAR6->VAR41 & VAR42)
            {
                VAR6->VAR21 |= VAR43;
                if (!(VAR6->VAR41 & VAR44) || VAR6->VAR45 & (1 << VAR46))
                {
                    VAR6->VAR21 &= ~VAR47;
                }
            }
            VAR6->VAR21 |= VAR48;
            VAR6->VAR21 &= ~(VAR49);
        }
        VAR6->VAR21 &= ~VAR40;
        if (VAR6->VAR45 & (1 << VAR63))
        {
            VAR6->VAR18.VAR19 = VAR6->VAR53 + 0x200;
        }
        else
        {
            VAR6->VAR18.VAR19 = (VAR114)(VAR6->VAR115 & ~0x3ff);
        }
        VAR6->VAR18.VAR19 += VAR8;
        FUN6(VAR6);
        VAR6->VAR51 = (VAR6->VAR51 & ~(0x1f << VAR116)) | (VAR9 << VAR116);
        break;
    default:
        FUN10();
    }
    if (FUN3(VAR11) && VAR2->VAR12 != VAR13)
    {
        FUN4("" VAR16 "" VAR16 ""
                 "" VAR16 "" VAR16 "",
                 VAR17, VAR6->VAR18.VAR19, VAR6->VAR20, VAR9, VAR6->VAR45, VAR6->VAR51, VAR6->VAR82, VAR6->VAR27);
    }
    VAR2->VAR12 = VAR117;
}