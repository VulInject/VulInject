static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7, VAR8, VAR9;
    VAR4->VAR2 = VAR2;
    VAR4->VAR10 = VAR2->VAR10;
    FUN2(&VAR4->VAR11, VAR2);
    VAR8 = VAR4->VAR8 = VAR2->VAR8;
    VAR9 = VAR4->VAR9 = VAR2->VAR9;
    assert(VAR8 && VAR9);
    VAR2->VAR12 = FUN3(1024 * 30);
    VAR2->VAR13 = FUN3(1024 * 30);
    VAR4->VAR14 = 2;
    VAR2->VAR15 = &VAR4->VAR16;
    switch (VAR2->VAR17)
    {
    case VAR18:
        VAR4->VAR19 = 12;
        break;
    case VAR20:
        VAR4->VAR19 = 16;
        break;
    default:
        FUN4(VAR2, VAR21, "");
        return -1;
    }
    VAR2->VAR22 = VAR4->VAR19;
    VAR4->VAR23 = VAR4->VAR19 >= 24;
    VAR4->VAR24 = VAR2->VAR25;
    VAR4->VAR26 = VAR2->VAR10 & VAR27 ? 1 : 0;
    if (VAR2->VAR28 == 1)
    {
        VAR4->VAR29 = VAR2->VAR28;
        if (VAR4->VAR10 & (VAR30 | VAR31))
        {
            FUN4(VAR2, VAR21, "");
            return -1;
        }
    }
    else
        VAR4->VAR29 = 0;
    if (VAR2->VAR32->VAR33 == VAR34)
    {
        if (VAR2->VAR17 == VAR18)
        {
            FUN4(VAR2, VAR21, "");
            return -1;
        }
        if (VAR2->VAR28)
        {
            FUN4(VAR2, VAR21, "");
            return -1;
        }
        if (VAR4->VAR26 != (VAR9 > 288))
            FUN4(VAR2, VAR35, "");
    }
    else if (VAR2->VAR36 >= 0)
    {
        FUN4(VAR2, VAR21, "");
        return -1;
    }
    ((VAR37 *)VAR2->VAR12)[0] = VAR4->VAR24;
    ((VAR37 *)VAR2->VAR12)[1] = VAR4->VAR19;
    ((VAR37 *)VAR2->VAR12)[2] = VAR4->VAR26 ? 0x10 : 0x20;
    if (VAR4->VAR29)
        ((VAR37 *)VAR2->VAR12)[2] |= 0x40;
    ((VAR37 *)VAR2->VAR12)[3] = 0;
    VAR4->VAR2->VAR38 = 4;
    if (VAR2->VAR39)
    {
        char *VAR40 = VAR2->VAR39;
        for (VAR6 = 0; VAR6 < 3; VAR6++)
            for (VAR7 = 0; VAR7 < 256; VAR7++)
                VAR4->VAR41[VAR6][VAR7] = 1;
        for (;;)
        {
            for (VAR6 = 0; VAR6 < 3; VAR6++)
            {
                char *VAR42;
                for (VAR7 = 0; VAR7 < 256; VAR7++)
                {
                    VAR4->VAR41[VAR6][VAR7] += FUN5(VAR40, &VAR42, 0);
                    if (VAR42 == VAR40)
                        return -1;
                    VAR40 = VAR42;
                }
            }
            if (VAR40[0] == 0 || VAR40[1] == 0 || VAR40[2] == 0)
                break;
        }
    }
    else
    {
        for (VAR6 = 0; VAR6 < 3; VAR6++)
            for (VAR7 = 0; VAR7 < 256; VAR7++)
            {
                int VAR43 = FUN6(VAR7, 256 - VAR7);
                VAR4->VAR41[VAR6][VAR7] = 100000000 / (VAR43 + 1);
            }
    }
    for (VAR6 = 0; VAR6 < 3; VAR6++)
    {
        FUN7(VAR4->VAR44[VAR6], VAR4->VAR41[VAR6], 256);
        if (FUN8(VAR4->VAR45[VAR6], VAR4->VAR44[VAR6]) < 0)
        {
            return -1;
        }
        VAR4->VAR2->VAR38 += FUN9(VAR4, VAR4->VAR44[VAR6], &((VAR37 *)VAR4->VAR2->VAR12)[VAR4->VAR2->VAR38]);
    }
    if (VAR4->VAR29)
    {
        for (VAR6 = 0; VAR6 < 3; VAR6++)
        {
            int VAR46 = VAR8 * VAR9 / (VAR6 ? 40 : 10);
            for (VAR7 = 0; VAR7 < 256; VAR7++)
            {
                int VAR43 = FUN6(VAR7, 256 - VAR7);
                VAR4->VAR41[VAR6][VAR7] = VAR46 / (VAR43 + 1);
            }
        }
    }
    else
    {
        for (VAR6 = 0; VAR6 < 3; VAR6++)
            for (VAR7 = 0; VAR7 < 256; VAR7++)
                VAR4->VAR41[VAR6][VAR7] = 0;
    }
    VAR4->VAR47 = 0;
    return 0;
}