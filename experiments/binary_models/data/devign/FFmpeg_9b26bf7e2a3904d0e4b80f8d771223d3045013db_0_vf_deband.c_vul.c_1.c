static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR3;
    VAR11 *VAR12 = VAR10->VAR12;
    VAR11 *VAR13 = VAR10->VAR13;
    const int VAR14 = (VAR7->VAR15[0] * VAR4) / VAR5;
    const int VAR16 = (VAR7->VAR15[0] * (VAR4 + 1)) / VAR5;
    int VAR17, VAR18, VAR19, VAR20;
    for (VAR18 = VAR14; VAR18 < VAR16; VAR18++)
    {
        const int VAR21 = VAR18 * VAR7->VAR22[0];
        for (VAR17 = 0; VAR17 < VAR7->VAR22[VAR19]; VAR17++)
        {
            const int VAR23 = VAR7->VAR23[VAR21 + VAR17];
            const int VAR24 = VAR7->VAR24[VAR21 + VAR17];
            int VAR25[4], VAR26[4] = {0}, VAR27[4];
            for (VAR19 = 0; VAR19 < VAR7->VAR28; VAR19++)
            {
                const VAR29 *VAR30 = (const VAR29 *)VAR12->VAR31[VAR19];
                const int VAR32 = VAR12->VAR33[VAR19] / 2;
                const int VAR34 = VAR7->VAR34[VAR19];
                const int VAR35 = VAR7->VAR22[VAR19] - 1;
                const int VAR36 = VAR7->VAR15[VAR19] - 1;
                const int VAR37 = VAR30[FUN2(VAR18 + VAR24, 0, VAR36) * VAR32 + FUN2(VAR17 + VAR23, 0, VAR35)];
                const int VAR38 = VAR30[FUN2(VAR18 + -VAR24, 0, VAR36) * VAR32 + FUN2(VAR17 + VAR23, 0, VAR35)];
                const int VAR39 = VAR30[FUN2(VAR18 + -VAR24, 0, VAR36) * VAR32 + FUN2(VAR17 + -VAR23, 0, VAR35)];
                const int VAR40 = VAR30[FUN2(VAR18 + VAR24, 0, VAR36) * VAR32 + FUN2(VAR17 + -VAR23, 0, VAR35)];
                const int VAR41 = VAR30[VAR18 * VAR32 + VAR17];
                VAR27[VAR19] = VAR41;
                VAR25[VAR19] = FUN3(VAR37, VAR38, VAR39, VAR40);
                if (VAR7->VAR42)
                {
                    VAR26[VAR19] = FUN4(VAR41 - VAR25[VAR19]) < VAR34;
                }
                else
                {
                    VAR26[VAR19] = (FUN4(VAR41 - VAR37) < VAR34) && (FUN4(VAR41 - VAR38) < VAR34) && (FUN4(VAR41 - VAR39) < VAR34) && (FUN4(VAR41 - VAR40) < VAR34);
                }
            }
            for (VAR20 = 0; VAR20 < VAR7->VAR28; VAR20++)
                if (!VAR26[VAR20])
                    break;
            if (VAR20 == VAR7->VAR28)
            {
                for (VAR19 = 0; VAR19 < VAR7->VAR28; VAR19++)
                {
                    const int VAR43 = VAR13->VAR33[VAR19] / 2;
                    VAR29 *VAR44 = (VAR29 *)VAR13->VAR31[VAR19] + VAR18 * VAR43 + VAR17;
                    VAR44[0] = VAR25[VAR19];
                }
            }
            else
            {
                for (VAR19 = 0; VAR19 < VAR7->VAR28; VAR19++)
                {
                    const int VAR43 = VAR13->VAR33[VAR19] / 2;
                    VAR29 *VAR44 = (VAR29 *)VAR13->VAR31[VAR19] + VAR18 * VAR43 + VAR17;
                    VAR44[0] = VAR27[VAR19];
                }
            }
        }
    }
    return 0;
}