static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19, VAR20;
    VAR11 = 0;
    VAR18 = 0;
    VAR17 = 2;
    VAR12 = (4 - VAR3);
    VAR14 = 1 << (VAR2->VAR21 - VAR3 - 1);
    VAR20 = 1;
    while (FUN2(VAR5) > 0)
    {
        if (VAR2->VAR22)
        {
            while ((VAR19 = FUN3(VAR5, &VAR23[VAR12], 1, 2)) < 2)
            {
                VAR20 = 1;
                if (VAR19 == 0)
                {
                    VAR11 += VAR14;
                    VAR18 += (1 << VAR12);
                }
                else
                {
                    VAR11 += 8 * VAR14;
                    VAR18 += (8 << VAR12);
                }
            }
            VAR20 += (VAR19 - 2);
        }
        else
        {
            VAR20 += FUN3(VAR5, &VAR23[VAR12], 1, 2);
            while (VAR20 >= (VAR14 - 1))
            {
                VAR20 += (1 - (VAR14 - 1));
                VAR11 += VAR14;
                VAR18 += (1 << VAR12);
            }
        }
        if (VAR11 >= VAR2->VAR24)
            return;
        VAR15 = (VAR20 >> VAR12);
        if (VAR15 >= FUN4(VAR25))
            return;
        if (VAR2->VAR26 > 1)
        {
            VAR7 = FUN5(VAR5);
            VAR8 = FUN5(VAR5);
        }
        else
        {
            VAR7 = 0;
            VAR8 = 0;
        }
        VAR10 = FUN3(VAR5, (VAR6 ? &VAR27 : &VAR28), 0, 2);
        VAR10 += VAR2->VAR29[VAR25[VAR15]];
        VAR10 = (VAR10 < 0) ? 0 : VAR10;
        VAR9 = FUN6(VAR5, 3);
        VAR16 = 0;
        VAR13 = 0;
        if (VAR8)
        {
            VAR16 = (VAR10 - FUN3(VAR5, &VAR30, 0, 1));
            VAR13 = (VAR9 - FUN3(VAR5, &VAR31, 0, 1));
            if (VAR13 < 0)
                VAR13 += 8;
        }
        if (VAR2->VAR32 > (VAR15 + 1))
        {
            int VAR33 = (VAR17 + VAR18);
            FUN7(VAR2, VAR33, VAR20, VAR3, VAR7, VAR10, VAR9);
            if (VAR8)
                FUN7(VAR2, VAR33, VAR20, VAR3, (1 - VAR7), VAR16, VAR13);
        }
        VAR20++;
    }
}