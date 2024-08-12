static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = FUN2(VAR2);
    int VAR13;
    uint32_t VAR14;
    uint32_t VAR15;
    uint32_t VAR16;
    uint32_t VAR17 = 0;
    int VAR18;
    int VAR19;
    int VAR20 = 0;
    int VAR21;
    hwaddr VAR22;
    VAR14 = FUN3(VAR2, VAR3);
    VAR15 = FUN4(VAR12->VAR23, VAR14);
    VAR18 = (VAR15 & 3);
    if (VAR18 == 0 || (VAR18 == 3 && !FUN5(VAR2, VAR24)))
    {
        VAR13 = 5;
        goto VAR25;
    }
    if ((VAR18 == 1) || !(VAR15 & (1 << 18)))
    {
        VAR20 = (VAR15 >> 5) & 0x0f;
    }
    VAR21 = (VAR2->VAR26.VAR27 >> (VAR20 * 2)) & 3;
    if (VAR21 == 0 || VAR21 == 2)
    {
        if (VAR18 != 1)
        {
            VAR13 = 9;
        }
        else
        {
            VAR13 = 11;
        }
        goto VAR25;
    }
    if (VAR18 != 1)
    {
        if (VAR15 & (1 << 18))
        {
            VAR22 = (VAR15 & 0xff000000) | (VAR3 & 0x00ffffff);
            *VAR10 = 0x1000000;
        }
        else
        {
            VAR22 = (VAR15 & 0xfff00000) | (VAR3 & 0x000fffff);
            *VAR10 = 0x100000;
        }
        VAR19 = ((VAR15 >> 10) & 3) | ((VAR15 >> 13) & 4);
        VAR16 = VAR15 & (1 << 4);
        VAR17 = VAR15 & 1;
        VAR13 = 13;
    }
    else
    {
        if (FUN5(VAR2, VAR24))
        {
            VAR17 = (VAR15 >> 2) & 1;
        }
        VAR14 = (VAR15 & 0xfffffc00) | ((VAR3 >> 10) & 0x3fc);
        VAR15 = FUN4(VAR12->VAR23, VAR14);
        VAR19 = ((VAR15 >> 4) & 3) | ((VAR15 >> 7) & 4);
        switch (VAR15 & 3)
        {
        case 0:
            VAR13 = 7;
            goto VAR25;
        case 1:
            VAR22 = (VAR15 & 0xffff0000) | (VAR3 & 0xffff);
            VAR16 = VAR15 & (1 << 15);
            *VAR10 = 0x10000;
            break;
        case 2:
        case 3:
            VAR22 = (VAR15 & 0xfffff000) | (VAR3 & 0xfff);
            VAR16 = VAR15 & 1;
            *VAR10 = 0x1000;
            break;
        default:
            FUN6();
        }
        VAR13 = 15;
    }
    if (VAR21 == 3)
    {
        *VAR8 = VAR28 | VAR29 | VAR30;
    }
    else
    {
        if (VAR17 && !VAR5)
        {
            VAR16 = 1;
        }
        if (VAR16 && VAR4 == 2)
            goto VAR25;
        if ((VAR2->VAR26.VAR31 & VAR32) && (VAR19 & 1) == 0)
        {
            VAR13 = (VAR13 == 15) ? 6 : 3;
            goto VAR25;
        }
        *VAR8 = FUN7(VAR2, VAR19, VAR21, VAR4, VAR5);
        if (!*VAR8)
        {
            goto VAR25;
        }
        if (!VAR16)
        {
            *VAR8 |= VAR30;
        }
    }
    *VAR7 = VAR22;
    return 0;
VAR25:
    return VAR13 | (VAR20 << 4);
}