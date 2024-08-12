static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    VAR19 *VAR20;
    VAR6 = FUN2(sizeof(VAR5));
    if (!VAR6)
        return -VAR21;
    VAR2->VAR22 = VAR6;
    VAR6->VAR23 = 0xff;
    VAR7 = VAR24;
    for (;;)
    {
        while (VAR7 > 0)
        {
            VAR8 = FUN3(&VAR2->VAR25, &VAR7, &VAR6->VAR23);
            if (VAR8 == VAR26)
                goto VAR27;
        }
        return -VAR28;
    VAR27:
        FUN4(&VAR2->VAR25);
        FUN5(&VAR2->VAR25);
        FUN5(&VAR2->VAR25);
        VAR13 = FUN4(&VAR2->VAR25) << 16;
        VAR13 |= FUN4(&VAR2->VAR25) << 8;
        VAR13 |= FUN4(&VAR2->VAR25);
        VAR13 &= (1 << 22) - 1;
        VAR6->VAR13 = VAR13;
        VAR8 = FUN3(&VAR2->VAR25, &VAR7, &VAR6->VAR23);
        if (VAR8 == VAR29)
            break;
    }
    VAR7 = FUN5(&VAR2->VAR25);
    VAR10 = FUN4(&VAR2->VAR25) << 16;
    VAR10 |= FUN4(&VAR2->VAR25) << 8;
    VAR10 |= FUN4(&VAR2->VAR25);
    VAR10 = (VAR10 >> 1) & ((1 << 22) - 1);
    VAR11 = FUN4(&VAR2->VAR25) >> 2;
    VAR12 = FUN4(&VAR2->VAR25) & 0x1f;
    FUN4(&VAR2->VAR25);
    FUN6("", (VAR6->VAR13 * 50 * 8) / 1000);
    FUN6("", VAR10);
    FUN6("", VAR11);
    FUN6("", VAR12);
    VAR7 -= 6;
    VAR2->VAR30 = 0;
    while (VAR7 > 0)
    {
        VAR9 = FUN4(&VAR2->VAR25);
        VAR7--;
        if ((VAR9 & 0x80) == 0)
            break;
        VAR14 = FUN5(&VAR2->VAR25);
        VAR7 -= 2;
        if (VAR9 >= 0xc0 && VAR9 <= 0xdf)
        {
            VAR18 = VAR31;
            VAR15 = VAR32;
            VAR16 = 1;
            VAR9 = VAR9 | 0x100;
        }
        else if (VAR9 >= 0xe0 && VAR9 <= 0xef)
        {
            VAR18 = VAR33;
            VAR15 = VAR34;
            VAR16 = 1;
            VAR9 = VAR9 | 0x100;
        }
        else if (VAR9 == 0xb8)
        {
            VAR18 = VAR31;
            VAR15 = VAR35;
            VAR16 = VAR11;
            VAR9 = 0x80;
        }
        else if (VAR9 == 0xb9)
        {
            VAR18 = VAR33;
            VAR15 = VAR34;
            VAR16 = VAR12;
            VAR9 = 0x1e0;
        }
        else
        {
            VAR18 = 0;
            VAR15 = 0;
            VAR16 = 0;
        }
        for (VAR17 = 0; VAR17 < VAR16; VAR17++)
        {
            VAR20 = FUN2(sizeof(VAR19));
            if (!VAR20)
                return -VAR21;
            VAR2->VAR36[VAR2->VAR30++] = VAR20;
            VAR20->VAR37 = VAR9 + VAR17;
            VAR20->VAR38.VAR39 = VAR18;
            VAR20->VAR38.VAR15 = VAR15;
        }
    }
    return 0;
}