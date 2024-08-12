static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, ARMMMUIdx VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
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
    uint32_t VAR21;
    if (!FUN4(VAR2, VAR5, &VAR14, VAR3))
    {
        VAR13 = 5;
        goto VAR22;
    }
    VAR15 = FUN5(VAR12->VAR23, VAR14);
    VAR16 = (VAR15 & 3);
    VAR18 = (VAR15 >> 5) & 0x0f;
    if (FUN6(VAR2, VAR5) == 1)
    {
        VAR21 = VAR2->VAR24.VAR25;
    }
    else
    {
        VAR21 = VAR2->VAR24.VAR26;
    }
    VAR19 = (VAR21 >> (VAR18 * 2)) & 3;
    if (VAR16 == 0)
    {
        VAR13 = 5;
        goto VAR22;
    }
    if (VAR19 == 0 || VAR19 == 2)
    {
        if (VAR16 == 2)
            VAR13 = 9;
        else
            VAR13 = 11;
        goto VAR22;
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
        VAR15 = FUN5(VAR12->VAR23, VAR14);
        switch (VAR15 & 3)
        {
        case 0:
            VAR13 = 7;
            goto VAR22;
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
                if (FUN7(VAR2, VAR27))
                {
                    VAR20 = (VAR15 & 0xfffff000) | (VAR3 & 0xfff);
                }
                else
                {
                    VAR13 = 7;
                    goto VAR22;
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
    *VAR8 = FUN9(VAR2, VAR5, VAR17, VAR19);
    *VAR8 |= *VAR8 ? VAR28 : 0;
    if (!(*VAR8 & (1 << VAR4)))
    {
        goto VAR22;
    }
    *VAR7 = VAR20;
    return 0;
VAR22:
    return VAR13 | (VAR18 << 4);
}