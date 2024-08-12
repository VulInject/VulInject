static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, VAR6 *VAR7, int *VAR8, VAR9 *VAR10)
{
    int VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    int VAR14;
    int VAR15;
    int VAR16;
    uint32_t VAR17;
    VAR12 = FUN2(VAR2, VAR3);
    VAR13 = FUN3(VAR12);
    VAR14 = (VAR13 & 3);
    VAR16 = (VAR2->VAR18.VAR19 >> ((VAR13 >> 4) & 0x1e)) & 3;
    if (VAR14 == 0)
    {
        VAR11 = 5;
        goto VAR20;
    }
    if (VAR16 == 0 || VAR16 == 2)
    {
        if (VAR14 == 2)
            VAR11 = 9;
        else
            VAR11 = 11;
        goto VAR20;
    }
    if (VAR14 == 2)
    {
        VAR17 = (VAR13 & 0xfff00000) | (VAR3 & 0x000fffff);
        VAR15 = (VAR13 >> 10) & 3;
        VAR11 = 13;
        *VAR10 = 1024 * 1024;
    }
    else
    {
        if (VAR14 == 1)
        {
            VAR12 = (VAR13 & 0xfffffc00) | ((VAR3 >> 10) & 0x3fc);
        }
        else
        {
            VAR12 = (VAR13 & 0xfffff000) | ((VAR3 >> 8) & 0xffc);
        }
        VAR13 = FUN3(VAR12);
        switch (VAR13 & 3)
        {
        case 0:
            VAR11 = 7;
            goto VAR20;
        case 1:
            VAR17 = (VAR13 & 0xffff0000) | (VAR3 & 0xffff);
            VAR15 = (VAR13 >> (4 + ((VAR3 >> 13) & 6))) & 3;
            *VAR10 = 0x10000;
            break;
        case 2:
            VAR17 = (VAR13 & 0xfffff000) | (VAR3 & 0xfff);
            VAR15 = (VAR13 >> (4 + ((VAR3 >> 13) & 6))) & 3;
            *VAR10 = 0x1000;
            break;
        case 3:
            if (VAR14 == 1)
            {
                if (FUN4(VAR2, VAR21))
                {
                    VAR17 = (VAR13 & 0xfffff000) | (VAR3 & 0xfff);
                }
                else
                {
                    VAR11 = 7;
                    goto VAR20;
                }
            }
            else
            {
                VAR17 = (VAR13 & 0xfffffc00) | (VAR3 & 0x3ff);
            }
            VAR15 = (VAR13 >> 4) & 3;
            *VAR10 = 0x400;
            break;
        default:
            FUN5();
        }
        VAR11 = 15;
    }
    *VAR8 = FUN6(VAR2, VAR15, VAR16, VAR4, VAR5);
    if (!*VAR8)
    {
        goto VAR20;
    }
    *VAR7 = VAR17;
    return 0;
VAR20:
    return VAR11 | (VAR16 << 4);
}