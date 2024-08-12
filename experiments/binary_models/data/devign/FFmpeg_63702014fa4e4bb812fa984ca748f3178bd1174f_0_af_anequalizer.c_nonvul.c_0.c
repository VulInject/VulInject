static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    char *VAR10, *VAR11, *VAR12 = NULL;
    int VAR13, VAR14, VAR15;
    VAR10 = FUN2(VAR8->VAR10);
    if (!VAR10)
        return;
    memset(VAR6->VAR16[0], 0, VAR8->VAR17 * VAR6->VAR18[0]);
    for (VAR13 = 0; VAR13 < VAR4->VAR19; VAR13++)
    {
        uint8_t VAR20[4] = {0xff, 0xff, 0xff, 0xff};
        int VAR21 = -1;
        double VAR22;
        VAR11 = FUN3(VAR13 == 0 ? VAR10 : NULL, "", &VAR12);
        if (VAR11)
            FUN4(VAR20, VAR11, -1, VAR2);
        for (VAR22 = 0; VAR22 < VAR8->VAR23; VAR22++)
        {
            double VAR24, VAR25, VAR26, VAR27;
            double VAR28, VAR29;
            double VAR30 = 1;
            double VAR23;
            int VAR31, VAR32, VAR33;
            VAR23 = VAR34 * (VAR8->VAR35 ? FUN5(VAR8->VAR23 - 1, VAR22 / VAR8->VAR23) : VAR22) / (VAR8->VAR23 - 1);
            VAR24 = FUN6(VAR23);
            VAR26 = VAR24 * VAR24;
            VAR25 = -FUN7(VAR23);
            VAR27 = VAR25 * VAR25;
            for (VAR15 = 0; VAR15 < VAR8->VAR36; VAR15++)
            {
                if (VAR8->VAR37[VAR15].VAR38 != VAR13 || VAR8->VAR37[VAR15].VAR39)
                    continue;
                for (VAR14 = 0; VAR14 < VAR40 / 2; VAR14++)
                {
                    VAR41 *VAR42 = &VAR8->VAR37[VAR15].VAR43[VAR14];
                    VAR28 = VAR42->VAR44 * (1 - 8 * VAR26 * VAR27) + VAR42->VAR45 * (VAR26 - VAR27) + VAR24 * (VAR42->VAR46 + VAR42->VAR47 * (VAR26 - 3 * VAR27)) + VAR42->VAR48;
                    VAR29 = VAR25 * (VAR42->VAR47 * (3 * VAR26 - VAR27) + VAR42->VAR46 + 2 * VAR24 * (2 * VAR42->VAR44 * (VAR26 - VAR27) + VAR42->VAR45));
                    VAR30 *= FUN8(VAR28, VAR29);
                    VAR28 = VAR42->VAR49 * (1 - 8 * VAR26 * VAR27) + VAR42->VAR50 * (VAR26 - VAR27) + VAR24 * (VAR42->VAR51 + VAR42->VAR52 * (VAR26 - 3 * VAR27)) + VAR42->VAR53;
                    VAR29 = VAR25 * (VAR42->VAR52 * (3 * VAR26 - VAR27) + VAR42->VAR51 + 2 * VAR24 * (2 * VAR42->VAR49 * (VAR26 - VAR27) + VAR42->VAR50));
                    VAR30 /= FUN8(VAR28, VAR29);
                }
            }
            VAR31 = FUN9((1. + -20 * FUN10(VAR30) / VAR8->VAR54) * VAR8->VAR17 / 2, 0, VAR8->VAR17 - 1);
            VAR33 = FUN11(VAR22);
            if (VAR21 == -1)
                VAR21 = VAR31;
            if (VAR31 <= VAR21)
            {
                for (VAR32 = VAR31; VAR32 <= VAR21; VAR32++)
                    FUN12(VAR6->VAR16[0] + VAR32 * VAR6->VAR18[0] + VAR33 * 4, FUN13(VAR20));
            }
            else
            {
                for (VAR32 = VAR21; VAR32 <= VAR31; VAR32++)
                    FUN12(VAR6->VAR16[0] + VAR32 * VAR6->VAR18[0] + VAR33 * 4, FUN13(VAR20));
            }
            VAR21 = VAR31;
        }
    }
    FUN14(VAR10);
}