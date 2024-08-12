static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3 = 0, VAR4 = 0;
    unsigned long VAR5 = 0;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11 = 0, VAR12 = -1;
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    int VAR23[2][4] = {{0}, {0}};
    VAR24 *VAR25;
    const unsigned char *VAR26 = VAR2->VAR26;
    const unsigned char *VAR27 = VAR2->VAR26 + VAR2->VAR28;
    while (VAR26 + 8 <= VAR27)
    {
        VAR3 = FUN2(&VAR26);
        VAR5 = FUN3(&VAR26);
        VAR4 = FUN2(&VAR26);
        if (VAR3 == VAR29)
            break;
        if (VAR3 == VAR30)
        {
            if ((VAR9 = VAR4 >> 8) == 0)
                VAR9 = 256;
            if ((VAR10 = VAR4 & 0xff) == 0 && VAR9 * 6 < VAR5)
                VAR10 = 256;
            for (VAR6 = 0; VAR6 < VAR9; VAR6++)
            {
                VAR2->VAR31[VAR6].VAR20[0] = *VAR26++;
                VAR2->VAR31[VAR6].VAR20[1] = *VAR26++;
                VAR2->VAR31[VAR6].VAR20[2] = *VAR26++;
                VAR2->VAR31[VAR6].VAR20[3] = *VAR26++;
                VAR2->VAR31[VAR6].VAR32 = *VAR26++;
                VAR2->VAR31[VAR6].VAR33 = *VAR26++;
            }
            for (VAR6 = 0; VAR6 < VAR10; VAR6++)
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                    VAR2->VAR34[VAR6].VAR35[VAR7] = *VAR26++;
        }
    }
    VAR14 = VAR15 = VAR16 = 0;
    if (VAR5 > VAR27 - VAR26)
    {
        FUN4(VAR2->VAR36, VAR37, "");
        VAR5 = VAR27 - VAR26;
    }
    while (VAR14 < VAR5)
    {
        for (VAR18 = VAR16; VAR18 < VAR16 + 16; VAR18 += 8)
            for (VAR17 = VAR15; VAR17 < VAR15 + 16; VAR17 += 8)
            {
                if (VAR14 >= VAR5)
                {
                    FUN4(VAR2->VAR36, VAR37, "");
                    return;
                }
                if (VAR12 < 0)
                {
                    VAR11 = VAR26[VAR14++];
                    VAR11 |= (VAR26[VAR14++] << 8);
                    VAR12 = 7;
                }
                VAR13 = (VAR11 >> (VAR12 * 2)) & 0x3;
                VAR23[0][VAR13]++;
                VAR12--;
                switch (VAR13)
                {
                case VAR38:
                    break;
                case VAR39:
                    VAR21 = 8 - (VAR26[VAR14] >> 4) - ((signed char)(VAR4 >> 8));
                    VAR22 = 8 - (VAR26[VAR14++] & 0xf) - ((signed char)VAR4);
                    FUN5(VAR2, VAR17, VAR18, VAR21, VAR22);
                    break;
                case VAR40:
                    VAR25 = VAR2->VAR34 + VAR26[VAR14++];
                    FUN6(VAR2, VAR17, VAR18, VAR2->VAR31 + VAR25->VAR35[0]);
                    FUN6(VAR2, VAR17 + 4, VAR18, VAR2->VAR31 + VAR25->VAR35[1]);
                    FUN6(VAR2, VAR17, VAR18 + 4, VAR2->VAR31 + VAR25->VAR35[2]);
                    FUN6(VAR2, VAR17 + 4, VAR18 + 4, VAR2->VAR31 + VAR25->VAR35[3]);
                    break;
                case VAR41:
                    for (VAR8 = 0; VAR8 < 4; VAR8++)
                    {
                        VAR19 = VAR17;
                        VAR20 = VAR18;
                        if (VAR8 & 0x01)
                            VAR19 += 4;
                        if (VAR8 & 0x02)
                            VAR20 += 4;
                        if (VAR14 >= VAR5)
                        {
                            FUN4(VAR2->VAR36, VAR37, "");
                            return;
                        }
                        if (VAR12 < 0)
                        {
                            VAR11 = VAR26[VAR14++];
                            VAR11 |= (VAR26[VAR14++] << 8);
                            VAR12 = 7;
                        }
                        VAR13 = (VAR11 >> (VAR12 * 2)) & 0x3;
                        VAR23[1][VAR13]++;
                        VAR12--;
                        switch (VAR13)
                        {
                        case VAR38:
                            break;
                        case VAR39:
                            VAR21 = 8 - (VAR26[VAR14] >> 4) - ((signed char)(VAR4 >> 8));
                            VAR22 = 8 - (VAR26[VAR14++] & 0xf) - ((signed char)VAR4);
                            FUN7(VAR2, VAR19, VAR20, VAR21, VAR22);
                            break;
                        case VAR40:
                            VAR25 = VAR2->VAR34 + VAR26[VAR14++];
                            FUN8(VAR2, VAR19, VAR20, VAR2->VAR31 + VAR25->VAR35[0]);
                            FUN8(VAR2, VAR19 + 2, VAR20, VAR2->VAR31 + VAR25->VAR35[1]);
                            FUN8(VAR2, VAR19, VAR20 + 2, VAR2->VAR31 + VAR25->VAR35[2]);
                            FUN8(VAR2, VAR19 + 2, VAR20 + 2, VAR2->VAR31 + VAR25->VAR35[3]);
                            break;
                        case VAR41:
                            FUN8(VAR2, VAR19, VAR20, VAR2->VAR31 + VAR26[VAR14]);
                            FUN8(VAR2, VAR19 + 2, VAR20, VAR2->VAR31 + VAR26[VAR14 + 1]);
                            FUN8(VAR2, VAR19, VAR20 + 2, VAR2->VAR31 + VAR26[VAR14 + 2]);
                            FUN8(VAR2, VAR19 + 2, VAR20 + 2, VAR2->VAR31 + VAR26[VAR14 + 3]);
                            VAR14 += 4;
                            break;
                        }
                    }
                    break;
                default:
                    FUN4(VAR2->VAR36, VAR37, "", VAR13);
                }
            }
        VAR15 += 16;
        if (VAR15 >= VAR2->VAR42)
        {
            VAR15 -= VAR2->VAR42;
            VAR16 += 16;
        }
        if (VAR16 >= VAR2->VAR43)
            break;
    }
}