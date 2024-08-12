static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, int VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11 = &VAR2->VAR12[VAR3]->VAR13;
    VAR14 *VAR15 = VAR2->VAR16;
    if (VAR11->VAR17 == VAR18)
    {
        VAR19 *VAR20 = FUN2(sizeof(VAR19));
        VAR20->VAR21 = 0;
        VAR20->VAR22 = 9;
        VAR20->VAR23 = 2;
        VAR20->VAR23 |= VAR11->VAR24->VAR25 ? 0x10 : 0x20;
        VAR20->VAR7 = VAR7;
        VAR20->VAR6 = VAR6;
        VAR20->VAR26 = FUN2(VAR6);
        memcpy(VAR20->VAR26, VAR5, VAR6);
        VAR15->VAR27 = 1;
        FUN3(VAR15, VAR20);
        VAR15->VAR28++;
    }
    else if (VAR11->VAR17 == VAR29)
    {
        if (VAR11->VAR30 == VAR31)
        {
            int VAR32 = 0;
            for (; VAR32 < VAR6; VAR32++)
            {
                VAR15->VAR33[(VAR15->VAR34 + VAR32) % VAR35] = VAR5[VAR32];
            }
            VAR15->VAR36 += VAR6;
            VAR15->VAR34 += VAR6;
            VAR15->VAR34 %= VAR35;
            if (VAR15->VAR37 == -1)
            {
                VAR15->VAR37 = VAR7;
            }
            if (VAR15->VAR38 == -1)
            {
                VAR15->VAR38 = VAR7;
            }
        }
        for (; VAR15->VAR36 >= 4;)
        {
            int VAR39 = 0;
            int VAR40 = 0;
            int VAR41 = 0;
            int VAR42 = 0;
            if (FUN4(&VAR15->VAR33[VAR15->VAR43], &VAR39, &VAR42, &VAR40, &VAR41))
            {
                if (VAR15->VAR36 >= VAR39)
                {
                    int VAR44 = 0x22;
                    int VAR32 = 0;
                    VAR19 *VAR20 = FUN2(sizeof(VAR19));
                    VAR15->VAR45 = VAR40;
                    switch (VAR40)
                    {
                    case 44100:
                        VAR44 |= 0x0C;
                        break;
                    case 22050:
                        VAR44 |= 0x08;
                        break;
                    case 11025:
                        VAR44 |= 0x04;
                        break;
                    }
                    if (!VAR41)
                    {
                        VAR44 |= 0x01;
                    }
                    VAR20->VAR21 = 0;
                    VAR20->VAR22 = 8;
                    VAR20->VAR23 = VAR44;
                    VAR20->VAR7 = VAR15->VAR38;
                    VAR20->VAR6 = VAR39;
                    VAR20->VAR26 = FUN2(VAR39);
                    for (; VAR32 < VAR39; VAR32++)
                    {
                        VAR20->VAR26[VAR32] = VAR15->VAR33[(VAR15->VAR43 + VAR32) % VAR35];
                    }
                    VAR15->VAR43 += VAR39;
                    VAR15->VAR36 -= VAR39;
                    VAR15->VAR43 %= VAR35;
                    VAR15->VAR46 += VAR42;
                    VAR15->VAR38 = -1;
                    VAR15->VAR47 = 1;
                    FUN3(VAR15, VAR20);
                }
                break;
            }
            VAR15->VAR43++;
            VAR15->VAR36--;
            VAR15->VAR43 %= VAR35;
            VAR15->VAR38 = -1;
        }
    }
    FUN5(VAR15, VAR9, 128);
    FUN6(VAR9);
    return 0;
}