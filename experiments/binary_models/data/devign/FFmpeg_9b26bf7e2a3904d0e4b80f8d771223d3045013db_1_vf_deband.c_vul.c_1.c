static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR3;
    VAR11 *VAR12 = VAR10->VAR12;
    VAR11 *VAR13 = VAR10->VAR13;
    const int VAR14 = (VAR7->VAR15[0] * VAR4) / VAR5;
    const int VAR16 = (VAR7->VAR15[0] * (VAR4 + 1)) / VAR5;
    int VAR17, VAR18, VAR19;
    for (VAR18 = VAR14; VAR18 < VAR16; VAR18++)
    {
        const int VAR20 = VAR18 * VAR7->VAR21[0];
        for (VAR17 = 0; VAR17 < VAR7->VAR21[VAR19]; VAR17++)
        {
            const int VAR22 = VAR7->VAR22[VAR20 + VAR17];
            const int VAR23 = VAR7->VAR23[VAR20 + VAR17];
            int VAR24[4], VAR25[4] = {0}, VAR26[4];
            for (VAR19 = 0; VAR19 < VAR7->VAR27; VAR19++)
            {
                const VAR28 *VAR29 = (const VAR28 *)VAR12->VAR30[VAR19];
                const int VAR31 = VAR12->VAR32[VAR19];
                const int VAR33 = VAR7->VAR33[VAR19];
                const int VAR34 = VAR7->VAR21[VAR19] - 1;
                const int VAR35 = VAR7->VAR15[VAR19] - 1;
                const int VAR36 = VAR29[FUN2(VAR18 + VAR23, 0, VAR35) * VAR31 + FUN2(VAR17 + VAR22, 0, VAR34)];
                const int VAR37 = VAR29[FUN2(VAR18 + -VAR23, 0, VAR35) * VAR31 + FUN2(VAR17 + VAR22, 0, VAR34)];
                const int VAR38 = VAR29[FUN2(VAR18 + -VAR23, 0, VAR35) * VAR31 + FUN2(VAR17 + -VAR22, 0, VAR34)];
                const int VAR39 = VAR29[FUN2(VAR18 + VAR23, 0, VAR35) * VAR31 + FUN2(VAR17 + -VAR22, 0, VAR34)];
                const int VAR40 = VAR29[VAR18 * VAR31 + VAR17];
                VAR26[VAR19] = VAR40;
                VAR24[VAR19] = FUN3(VAR36, VAR37, VAR38, VAR39);
                if (VAR7->VAR41)
                {
                    VAR25[VAR19] = FUN4(VAR40 - VAR24[VAR19]) < VAR33;
                }
                else
                {
                    VAR25[VAR19] = (FUN4(VAR40 - VAR36) < VAR33) && (FUN4(VAR40 - VAR37) < VAR33) && (FUN4(VAR40 - VAR38) < VAR33) && (FUN4(VAR40 - VAR39) < VAR33);
                }
            }
            for (VAR19 = 0; VAR19 < VAR7->VAR27; VAR19++)
                if (!VAR25[VAR19])
                    break;
            if (VAR19 == VAR7->VAR27)
            {
                for (VAR19 = 0; VAR19 < VAR7->VAR27; VAR19++)
                {
                    const int VAR42 = VAR13->VAR32[VAR19];
                    VAR13->VAR30[VAR19][VAR18 * VAR42 + VAR17] = VAR24[VAR19];
                }
            }
            else
            {
                for (VAR19 = 0; VAR19 < VAR7->VAR27; VAR19++)
                {
                    const int VAR42 = VAR13->VAR32[VAR19];
                    VAR13->VAR30[VAR19][VAR18 * VAR42 + VAR17] = VAR26[VAR19];
                }
            }
        }
    }
    return 0;
}