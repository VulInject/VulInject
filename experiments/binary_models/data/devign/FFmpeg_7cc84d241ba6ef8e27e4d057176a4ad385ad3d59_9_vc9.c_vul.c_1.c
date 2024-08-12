static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR2->VAR4.VAR6;
    int VAR7 = 0, VAR8;
    uint8_t VAR9[4], VAR10[4], VAR11, *VAR12;
    int VAR13;
    int VAR14 = 0;
    int VAR15, VAR16;
    int VAR17;
    static const int VAR18[6] = {0, 2, 3, 4, 5, 8}, VAR19[6] = {0, 1, 3, 7, 15, 31};
    int VAR20 = 1;
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
    memset(VAR2->VAR35, 0, VAR4->VAR36 << 2);
    for (VAR4->VAR37 = 0; VAR4->VAR37 < VAR4->VAR38; VAR4->VAR37++)
    {
        *((VAR39 *)VAR10) = 0x00000000;
        VAR12 = VAR2->VAR35 + 4;
        for (VAR4->VAR40 = 0; VAR4->VAR40 < VAR4->VAR41; VAR4->VAR40++, VAR12 += 4)
        {
            if (VAR2->VAR42.VAR43)
                VAR2->VAR42.VAR44[VAR7] = FUN2(VAR6, 1);
            if (VAR2->VAR45.VAR43)
                VAR2->VAR45.VAR44[VAR7] = FUN2(VAR6, 1);
            if (!VAR14)
            {
                if (!VAR2->VAR45.VAR44[VAR7])
                {
                    FUN3(VAR21, VAR22);
                    if (VAR2->VAR34 == VAR46 || VAR2->VAR34 == VAR47)
                        VAR13 = FUN2(VAR6, 1);
                    if (VAR4->VAR48 && !VAR20)
                    {
                        FUN4();
                        VAR4->VAR49 = FUN2(VAR6, 1);
                    }
                    else if (VAR20)
                    {
                        if (VAR4->VAR48)
                            VAR4->VAR49 = FUN2(VAR6, 1);
                        VAR11 = FUN5(VAR6, VAR2->VAR50->VAR51, VAR52, 2);
                        VAR9[0] = (VAR12[-1] == VAR12[2]) ? VAR10[1] : VAR12[2];
                        VAR9[0] ^= ((VAR11 >> 5) & 0x01);
                        VAR9[1] = (VAR12[2] == VAR12[3]) ? VAR9[0] : VAR12[3];
                        VAR9[1] ^= ((VAR11 >> 4) & 0x01);
                        VAR9[2] = (VAR10[1] == VAR9[0]) ? VAR10[3] : VAR9[0];
                        VAR9[2] ^= ((VAR11 >> 3) & 0x01);
                        VAR9[3] = (VAR9[1] == VAR9[0]) ? VAR9[2] : VAR9[1];
                        VAR9[3] ^= ((VAR11 >> 2) & 0x01);
                        FUN4();
                    }
                    if (!VAR2->VAR53)
                        VAR17 = FUN5(VAR6, VAR2->VAR31->VAR51, VAR54, 12);
                }
                else
                {
                    if (VAR2->VAR34 == VAR46 || VAR2->VAR34 == VAR47)
                        VAR13 = FUN2(VAR6, 1);
                }
            }
            else
            {
                if (!VAR2->VAR45.VAR44[VAR7])
                {
                    FUN6(VAR2->VAR50->VAR51, VAR52);
                    for (VAR8 = 0; VAR8 < 4; VAR8++)
                    {
                        if (VAR9[VAR8])
                        {
                            FUN3(VAR21, VAR22);
                        }
                        if (VAR2->VAR34 == VAR47)
                            VAR13 = FUN2(VAR6, 1);
                        FUN4();
                        if (VAR4->VAR48 && VAR26)
                            VAR4->VAR49 = FUN2(VAR6, 1);
                        if (!VAR2->VAR53)
                            VAR17 = FUN5(VAR6, VAR2->VAR31->VAR51, VAR54, 12);
                    }
                }
                else
                {
                    for (VAR8 = 0; VAR8 < 4; VAR8++)
                    {
                        if (VAR2->VAR34 == VAR47)
                            VAR13 = FUN2(VAR6, 1);
                    }
                }
            }
            FUN7(VAR4->VAR55, VAR56, ""
                                           "",
                   VAR7, VAR12[0], VAR12[1], VAR12[2], VAR12[3], VAR10[0], VAR10[1], VAR10[2], VAR10[3], VAR9[0], VAR9[1], VAR9[2], VAR9[3]);
            *((VAR39 *)VAR12) = *((VAR39 *)VAR10);
            *((VAR39 *)VAR10) = *((VAR39 *)VAR9);
            VAR7++;
        }
    }
    return 0;
}