static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    const int VAR10 = VAR2->VAR11->VAR12[VAR6].VAR10;
    const int VAR13 = VAR2->VAR13;
    const int VAR14 = VAR4->VAR15[VAR10 + 0];
    const int VAR16 = VAR4->VAR15[(VAR10 + 1) % VAR2->VAR17];
    const int VAR18 = VAR4->VAR15[(VAR10 + 2) % VAR2->VAR17];
    const int VAR19 = VAR5->VAR15[VAR10 + 0];
    const int VAR20 = VAR5->VAR15[(VAR10 + 1) % VAR2->VAR17];
    const int VAR21 = 255 - VAR7;
    const int VAR22 = VAR4->VAR23;
    const int VAR24 = VAR4->VAR25;
    int VAR26, VAR27;
    if (VAR9)
    {
        const int VAR28 = VAR19 * (VAR13 == 1 ? -1 : 1);
        const int VAR29 = VAR20 * (VAR13 == 1 ? -1 : 1);
        for (VAR26 = 0; VAR26 < VAR24; VAR26++)
        {
            const VAR30 *VAR31 = VAR4->VAR32[VAR10 + 0];
            const VAR30 *VAR33 = VAR4->VAR32[(VAR10 + 1) % VAR2->VAR17];
            const VAR30 *VAR34 = VAR4->VAR32[(VAR10 + 2) % VAR2->VAR17];
            VAR30 *VAR35 = VAR5->VAR32[VAR10] + VAR8 * VAR19;
            VAR30 *VAR36 = VAR5->VAR32[(VAR10 + 1) % VAR2->VAR17] + VAR8 * VAR20;
            VAR30 *const VAR37 = VAR35 + VAR19 * (VAR2->VAR38 - 1);
            VAR30 *const VAR39 = (VAR13 ? VAR37 : VAR35);
            VAR30 *const VAR40 = VAR36 + VAR20 * (VAR2->VAR38 - 1);
            VAR30 *const VAR41 = (VAR13 ? VAR40 : VAR36);
            for (VAR27 = 0; VAR27 < VAR22; VAR27++)
            {
                const int VAR42 = VAR31[VAR26] + 256;
                const int VAR43 = FUN2(VAR33[VAR26] - 128) + FUN2(VAR34[VAR26] - 128);
                VAR30 *VAR44;
                VAR44 = VAR39 + VAR26 + VAR28 * VAR42;
                update(VAR44, VAR21, VAR7);
                VAR44 = VAR41 + VAR26 + VAR29 * (VAR42 - VAR43);
                update(VAR44, VAR21, 1);
                VAR44 = VAR41 + VAR26 + VAR29 * (VAR42 + VAR43);
                update(VAR44, VAR21, 1);
                VAR31 += VAR14;
                VAR33 += VAR16;
                VAR34 += VAR18;
                VAR35 += VAR19;
                VAR36 += VAR20;
            }
        }
    }
    else
    {
        const VAR30 *VAR31 = VAR4->VAR32[VAR10];
        const VAR30 *VAR33 = VAR4->VAR32[(VAR10 + 1) % VAR2->VAR17];
        const VAR30 *VAR34 = VAR4->VAR32[(VAR10 + 2) % VAR2->VAR17];
        VAR30 *VAR35 = VAR5->VAR32[VAR10] + VAR8;
        VAR30 *VAR36 = VAR5->VAR32[(VAR10 + 1) % VAR2->VAR17] + VAR8;
        if (VAR13)
        {
            VAR35 += VAR2->VAR38 - 1;
            VAR36 += VAR2->VAR38 - 1;
        }
        for (VAR27 = 0; VAR27 < VAR22; VAR27++)
        {
            for (VAR26 = 0; VAR26 < VAR24; VAR26++)
            {
                int VAR42 = VAR31[VAR26] + 256;
                const int VAR43 = FUN2(VAR33[VAR26] - 128) + FUN2(VAR34[VAR26] - 128);
                VAR30 *VAR44;
                if (VAR13)
                {
                    VAR44 = VAR35 - VAR42;
                    update(VAR44, VAR21, VAR7);
                    VAR44 = VAR36 - (VAR42 - VAR43);
                    update(VAR44, VAR21, 1);
                    VAR44 = VAR36 - (VAR42 + VAR43);
                    update(VAR44, VAR21, 1);
                }
                else
                {
                    VAR44 = VAR35 + VAR42;
                    update(VAR44, VAR21, VAR7);
                    VAR44 = VAR36 + (VAR42 - VAR43);
                    update(VAR44, VAR21, 1);
                    VAR44 = VAR36 + (VAR42 + VAR43);
                    update(VAR44, VAR21, 1);
                }
            }
            VAR31 += VAR14;
            VAR33 += VAR16;
            VAR34 += VAR18;
            VAR35 += VAR19;
            VAR36 += VAR20;
        }
    }
    FUN3(VAR2, VAR5, VAR10, VAR10);
    FUN3(VAR2, VAR5, VAR10, (VAR10 + 1) % VAR2->VAR17);
}