int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR7->VAR9;
    uint64_t VAR10, VAR11;
    target_ulong VAR12, VAR13;
    int VAR14 = 0;
    int VAR15, VAR16, VAR17, VAR18, VAR19;
    hwaddr VAR20;
    uint64_t VAR21 = VAR22;
    uint32_t VAR23;
    target_ulong VAR24;
    VAR19 = VAR5 == VAR25;
    FUN3("" VAR26 "" VAR27 "", VAR3, VAR4, VAR19, VAR9->VAR28);
    VAR18 = VAR4 & 1;
    if (!(VAR9->VAR29[0] & VAR30))
    {
        VAR11 = VAR3;
        if (!(VAR9->VAR31 & VAR32))
        {
            VAR11 = (VAR33)VAR11;
        }
        VAR16 = VAR34 | VAR35 | VAR36;
        VAR17 = 4096;
        goto VAR37;
    }
    if (!(VAR9->VAR38 & VAR39))
    {
        VAR21 |= VAR40;
    }
    if (VAR9->VAR29[4] & VAR41)
    {
        uint64_t VAR42, VAR43;
        target_ulong VAR44;
        if (VAR9->VAR31 & VAR32)
        {
            uint64_t VAR45, VAR46;
            int32_t VAR47;
            VAR47 = (VAR48)VAR3 >> 47;
            if (VAR47 != 0 && VAR47 != -1)
            {
                VAR9->VAR14 = 0;
                VAR2->VAR49 = VAR50;
                return 1;
            }
            VAR45 = ((VAR9->VAR29[3] & ~0xfff) + (((VAR3 >> 39) & 0x1ff) << 3)) & VAR9->VAR51;
            VAR46 = FUN4(VAR2->VAR52, VAR45);
            if (!(VAR46 & VAR53))
            {
                goto VAR54;
            }
            if (VAR46 & (VAR21 | VAR55))
            {
                goto VAR56;
            }
            if (!(VAR46 & VAR57))
            {
                VAR46 |= VAR57;
                FUN5(VAR2->VAR52, VAR45, VAR46);
            }
            VAR10 = VAR46 ^ VAR40;
            VAR44 = ((VAR46 & VAR58) + (((VAR3 >> 30) & 0x1ff) << 3)) & VAR9->VAR51;
            VAR43 = FUN4(VAR2->VAR52, VAR44);
            if (!(VAR43 & VAR53))
            {
                goto VAR54;
            }
            if (VAR43 & VAR21)
            {
                goto VAR56;
            }
            VAR10 &= VAR43 ^ VAR40;
            if (!(VAR43 & VAR57))
            {
                VAR43 |= VAR57;
                FUN5(VAR2->VAR52, VAR44, VAR43);
            }
            if (VAR43 & VAR55)
            {
                VAR17 = 1024 * 1024 * 1024;
                VAR13 = VAR44;
                VAR11 = VAR43;
                goto VAR59;
            }
        }
        else
        {
            VAR44 = ((VAR9->VAR29[3] & ~0x1f) + ((VAR3 >> 27) & 0x18)) & VAR9->VAR51;
            VAR43 = FUN4(VAR2->VAR52, VAR44);
            if (!(VAR43 & VAR53))
            {
                goto VAR54;
            }
            VAR21 |= VAR60 | VAR40;
            if (VAR43 & VAR21)
            {
                goto VAR56;
            }
            VAR10 = VAR40 | VAR61 | VAR62;
        }
        VAR12 = ((VAR43 & VAR58) + (((VAR3 >> 21) & 0x1ff) << 3)) & VAR9->VAR51;
        VAR42 = FUN4(VAR2->VAR52, VAR12);
        if (!(VAR42 & VAR53))
        {
            goto VAR54;
        }
        if (VAR42 & VAR21)
        {
            goto VAR56;
        }
        VAR10 &= VAR42 ^ VAR40;
        if (VAR42 & VAR55)
        {
            VAR17 = 2048 * 1024;
            VAR13 = VAR12;
            VAR11 = VAR42;
            goto VAR59;
        }
        if (!(VAR42 & VAR57))
        {
            VAR42 |= VAR57;
            FUN5(VAR2->VAR52, VAR12, VAR42);
        }
        VAR13 = ((VAR42 & VAR58) + (((VAR3 >> 12) & 0x1ff) << 3)) & VAR9->VAR51;
        VAR11 = FUN4(VAR2->VAR52, VAR13);
        if (!(VAR11 & VAR53))
        {
            goto VAR54;
        }
        if (VAR11 & VAR21)
        {
            goto VAR56;
        }
        VAR10 &= VAR11 ^ VAR40;
        VAR17 = 4096;
    }
    else
    {
        uint32_t VAR42;
        VAR12 = ((VAR9->VAR29[3] & ~0xfff) + ((VAR3 >> 20) & 0xffc)) & VAR9->VAR51;
        VAR42 = FUN6(VAR2->VAR52, VAR12);
        if (!(VAR42 & VAR53))
        {
            goto VAR54;
        }
        VAR10 = VAR42 | VAR40;
        if ((VAR42 & VAR55) && (VAR9->VAR29[4] & VAR63))
        {
            VAR17 = 4096 * 1024;
            VAR13 = VAR12;
            VAR11 = VAR42 | ((VAR42 & 0x1fe000) << (32 - 13));
            VAR21 = 0x200000;
            goto VAR64;
        }
        if (!(VAR42 & VAR57))
        {
            VAR42 |= VAR57;
            FUN5(VAR2->VAR52, VAR12, VAR42);
        }
        VAR13 = ((VAR42 & ~0xfff) + ((VAR3 >> 10) & 0xffc)) & VAR9->VAR51;
        VAR11 = FUN6(VAR2->VAR52, VAR13);
        if (!(VAR11 & VAR53))
        {
            goto VAR54;
        }
        VAR10 &= VAR11 | VAR40;
        VAR17 = 4096;
        VAR21 = 0;
    }
