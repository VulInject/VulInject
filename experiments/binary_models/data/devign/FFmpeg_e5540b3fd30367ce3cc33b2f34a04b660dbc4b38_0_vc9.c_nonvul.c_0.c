static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5 = 0, VAR6;
    uint8_t VAR7[4], VAR8[4], VAR9, *VAR10;
    int VAR11, VAR12;
    int VAR13 = 0;
    int VAR14, VAR15;
    int VAR16;
    static const int VAR17[6] = {0, 2, 3, 4, 5, 8}, VAR18[6] = {0, 1, 3, 7, 15, 31};
    int VAR19 = 1, VAR20;
    int VAR21, VAR22;
    int VAR23, VAR24;
    int VAR25;
    int VAR26, VAR27;
    int VAR28, VAR29;
    if (VAR2->VAR30 < 5)
        VAR2->VAR31 = &VAR32[0];
    else if (VAR2->VAR30 < 13)
        VAR2->VAR31 = &VAR32[1];
    else
        VAR2->VAR31 = &VAR32[2];
    switch (VAR2->VAR33)
    {
    case 1:
        VAR23 = 10;
        VAR24 = 9;
        break;
    case 2:
        VAR23 = 12;
        VAR24 = 10;
        break;
    case 3:
        VAR23 = 13;
        VAR24 = 11;
        break;
    default:
        VAR23 = 9;
        VAR24 = 8;
        break;
    }
    VAR25 = VAR2->VAR34 & 1;
    VAR23 -= VAR25;
    VAR24 -= VAR25;
    memset(VAR2->VAR35, 0, (VAR2->VAR36 + 1) << 2);
    for (VAR4 = 0; VAR4 < VAR2->VAR37; VAR4++)
    {
        *((VAR38 *)VAR8) = 0x00000000;
        VAR10 = VAR2->VAR35 + 4;
        for (VAR3 = 0; VAR3 < VAR2->VAR36; VAR3++)
        {
            if (VAR2->VAR39.VAR40)
                VAR2->VAR39.VAR41[VAR5] = FUN2(&VAR2->VAR42, 1);
            if (VAR2->VAR43.VAR40)
                VAR2->VAR43.VAR41[VAR5] = FUN2(&VAR2->VAR42, 1);
            if (!VAR13)
            {
                if (!VAR2->VAR43.VAR41[VAR5])
                {
                    FUN3(VAR21, VAR22);
                    if (VAR2->VAR34 == VAR44 || VAR2->VAR34 == VAR45)
                        VAR11 = FUN2(&VAR2->VAR42, 1);
                    if (VAR20 && !VAR19)
                    {
                        FUN4();
                        VAR12 = FUN2(&VAR2->VAR42, 1);
                    }
                    else if (VAR19)
                    {
                        if (VAR20)
                            VAR12 = FUN2(&VAR2->VAR42, 1);
                        FUN5(VAR2->VAR46->VAR47, VAR48);
                        FUN4();
                    }
                    if (!VAR2->VAR49)
                        VAR16 = FUN6(&VAR2->VAR42, VAR2->VAR31->VAR47, VAR50, 12);
                }
                else
                {
                    if (VAR2->VAR34 == VAR44 || VAR2->VAR34 == VAR45)
                        VAR11 = FUN2(&VAR2->VAR42, 1);
                }
            }
            else
            {
                if (!VAR2->VAR43.VAR41[VAR5])
                {
                    FUN5(VAR2->VAR46->VAR47, VAR48);
                    for (VAR6 = 0; VAR6 < 4; VAR6++)
                    {
                        if (VAR7[VAR6])
                        {
                            FUN3(VAR21, VAR22);
                        }
                        if (VAR2->VAR34 == VAR45)
                            VAR11 = FUN2(&VAR2->VAR42, 1);
                        FUN4();
                        if (VAR20 && VAR26)
                            VAR12 = FUN2(&VAR2->VAR42, 1);
                        if (!VAR2->VAR49)
                            VAR16 = FUN6(&VAR2->VAR42, VAR2->VAR31->VAR47, VAR50, 12);
                    }
                }
                else
                {
                    for (VAR6 = 0; VAR6 < 4; VAR6++)
                    {
                        if (VAR2->VAR34 == VAR45)
                            VAR11 = FUN2(&VAR2->VAR42, 1);
                    }
                }
            }
            FUN7(VAR2->VAR51, VAR52, ""
                                           "",
                   VAR5, VAR10[0], VAR10[1], VAR10[2], VAR10[3], VAR8[0], VAR8[1], VAR8[2], VAR8[3], VAR7[0], VAR7[1], VAR7[2], VAR7[3]);
            *((VAR38 *)VAR10) = *((VAR38 *)VAR8);
            *((VAR38 *)VAR8) = *((VAR38 *)VAR7);
            VAR5++;
        }
    }
    return 0;
}