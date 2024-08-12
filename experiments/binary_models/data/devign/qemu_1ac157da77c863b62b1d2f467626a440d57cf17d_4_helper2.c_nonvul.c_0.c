int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8, *VAR9;
    uint32_t VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18;
    unsigned long VAR19, VAR20, VAR21;
    FUN2("", VAR3, VAR4, VAR5, VAR2->VAR22);
    if (VAR2->VAR23)
    {
        VAR14 = 0;
        goto VAR24;
    }
    if (!(VAR2->VAR25[0] & VAR26))
    {
        VAR11 = VAR3;
        VAR12 = VAR3 & VAR27;
        VAR16 = VAR28 | VAR29;
        VAR17 = 4096;
        goto VAR30;
    }
    VAR8 = VAR31 + (((VAR2->VAR25[3] & ~0xfff) + ((VAR3 >> 20) & ~3)) & VAR2->VAR32);
    VAR10 = FUN3(VAR8);
    if (!(VAR10 & VAR33))
    {
        VAR14 = 0;
        goto VAR24;
    }
    if ((VAR10 & VAR34) && (VAR2->VAR25[4] & VAR35))
    {
        if (VAR5)
        {
            if (!(VAR10 & VAR36))
                goto VAR37;
            if (VAR4 && !(VAR10 & VAR38))
                goto VAR37;
        }
        else
        {
            if ((VAR2->VAR25[0] & VAR39) && (VAR10 & VAR36) && VAR4 && !(VAR10 & VAR38))
                goto VAR37;
        }
        VAR15 = VAR4 && !(VAR10 & VAR40);
        if (!(VAR10 & VAR41) || VAR15)
        {
            VAR10 |= VAR41;
            if (VAR15)
                VAR10 |= VAR40;
            FUN4(VAR8, VAR10);
        }
        VAR11 = VAR10 & ~0x003ff000;
        VAR13 = VAR11;
        VAR17 = 4096 * 1024;
        VAR12 = VAR3 & ~0x003fffff;
    }
    else
    {
        if (!(VAR10 & VAR41))
        {
            VAR10 |= VAR41;
            FUN4(VAR8, VAR10);
        }
        VAR9 = VAR31 + (((VAR10 & ~0xfff) + ((VAR3 >> 10) & 0xffc)) & VAR2->VAR32);
        VAR11 = FUN3(VAR9);
        if (!(VAR11 & VAR33))
        {
            VAR14 = 0;
            goto VAR24;
        }
        VAR13 = VAR11 & VAR10;
        if (VAR5)
        {
            if (!(VAR13 & VAR36))
                goto VAR37;
            if (VAR4 && !(VAR13 & VAR38))
                goto VAR37;
        }
        else
        {
            if ((VAR2->VAR25[0] & VAR39) && (VAR13 & VAR36) && VAR4 && !(VAR13 & VAR38))
                goto VAR37;
        }
        VAR15 = VAR4 && !(VAR11 & VAR40);
        if (!(VAR11 & VAR41) || VAR15)
        {
            VAR11 |= VAR41;
            if (VAR15)
                VAR11 |= VAR40;
            FUN4(VAR9, VAR11);
        }
        VAR17 = 4096;
        VAR12 = VAR3 & ~0xfff;
    }
    VAR16 = VAR28;
    if (VAR11 & VAR40)
    {
        if (VAR5)
        {
            if (VAR13 & VAR38)
                VAR16 |= VAR29;
        }
        else
        {
            if (!(VAR2->VAR25[0] & VAR39) || !(VAR13 & VAR36) || (VAR13 & VAR38))
                VAR16 |= VAR29;
        }
    }
VAR30:
    VAR11 = VAR11 & VAR2->VAR32;
    VAR21 = (VAR3 & VAR27) & (VAR17 - 1);
    VAR19 = (VAR11 & VAR27) + VAR21;
    VAR20 = VAR12 + VAR21;
    VAR18 = FUN5(VAR2, VAR20, VAR19, VAR16, VAR5, VAR6);
    return VAR18;
VAR37:
    VAR14 = VAR42;
VAR24:
    VAR2->VAR25[2] = VAR3;
    VAR2->VAR14 = (VAR4 << VAR43) | VAR14;
    if (VAR5)
        VAR2->VAR14 |= VAR44;
    return 1;
}