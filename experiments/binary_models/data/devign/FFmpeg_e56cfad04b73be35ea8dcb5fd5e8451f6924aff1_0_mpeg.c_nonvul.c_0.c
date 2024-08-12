static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR3 *VAR6, VAR3 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int64_t VAR17, VAR18;
    int64_t VAR19 = FUN2(&VAR2->VAR20);
VAR21:
    FUN3(&VAR2->VAR20, VAR19, VAR22);
VAR23:
    VAR9->VAR24 = 0xff;
    VAR12 = VAR25;
    VAR13 = FUN4(&VAR2->VAR20, &VAR12, &VAR9->VAR24);
    VAR19 = FUN2(&VAR2->VAR20);
    if (VAR13 < 0)
        return VAR26;
    if (VAR13 == VAR27)
        goto VAR23;
    if (VAR13 == VAR28)
        goto VAR23;
    if (VAR13 == VAR29 || VAR13 == VAR30)
    {
        VAR11 = FUN5(&VAR2->VAR20);
        FUN6(&VAR2->VAR20, VAR11);
        goto VAR23;
    }
    if (VAR13 == VAR31)
    {
        FUN7(VAR9, &VAR2->VAR20);
        goto VAR23;
    }
    if (!((VAR13 >= 0x1c0 && VAR13 <= 0x1df) || (VAR13 >= 0x1e0 && VAR13 <= 0x1ef) || (VAR13 == 0x1bd)))
        goto VAR23;
    if (VAR4)
    {
        *VAR4 = FUN2(&VAR2->VAR20) - 4;
    }
    VAR11 = FUN5(&VAR2->VAR20);
    VAR17 = VAR32;
    VAR18 = VAR32;
    for (;;)
    {
        if (VAR11 < 1)
            goto VAR21;
        VAR14 = FUN8(&VAR2->VAR20);
        VAR11--;
        if (VAR14 != 0xff)
            break;
    }
    if ((VAR14 & 0xc0) == 0x40)
    {
        if (VAR11 < 2)
            goto VAR21;
        FUN8(&VAR2->VAR20);
        VAR14 = FUN8(&VAR2->VAR20);
        VAR11 -= 2;
    }
    if ((VAR14 & 0xf0) == 0x20)
    {
        if (VAR11 < 4)
            goto VAR21;
        VAR18 = VAR17 = FUN9(&VAR2->VAR20, VAR14);
        VAR11 -= 4;
    }
    else if ((VAR14 & 0xf0) == 0x30)
    {
        if (VAR11 < 9)
            goto VAR21;
        VAR17 = FUN9(&VAR2->VAR20, VAR14);
        VAR18 = FUN9(&VAR2->VAR20, -1);
        VAR11 -= 9;
    }
    else if ((VAR14 & 0xc0) == 0x80)
    {
        if ((VAR14 & 0x30) != 0)
        {
            goto VAR23;
        }
        VAR15 = FUN8(&VAR2->VAR20);
        VAR16 = FUN8(&VAR2->VAR20);
        VAR11 -= 2;
        if (VAR16 > VAR11)
            goto VAR21;
        if ((VAR15 & 0xc0) == 0x80)
        {
            VAR18 = VAR17 = FUN9(&VAR2->VAR20, -1);
            if (VAR16 < 5)
                goto VAR21;
            VAR16 -= 5;
            VAR11 -= 5;
        }
        if ((VAR15 & 0xc0) == 0xc0)
        {
            VAR17 = FUN9(&VAR2->VAR20, -1);
            VAR18 = FUN9(&VAR2->VAR20, -1);
            if (VAR16 < 10)
                goto VAR21;
            VAR16 -= 10;
            VAR11 -= 10;
        }
        VAR11 -= VAR16;
        while (VAR16 > 0)
        {
            FUN8(&VAR2->VAR20);
            VAR16--;
        }
    }
    else if (VAR14 != 0xf)
        goto VAR23;
    if (VAR13 == VAR33 && !VAR9->VAR34[VAR13 & 0xff])
    {
        if (VAR11 < 1)
            goto VAR21;
        VAR13 = FUN8(&VAR2->VAR20);
        VAR11--;
        if (VAR13 >= 0x80 && VAR13 <= 0xbf)
        {
            if (VAR11 < 3)
                goto VAR21;
            FUN8(&VAR2->VAR20);
            FUN8(&VAR2->VAR20);
            FUN8(&VAR2->VAR20);
            VAR11 -= 3;
        }
    }
    if (VAR18 != VAR32 && VAR4)
    {
        int VAR35;
        for (VAR35 = 0; VAR35 < VAR2->VAR36; VAR35++)
        {
            if (VAR13 == VAR2->VAR37[VAR35]->VAR38)
            {
                FUN10(VAR2->VAR37[VAR35], *VAR4, VAR18, 0, 0, VAR39);
            }
        }
    }
    *VAR5 = VAR13;
    *VAR6 = VAR17;
    *VAR7 = VAR18;
    return VAR11;
}