VAR59:
    VAR21 |= (VAR17 - 1) & VAR58 & ~VAR65;
VAR64:
    if (VAR11 & VAR21)
    {
        goto VAR56;
    }
    VAR10 ^= VAR40;
    if ((VAR10 & VAR40) && VAR4 == 2)
    {
        goto VAR66;
    }
    switch (VAR5)
    {
    case VAR25:
        if (!(VAR10 & VAR61))
        {
            goto VAR66;
        }
        if (VAR18 && !(VAR10 & VAR62))
        {
            goto VAR66;
        }
        break;
    case VAR67:
        if (VAR4 != 2 && (VAR10 & VAR61))
        {
            goto VAR66;
        }
    case VAR68:
        if (VAR4 == 2 && (VAR9->VAR29[4] & VAR69) && (VAR10 & VAR61))
        {
            goto VAR66;
        }
        if ((VAR9->VAR29[0] & VAR70) && VAR18 && !(VAR10 & VAR62))
        {
            goto VAR66;
        }
        break;
    default:
        break;
    }
    VAR15 = VAR18 && !(VAR11 & VAR71);
    if (!(VAR11 & VAR57) || VAR15)
    {
        VAR11 |= VAR57;
        if (VAR15)
        {
            VAR11 |= VAR71;
        }
        FUN5(VAR2->VAR52, VAR13, VAR11);
    }
    VAR16 = VAR34;
    if (!(VAR10 & VAR40))
        VAR16 |= VAR36;
    if (VAR11 & VAR71)
    {
        if (VAR19)
        {
            if (VAR10 & VAR62)
                VAR16 |= VAR35;
        }
        else
        {
            if (!(VAR9->VAR29[0] & VAR70) || (VAR10 & VAR62))
                VAR16 |= VAR35;
        }
    }
VAR37:
    VAR11 = VAR11 & VAR9->VAR51;
    VAR11 &= VAR58 & ~(VAR17 - 1);
    VAR24 = VAR3 & VAR72;
    VAR23 = VAR24 & (VAR17 - 1);
    VAR20 = VAR11 + VAR23;
    FUN7(VAR2, VAR24, VAR20, VAR16, VAR5, VAR17);
    return 0;
VAR56:
    VAR14 |= VAR73;
VAR66:
    VAR14 |= VAR74;
VAR54:
    VAR14 |= (VAR18 << VAR75);
    if (VAR19)
        VAR14 |= VAR76;
    if (VAR4 == 2 && (((VAR9->VAR38 & VAR39) && (VAR9->VAR29[4] & VAR41)) || (VAR9->VAR29[4] & VAR69)))
        VAR14 |= VAR77;
    if (VAR9->VAR78 & (1 << VAR79))
    {
        FUN8(VAR2->VAR52, VAR9->VAR80 + FUN9(struct VAR81, VAR82.VAR83), VAR3);
    }
    else
    {
        VAR9->VAR29[2] = VAR3;
    }
    VAR9->VAR14 = VAR14;
    VAR2->VAR49 = VAR79;
    return 1;
}