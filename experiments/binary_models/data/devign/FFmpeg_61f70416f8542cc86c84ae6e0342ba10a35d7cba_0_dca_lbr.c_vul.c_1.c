static int FUN1(VAR1 *VAR2, int VAR3)
{
    unsigned int VAR4[VAR5];
    unsigned int VAR6[VAR5];
    unsigned int VAR7, VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15 = FUN2(VAR2->VAR16);
    for (VAR10 = 0; VAR10 < 1 << VAR3; VAR10 += VAR7 ? 8 : 1)
    {
        VAR11 = ((VAR2->VAR17 << VAR3) + VAR10) & 31;
        VAR2->VAR18[VAR3][VAR11][0] = VAR2->VAR19;
        for (VAR14 = 1;; VAR14++)
        {
            if (FUN3(&VAR2->VAR20) < 1)
            {
                FUN4(VAR2->VAR21, VAR22, "");
                return -1;
            }
            VAR7 = FUN5(&VAR2->VAR20, &VAR23[VAR3], 2);
            if (VAR7 >= FUN6(VAR24))
            {
                FUN4(VAR2->VAR21, VAR22, "");
                return -1;
            }
            VAR7 = FUN7(&VAR2->VAR20, VAR7 >> 2) + VAR24[VAR7];
            if (VAR7 <= 1)
                break;
            VAR14 += VAR7 - 2;
            if (VAR14 >> (5 - VAR3) > VAR2->VAR25 * 4 - 5)
            {
                FUN4(VAR2->VAR21, VAR22, "");
                return -1;
            }
            VAR13 = FUN7(&VAR2->VAR20, VAR15);
            VAR8 = FUN5(&VAR2->VAR20, &VAR26, 2) + VAR2->VAR27[VAR28[VAR14 >> (7 - VAR3)]] + VAR2->VAR29 - 2;
            VAR4[VAR13] = VAR8 < VAR30 ? VAR8 : 0;
            VAR6[VAR13] = FUN8(&VAR2->VAR20, 3);
            for (VAR12 = 0; VAR12 < VAR2->VAR16; VAR12++)
            {
                if (VAR12 == VAR13)
                    continue;
                if (FUN9(&VAR2->VAR20))
                {
                    VAR4[VAR12] = VAR4[VAR13] - FUN5(&VAR2->VAR20, &VAR31, 1);
                    VAR6[VAR12] = VAR6[VAR13] - FUN5(&VAR2->VAR20, &VAR32, 1);
                }
                else
                {
                    VAR4[VAR12] = 0;
                    VAR6[VAR12] = 0;
                }
            }
            if (VAR4[VAR13])
            {
                VAR33 *VAR34 = &VAR2->VAR35[VAR2->VAR19];
                VAR2->VAR19 = (VAR2->VAR19 + 1) & (VAR36 - 1);
                VAR34->VAR37 = VAR14 >> (5 - VAR3);
                VAR34->VAR38 = (VAR14 & ((1 << (5 - VAR3)) - 1)) << VAR3;
                VAR34->VAR39 = 256 - (VAR34->VAR37 & 1) * 128 - VAR34->VAR38 * 4;
                VAR9 = VAR40[(VAR34->VAR37 & 3) * 2 + (VAR14 & 1)] - ((VAR34->VAR39 << (5 - VAR3)) - VAR34->VAR39);
                for (VAR12 = 0; VAR12 < VAR2->VAR41; VAR12++)
                {
                    VAR34->VAR4[VAR12] = VAR4[VAR12] < VAR30 ? VAR4[VAR12] : 0;
                    VAR34->VAR6[VAR12] = 128 - VAR6[VAR12] * 32 + VAR9;
                }
            }
        }
        VAR2->VAR18[VAR3][VAR11][1] = VAR2->VAR19;
    }
    return 0;
}