static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8)
{
    VAR9 *const VAR10 = &VAR2->VAR10;
    const int VAR11 = VAR3 + VAR4 * VAR10->VAR12;
    int VAR13, VAR14;
    int VAR15;
    if (VAR2->VAR16.VAR17)
    {
        return;
    }
    VAR13 = VAR10->VAR13;
    VAR14 = VAR10->VAR14;
    for (VAR15 = 0; VAR15 < 2; VAR15++)
    {
        int VAR18;
        const int VAR19 = VAR15 == 0 ? VAR11 - 1 : VAR11 - VAR10->VAR12;
        int VAR20 = VAR2->VAR21[VAR19] == 255 ? 1 : 0;
        if (VAR2->VAR22 == 2 && VAR2->VAR21[VAR19] != VAR2->VAR21[VAR11])
            VAR20 = 1;
        for (VAR18 = VAR20; VAR18 < 4; VAR18++)
        {
            int VAR23 = VAR18 > 0 ? VAR11 : VAR19;
            int VAR24[4];
            int VAR25;
            if (FUN2(VAR10->VAR26.VAR27[VAR11]) || FUN2(VAR10->VAR26.VAR27[VAR23]))
            {
                VAR24[0] = VAR24[1] = VAR24[2] = VAR24[3] = (VAR18 == 0 ? 4 : 3);
            }
            else
            {
                int VAR28;
                for (VAR28 = 0; VAR28 < 4; VAR28++)
                {
                    int VAR29 = VAR15 == 0 ? VAR18 : VAR28;
                    int VAR30 = VAR15 == 0 ? VAR28 : VAR18;
                    int VAR31 = 8 + 4 + VAR29 + 8 * VAR30;
                    int VAR32 = VAR31 - (VAR15 ? 8 : 1);
                    if (VAR2->VAR33[VAR31] != 0 || VAR2->VAR33[VAR32] != 0)
                    {
                        VAR24[VAR28] = 2;
                    }
                    else
                    {
                        int VAR34;
                        VAR24[VAR28] = 0;
                        for (VAR34 = 0; VAR34 < 1 + (VAR2->VAR35 == VAR36); VAR34++)
                        {
                            if (VAR2->VAR37[VAR34][VAR31] != VAR2->VAR37[VAR34][VAR32] || FUN3(VAR2->VAR38[VAR34][VAR31][0] - VAR2->VAR38[VAR34][VAR32][0]) >= 4 || FUN3(VAR2->VAR38[VAR34][VAR31][1] - VAR2->VAR38[VAR34][VAR32][1]) >= 4)
                            {
                                VAR24[VAR28] = 1;
                                break;
                            }
                        }
                    }
                }
                if (VAR24[0] + VAR24[1] + VAR24[2] + VAR24[3] == 0)
                    continue;
            }
            VAR25 = (VAR10->VAR26.VAR39[VAR11] + VAR10->VAR26.VAR39[VAR23] + 1) >> 1;
            if (VAR15 == 0)
            {
                FUN4(VAR2, &VAR6[4 * VAR18], VAR13, VAR24, VAR25);
                if ((VAR18 & 1) == 0)
                {
                    int VAR40 = (VAR2->VAR40 + FUN5(VAR2, VAR10->VAR26.VAR39[VAR23]) + 1) >> 1;
                    FUN6(VAR2, &VAR7[2 * VAR18], VAR14, VAR24, VAR40);
                    FUN6(VAR2, &VAR8[2 * VAR18], VAR14, VAR24, VAR40);
                }
            }
            else
            {
                FUN7(VAR2, &VAR6[4 * VAR18 * VAR13], VAR13, VAR24, VAR25);
                if ((VAR18 & 1) == 0)
                {
                    int VAR40 = (VAR2->VAR40 + FUN5(VAR2, VAR10->VAR26.VAR39[VAR23]) + 1) >> 1;
                    FUN8(VAR2, &VAR7[2 * VAR18 * VAR14], VAR14, VAR24, VAR40);
                    FUN8(VAR2, &VAR8[2 * VAR18 * VAR14], VAR14, VAR24, VAR40);
                }
            }
        }
    }
}