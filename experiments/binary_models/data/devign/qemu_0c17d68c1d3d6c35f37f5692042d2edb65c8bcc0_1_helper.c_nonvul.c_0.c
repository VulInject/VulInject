static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = FUN2(FUN3(VAR2));
    int VAR13;
    uint32_t VAR14;
    uint32_t VAR15;
    int VAR16;
    int VAR17;
    int VAR18 = 0;
    int VAR19;
    hwaddr VAR20;
    if (!FUN4(VAR2, &VAR14, VAR3))
    {
        VAR13 = 5;
        goto VAR21;
    }
    VAR15 = FUN5(VAR12->VAR22, VAR14);
    VAR16 = (VAR15 & 3);
    VAR18 = (VAR15 >> 5) & 0x0f;
    VAR19 = (FUN6(VAR2, VAR23) >> (VAR18 * 2)) & 3;
    if (VAR16 == 0)
    {
        VAR13 = 5;
        goto VAR21;
    }
    if (VAR19 == 0 || VAR19 == 2)
    {
        if (VAR16 == 2)
            VAR13 = 9;
        else
            VAR13 = 11;
        goto VAR21;
    }
    if (VAR16 == 2)
    {
        VAR20 = (VAR15 & 0xfff00000) | (VAR3 & 0x000fffff);
        VAR17 = (VAR15 >> 10) & 3;
        VAR13 = 13;
        *VAR10 = 1024 * 1024;
    }
    else
    {
        if (VAR16 == 1)
        {
            VAR14 = (VAR15 & 0xfffffc00) | ((VAR3 >> 10) & 0x3fc);
        }
        else
        {
            VAR14 = (VAR15 & 0xfffff000) | ((VAR3 >> 8) & 0xffc);
        }
        VAR15 = FUN5(VAR12->VAR22, VAR14);
        switch (VAR15 & 3)
        {
        case 0:
            VAR13 = 7;
            goto VAR21;
        case 1:
            VAR20 = (VAR15 & 0xffff0000) | (VAR3 & 0xffff);
            VAR17 = (VAR15 >> (4 + ((VAR3 >> 13) & 6))) & 3;
            *VAR10 = 0x10000;
            break;
        case 2:
            VAR20 = (VAR15 & 0xfffff000) | (VAR3 & 0xfff);
            VAR17 = (VAR15 >> (4 + ((VAR3 >> 9) & 6))) & 3;
            *VAR10 = 0x1000;
            break;
        case 3:
            if (VAR16 == 1)
            {
                if (FUN7(VAR2, VAR24))
                {
                    VAR20 = (VAR15 & 0xfffff000) | (VAR3 & 0xfff);
                }
                else
                {
                    VAR13 = 7;
                    goto VAR21;
                }
            }
            else
            {
                VAR20 = (VAR15 & 0xfffffc00) | (VAR3 & 0x3ff);
            }
            VAR17 = (VAR15 >> 4) & 3;
            *VAR10 = 0x400;
            break;
        default:
            FUN8();
        }
        VAR13 = 15;
    }
    *VAR8 = FUN9(VAR2, VAR17, VAR19, VAR4, VAR5);
    if (!*VAR8)
    {
        goto VAR21;
    }
    *VAR8 |= VAR25;
    *VAR7 = VAR20;
    return 0;
VAR21:
    return VAR13 | (VAR18 << 4);
}