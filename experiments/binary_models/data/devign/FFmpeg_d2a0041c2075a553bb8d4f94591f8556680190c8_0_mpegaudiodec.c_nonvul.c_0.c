static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    int VAR9;
    int VAR10, VAR11;
    VAR12 *VAR13;
    int VAR14 = FUN2(VAR7, VAR2->VAR15.VAR16);
    VAR8 = 0;
    for (VAR9 = 0; VAR9 < 3; VAR9++)
    {
        int VAR17, VAR18, VAR19, VAR20;
        VAR17 = VAR4->VAR21[VAR9];
        if (VAR17 == 0)
            continue;
        VAR18 = VAR4->VAR22[VAR9];
        VAR19 = VAR23[VAR18][0];
        VAR20 = VAR23[VAR18][1];
        VAR13 = &VAR24[VAR19];
        if (!VAR19)
        {
            memset(&VAR4->VAR25[VAR8], 0, sizeof(*VAR4->VAR25) * 2 * VAR17);
            VAR8 += 2 * VAR17;
            continue;
        }
        for (; VAR17 > 0; VAR17--)
        {
            int VAR26, VAR27, VAR28;
            int VAR29;
            int VAR30 = FUN3(&VAR2->VAR15);
            if (VAR30 >= VAR14)
            {
                FUN4(VAR2, &VAR30, &VAR14, &VAR7);
                if (VAR30 >= VAR14)
                    break;
            }
            VAR28 = FUN5(&VAR2->VAR15, VAR13->VAR31, 7, 3);
            if (!VAR28)
            {
                VAR4->VAR25[VAR8] = VAR4->VAR25[VAR8 + 1] = 0;
                VAR8 += 2;
                continue;
            }
            VAR26 = VAR6[VAR8];
            FUN6(VAR2->VAR32, "", VAR9, VAR4->VAR21[VAR9] - VAR17, VAR27, VAR28, VAR26);
            if (VAR28 & 16)
            {
                VAR27 = VAR28 >> 5;
                VAR28 = VAR28 & 0x0f;
                if (VAR27 < 15)
                {
                    FUN7(VAR4->VAR25 + VAR8, FUN8(VAR33)[VAR26] + VAR27)
                }
                else
                {
                    VAR27 += FUN9(&VAR2->VAR15, VAR20);
                    VAR29 = FUN10(VAR27, VAR26);
                    if (FUN11(&VAR2->VAR15))
                        VAR29 = -VAR29;
                    VAR4->VAR25[VAR8] = VAR29;
                }
                if (VAR28 < 15)
                {
                    FUN7(VAR4->VAR25 + VAR8 + 1, FUN8(VAR33)[VAR26] + VAR28)
                }
                else
                {
                    VAR28 += FUN9(&VAR2->VAR15, VAR20);
                    VAR29 = FUN10(VAR28, VAR26);
                    if (FUN11(&VAR2->VAR15))
                        VAR29 = -VAR29;
                    VAR4->VAR25[VAR8 + 1] = VAR29;
                }
            }
            else
            {
                VAR27 = VAR28 >> 5;
                VAR28 = VAR28 & 0x0f;
                VAR27 += VAR28;
                if (VAR27 < 15)
                {
                    FUN7(VAR4->VAR25 + VAR8 + !!VAR28, FUN8(VAR33)[VAR26] + VAR27)
                }
                else
                {
                    VAR27 += FUN9(&VAR2->VAR15, VAR20);
                    VAR29 = FUN10(VAR27, VAR26);
                    if (FUN11(&VAR2->VAR15))
                        VAR29 = -VAR29;
                    VAR4->VAR25[VAR8 + !!VAR28] = VAR29;
                }
                VAR4->VAR25[VAR8 + !VAR28] = 0;
            }
            VAR8 += 2;
        }
    }
    VAR13 = &VAR34[VAR4->VAR35];
    VAR10 = 0;
    while (VAR8 <= 572)
    {
        int VAR30, VAR36;
        VAR30 = FUN3(&VAR2->VAR15);
        if (VAR30 >= VAR14)
        {
            if (VAR30 > VAR7 && VAR10)
            {
                VAR8 -= 4;
                FUN12(&VAR2->VAR15, VAR10 - VAR30);
                FUN13(VAR2->VAR32, VAR37, "", VAR10 - VAR30, VAR14 - VAR30, VAR7 - VAR30);
                if (VAR2->VAR38 & VAR39)
                    VAR8 = 0;
                break;
            }
            FUN4(VAR2, &VAR30, &VAR14, &VAR7);
            if (VAR30 >= VAR14)
                break;
        }
        VAR10 = VAR30;
        VAR36 = FUN5(&VAR2->VAR15, VAR13->VAR31, VAR13->VAR40, 1);
        FUN6(VAR2->VAR32, "", VAR4->VAR35, VAR36);
        VAR4->VAR25[VAR8 + 0] = VAR4->VAR25[VAR8 + 1] = VAR4->VAR25[VAR8 + 2] = VAR4->VAR25[VAR8 + 3] = 0;
        while (VAR36)
        {
            static const int VAR41[16] = {3, 3, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
            int VAR29;
            int VAR30 = VAR8 + VAR41[VAR36];
            VAR36 ^= 8 >> VAR41[VAR36];
            FUN7(VAR4->VAR25 + VAR30, FUN8(VAR42) + VAR6[VAR30])
        }
        VAR8 += 4;
    }
    VAR11 = VAR7 - FUN3(&VAR2->VAR15);
    if (VAR11 < 0 && (VAR2->VAR38 & VAR43))
    {
        FUN13(VAR2->VAR32, VAR44, "", VAR11);
        VAR8 = 0;
    }
    else if (VAR11 > 0 && (VAR2->VAR38 & VAR43))
    {
        FUN13(VAR2->VAR32, VAR44, "", VAR11);
        VAR8 = 0;
    }
    memset(&VAR4->VAR25[VAR8], 0, sizeof(*VAR4->VAR25) * (576 - VAR8));
    FUN12(&VAR2->VAR15, VAR11);
    VAR9 = FUN3(&VAR2->VAR15);
    FUN4(VAR2, &VAR9, &VAR14, &VAR7);
    return 0;
}