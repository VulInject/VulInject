static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9, VAR10 = 1;
    *VAR2->VAR11 = 0;
    VAR2->VAR12 = 0;
    for (VAR9 = 0; VAR9 < VAR4->VAR13; VAR9++)
    {
        if (VAR4->VAR14[VAR9].VAR15[0][0] < VAR4->VAR14[VAR9].VAR15[0][1] && VAR4->VAR14[VAR9].VAR15[1][0] < VAR4->VAR14[VAR9].VAR15[1][1])
        {
            VAR10 = 0;
            break;
        }
    }
    FUN2(VAR2, !VAR10, 1);
    if (VAR10)
    {
        FUN3(VAR2);
        return 0;
    }
    for (VAR9 = 0; VAR9 < VAR4->VAR13; VAR9++)
    {
        VAR16 *VAR14 = VAR4->VAR14 + VAR9;
        VAR17 *VAR18 = VAR14->VAR18 + VAR5;
        int VAR19, VAR20, VAR21;
        int VAR22 = VAR18->VAR23;
        if (VAR14->VAR15[0][0] == VAR14->VAR15[0][1] || VAR14->VAR15[1][0] == VAR14->VAR15[1][1])
            continue;
        for (VAR21 = 0, VAR19 = 0; VAR19 < VAR18->VAR24; VAR19++)
        {
            for (VAR20 = 0; VAR20 < VAR22; VAR20++, VAR21++)
            {
                VAR18->VAR25[VAR21].VAR26 = VAR18->VAR27[VAR19 * VAR22 + VAR20].VAR28 == 0;
                FUN4(VAR18->VAR25 + VAR21);
                VAR18->VAR29[VAR21].VAR26 = VAR7[VAR9] + VAR8 - 1 - VAR18->VAR27[VAR19 * VAR22 + VAR20].VAR30;
                FUN4(VAR18->VAR29 + VAR21);
            }
        }
        for (VAR21 = 0, VAR19 = 0; VAR19 < VAR18->VAR24; VAR19++)
        {
            for (VAR20 = 0; VAR20 < VAR22; VAR20++, VAR21++)
            {
                int VAR31 = 0, VAR32, VAR33;
                VAR34 *VAR27 = VAR18->VAR27 + VAR19 * VAR22 + VAR20;
                if (VAR2->VAR35 - VAR2->VAR11 < 20)
                    return -1;
                FUN5(VAR2, VAR18->VAR25 + VAR21, 1);
                if (!VAR27->VAR28)
                    continue;
                FUN5(VAR2, VAR18->VAR29 + VAR21, 100);
                FUN6(VAR2, VAR27->VAR28);
                VAR33 = VAR27->VAR36[VAR27->VAR28 - 1].VAR37;
                VAR32 = FUN7(VAR33) - FUN7(VAR27->VAR28) - 2;
                if (VAR32 < 0)
                {
                    VAR31 = -VAR32;
                    VAR32 = 0;
                }
                FUN2(VAR2, 1, VAR32);
                FUN2(VAR2, 0, 1);
                FUN8(VAR2, VAR33, FUN7(VAR33) + 1 + VAR31);
            }
        }
    }
    FUN3(VAR2);
    for (VAR9 = 0; VAR9 < VAR4->VAR13; VAR9++)
    {
        VAR16 *VAR14 = VAR4->VAR14 + VAR9;
        VAR17 *VAR18 = VAR14->VAR18 + VAR5;
        int VAR19, VAR22 = VAR18->VAR23;
        for (VAR19 = 0; VAR19 < VAR18->VAR24; VAR19++)
        {
            int VAR20;
            for (VAR20 = 0; VAR20 < VAR22; VAR20++)
            {
                VAR34 *VAR27 = VAR18->VAR27 + VAR19 * VAR22 + VAR20;
                if (VAR27->VAR28)
                {
                    if (VAR2->VAR35 - VAR2->VAR11 < VAR27->VAR36[VAR27->VAR28 - 1].VAR37)
                        return -1;
                    FUN9(&VAR2->VAR11, VAR27->VAR38, VAR27->VAR36[VAR27->VAR28 - 1].VAR37 - VAR27->VAR36[VAR27->VAR28 - 1].VAR39);
                    FUN9(&VAR2->VAR11, VAR27->VAR36[VAR27->VAR28 - 1].VAR40, VAR27->VAR36[VAR27->VAR28 - 1].VAR39);
                }
            }
        }
    }
    return 0;
}