static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
{
    int VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14;
    int VAR15;
    int VAR16;
    int VAR17;
    uint32_t VAR18;
    VAR12 = FUN2(VAR2, VAR3);
    VAR13 = FUN3(VAR12);
    VAR15 = (VAR13 & 3);
    if (VAR15 == 0)
    {
        VAR11 = 5;
        VAR17 = 0;
        goto VAR19;
    }
    else if (VAR15 == 2 && (VAR13 & (1 << 18)))
    {
        VAR17 = 0;
    }
    else
    {
        VAR17 = (VAR13 >> 4) & 0x1e;
    }
    VAR17 = (VAR2->VAR20.VAR21 >> VAR17) & 3;
    if (VAR17 == 0 || VAR17 == 2)
    {
        if (VAR15 == 2)
            VAR11 = 9;
        else
            VAR11 = 11;
        goto VAR19;
    }
    if (VAR15 == 2)
    {
        if (VAR13 & (1 << 18))
        {
            VAR18 = (VAR13 & 0xff000000) | (VAR3 & 0x00ffffff);
            *VAR10 = 0x1000000;
        }
        else
        {
            VAR18 = (VAR13 & 0xfff00000) | (VAR3 & 0x000fffff);
            *VAR10 = 0x100000;
        }
        VAR16 = ((VAR13 >> 10) & 3) | ((VAR13 >> 13) & 4);
        VAR14 = VAR13 & (1 << 4);
        VAR11 = 13;
    }
    else
    {
        VAR12 = (VAR13 & 0xfffffc00) | ((VAR3 >> 10) & 0x3fc);
        VAR13 = FUN3(VAR12);
        VAR16 = ((VAR13 >> 4) & 3) | ((VAR13 >> 7) & 4);
        switch (VAR13 & 3)
        {
        case 0:
            VAR11 = 7;
            goto VAR19;
        case 1:
            VAR18 = (VAR13 & 0xffff0000) | (VAR3 & 0xffff);
            VAR14 = VAR13 & (1 << 15);
            *VAR10 = 0x10000;
            break;
        case 2:
        case 3:
            VAR18 = (VAR13 & 0xfffff000) | (VAR3 & 0xfff);
            VAR14 = VAR13 & 1;
            *VAR10 = 0x1000;
            break;
        default:
            FUN4();
        }
        VAR11 = 15;
    }
    if (VAR14 && VAR4 == 2)
        goto VAR19;
    if ((VAR2->VAR20.VAR22 & (1 << 29)) && (VAR16 & 1) == 0)
    {
        VAR11 = (VAR11 == 15) ? 6 : 3;
        goto VAR19;
    }
    *VAR8 = FUN5(VAR2, VAR16, VAR17, VAR4, VAR5);
    if (!*VAR8)
    {
        goto VAR19;
    }
    *VAR7 = VAR18;
    return 0;
VAR19:
    return VAR11 | (VAR17 << 4);
}