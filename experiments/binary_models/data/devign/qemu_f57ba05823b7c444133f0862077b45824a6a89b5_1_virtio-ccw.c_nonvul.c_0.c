static int FUN1(VAR1 *VAR2, CCW1 VAR3)
{
    int VAR4;
    VirtioRevInfo VAR5;
    uint8_t VAR6;
    VirtioFeatDesc VAR7;
    hwaddr VAR8;
    VqConfigBlock VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = FUN2(VAR2);
    bool VAR15;
    int VAR16;
    VirtioThinintInfo VAR17;
    if (!VAR11)
    {
        return -VAR18;
    }
    FUN3(VAR2->VAR19, VAR2->VAR20, VAR2->VAR21, VAR3.VAR22);
    VAR15 = !((VAR3.VAR23 & VAR24) && !(VAR3.VAR23 & VAR25));
    if (VAR11->VAR26 && VAR11->VAR27 < 0 && VAR3.VAR22 != VAR28)
    {
        return -VAR29;
    }
    switch (VAR3.VAR22)
    {
    case VAR30:
        VAR4 = FUN4(VAR2, VAR3, VAR15, VAR11->VAR27 < 1);
        break;
    case VAR31:
        FUN5(VAR11, VAR14);
        VAR4 = 0;
        break;
    case VAR32:
        if (VAR15)
        {
            if (VAR3.VAR33 != sizeof(VAR7))
            {
                VAR4 = -VAR18;
                break;
            }
        }
        else if (VAR3.VAR33 < sizeof(VAR7))
        {
            VAR4 = -VAR18;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            VAR36 *VAR37 = FUN6(VAR14);
            FUN7(&VAR2->VAR38, sizeof(VAR7.VAR7));
            FUN8(&VAR2->VAR38, VAR7.VAR39);
            if (VAR7.VAR39 == 0)
            {
                if (VAR11->VAR27 >= 1)
                {
                    VAR7.VAR7 = (VAR40)(VAR14->VAR41 & ~VAR37->VAR42);
                }
                else
                {
                    VAR7.VAR7 = (VAR40)VAR14->VAR41;
                }
            }
            else if ((VAR7.VAR39 == 1) && (VAR11->VAR27 >= 1))
            {
                VAR7.VAR7 = (VAR40)(VAR14->VAR41 >> 32);
            }
            else
            {
                VAR7.VAR7 = 0;
            }
            FUN9(&VAR2->VAR38);
            FUN10(&VAR7.VAR7);
            FUN11(&VAR2->VAR38, VAR7.VAR7);
            VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - sizeof(VAR7);
            VAR4 = 0;
        }
        break;
    case VAR45:
        if (VAR15)
        {
            if (VAR3.VAR33 != sizeof(VAR7))
            {
                VAR4 = -VAR18;
                break;
            }
        }
        else if (VAR3.VAR33 < sizeof(VAR7))
        {
            VAR4 = -VAR18;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            FUN8(&VAR2->VAR38, VAR7);
            FUN12(&VAR7.VAR7);
            if (VAR7.VAR39 == 0)
            {
                FUN13(VAR14, (VAR14->VAR46 & 0xffffffff00000000ULL) | VAR7.VAR7);
            }
            else if ((VAR7.VAR39 == 1) && (VAR11->VAR27 >= 1))
            {
                FUN13(VAR14, (VAR14->VAR46 & 0x00000000ffffffffULL) | ((VAR47)VAR7.VAR7 << 32));
            }
            else
            {
                if (VAR7.VAR7)
                {
                    fprintf(VAR48, "", VAR7.VAR39, VAR7.VAR7);
                }
            }
            VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - sizeof(VAR7);
            VAR4 = 0;
        }
        break;
    case VAR49:
        if (VAR15)
        {
            if (VAR3.VAR33 > VAR14->VAR50)
            {
                VAR4 = -VAR18;
                break;
            }
        }
        VAR16 = FUN14(VAR3.VAR33, VAR14->VAR50);
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            FUN15(&VAR11->VAR51, VAR14->VAR52);
            FUN16(&VAR2->VAR38, VAR14->VAR52, VAR16);
            VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - VAR16;
            VAR4 = 0;
        }
        break;
    case VAR53:
        if (VAR15)
        {
            if (VAR3.VAR33 > VAR14->VAR50)
            {
                VAR4 = -VAR18;
                break;
            }
        }
        VAR16 = FUN14(VAR3.VAR33, VAR14->VAR50);
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            VAR4 = FUN17(&VAR2->VAR38, VAR14->VAR52, VAR16);
            if (!VAR4)
            {
                FUN18(&VAR11->VAR51, VAR14->VAR52);
                VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - VAR16;
            }
        }
        break;
    case VAR54:
        if (VAR15)
        {
            if (VAR3.VAR33 != sizeof(VAR6))
            {
                VAR4 = -VAR18;
                break;
            }
        }
        else if (VAR3.VAR33 < sizeof(VAR6))
        {
            VAR4 = -VAR18;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            FUN19(&VAR55, VAR3.VAR34, VAR14->VAR6, VAR56, NULL);
            VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - sizeof(VAR14->VAR6);
            ;
            VAR4 = 0;
        }
        break;
    case VAR57:
        if (VAR15)
        {
            if (VAR3.VAR33 != sizeof(VAR6))
            {
                VAR4 = -VAR18;
                break;
            }
        }
        else if (VAR3.VAR33 < sizeof(VAR6))
        {
            VAR4 = -VAR18;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            FUN8(&VAR2->VAR38, VAR6);
            if (!(VAR6 & VAR58))
            {
                FUN20(VAR11);
            }
            if (FUN21(VAR14, VAR6) == 0)
            {
                if (VAR14->VAR6 == 0)
                {
                    FUN5(VAR11, VAR14);
                }
                if (VAR6 & VAR58)
                {
                    FUN22(VAR11);
                }
                VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - sizeof(VAR6);
                VAR4 = 0;
            }
            else
            {
                VAR4 = -VAR29;
            }
        }
        break;
    case VAR59:
        if (VAR15)
        {
            if (VAR3.VAR33 != sizeof(VAR8))
            {
                VAR4 = -VAR18;
                break;
            }
        }
        else if (VAR3.VAR33 < sizeof(VAR8))
        {
            VAR4 = -VAR18;
            break;
        }
        if (VAR2->VAR60)
        {
            VAR4 = -VAR29;
            break;
        }
        if (FUN23(VAR14) > VAR61)
        {
            VAR4 = -VAR29;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            FUN8(&VAR2->VAR38, VAR8);
            FUN24(&VAR8);
            VAR11->VAR8 = FUN25(VAR8, sizeof(VAR47));
            VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - sizeof(VAR8);
            VAR4 = 0;
        }
        break;
    case VAR62:
        if (VAR15)
        {
            if (VAR3.VAR33 != sizeof(VAR8))
            {
                VAR4 = -VAR18;
                break;
            }
        }
        else if (VAR3.VAR33 < sizeof(VAR8))
        {
            VAR4 = -VAR18;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            FUN8(&VAR2->VAR38, VAR8);
            FUN24(&VAR8);
            VAR11->VAR63 = FUN25(VAR8, sizeof(VAR47));
            VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - sizeof(VAR8);
            VAR4 = 0;
        }
        break;
    case VAR64:
        if (VAR15)
        {
            if (VAR3.VAR33 != sizeof(VAR9))
            {
                VAR4 = -VAR18;
                break;
            }
        }
        else if (VAR3.VAR33 < sizeof(VAR9))
        {
            VAR4 = -VAR18;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else
        {
            FUN8(&VAR2->VAR38, VAR9.VAR39);
            FUN26(&VAR9.VAR39);
            if (VAR9.VAR39 >= VAR65)
            {
                VAR4 = -VAR18;
                break;
            }
            VAR9.VAR66 = FUN27(VAR14, VAR9.VAR39);
            FUN28(&VAR9.VAR66);
            FUN11(&VAR2->VAR38, VAR9.VAR66);
            VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - sizeof(VAR9);
            VAR4 = 0;
        }
        break;
    case VAR67:
        if (VAR15)
        {
            if (VAR3.VAR33 != sizeof(VAR17))
            {
                VAR4 = -VAR18;
                break;
            }
        }
        else if (VAR3.VAR33 < sizeof(VAR17))
        {
            VAR4 = -VAR18;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
        }
        else if (VAR11->VAR8 && !VAR2->VAR60)
        {
            VAR4 = -VAR29;
        }
        else
        {
            if (FUN8(&VAR2->VAR38, VAR17))
            {
                VAR4 = -VAR35;
            }
            else
            {
                FUN24(&VAR17.VAR68);
                FUN24(&VAR17.VAR69);
                FUN24(&VAR17.VAR70);
                VAR11->VAR69 = FUN25(VAR17.VAR69, sizeof(VAR71));
                VAR11->VAR8 = FUN25(VAR17.VAR70, VAR17.VAR68 / 8 + 1);
                VAR11->VAR72 = VAR17.VAR73;
                VAR11->VAR74.VAR75.VAR76 = VAR17.VAR68;
                VAR11->VAR74.VAR75.VAR77 = 7;
                VAR11->VAR74.VAR75.VAR78 = FUN29(VAR79, VAR11->VAR72);
                VAR2->VAR60 = ((VAR11->VAR8 != NULL) && (VAR11->VAR69 != NULL));
                VAR2->VAR43.VAR44.VAR33 = VAR3.VAR33 - sizeof(VAR17);
                VAR4 = 0;
            }
        }
        break;
    case VAR28:
        VAR16 = sizeof(VAR5);
        if (VAR3.VAR33 < VAR16)
        {
            VAR4 = -VAR18;
            break;
        }
        if (!VAR3.VAR34)
        {
            VAR4 = -VAR35;
            break;
        }
        FUN17(&VAR2->VAR38, &VAR5, 4);
        FUN26(&VAR5.VAR27);
        FUN26(&VAR5.VAR80);
        if (VAR3.VAR33 < VAR16 + VAR5.VAR80 || (VAR15 && VAR3.VAR33 > VAR16 + VAR5.VAR80))
        {
            VAR4 = -VAR18;
            break;
        }
        if (VAR11->VAR27 >= 0 || VAR5.VAR27 > FUN30(VAR11) || (VAR11->VAR26 && !VAR5.VAR27))
        {
            VAR4 = -VAR29;
            break;
        }
        VAR4 = 0;
        VAR11->VAR27 = VAR5.VAR27;
        break;
    default:
        VAR4 = -VAR29;
        break;
    }
    return VAR4;
}