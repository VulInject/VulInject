static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    const int VAR10 = VAR2->VAR11->VAR12[VAR6].VAR10;
    const int VAR13 = VAR2->VAR13;
    const int VAR14 = VAR4->VAR15[VAR10 + 0];
    const int VAR16 = VAR4->VAR15[(VAR10 + 1) % VAR2->VAR17];
    const int VAR18 = VAR4->VAR15[(VAR10 + 2) % VAR2->VAR17];
    const int VAR19 = VAR5->VAR15[VAR10 + 0];
    const int VAR20 = VAR5->VAR15[(VAR10 + 1) % VAR2->VAR17];
    const int VAR21 = VAR5->VAR15[(VAR10 + 2) % VAR2->VAR17];
    const int VAR22 = 255 - VAR7;
    const int VAR23 = VAR4->VAR24;
    const int VAR25 = VAR4->VAR26;
    int VAR27, VAR28;
    if (VAR9)
    {
        const int VAR29 = VAR19 * (VAR13 == 1 ? -1 : 1);
        const int VAR30 = VAR20 * (VAR13 == 1 ? -1 : 1);
        const int VAR31 = VAR21 * (VAR13 == 1 ? -1 : 1);
        for (VAR27 = 0; VAR27 < VAR25; VAR27++)
        {
            const VAR32 *VAR33 = VAR4->VAR34[VAR10 + 0];
            const VAR32 *VAR35 = VAR4->VAR34[(VAR10 + 1) % VAR2->VAR17];
            const VAR32 *VAR36 = VAR4->VAR34[(VAR10 + 2) % VAR2->VAR17];
            VAR32 *VAR37 = VAR5->VAR34[VAR10] + VAR8 * VAR19;
            VAR32 *VAR38 = VAR5->VAR34[(VAR10 + 1) % VAR2->VAR17] + VAR8 * VAR20;
            VAR32 *VAR39 = VAR5->VAR34[(VAR10 + 2) % VAR2->VAR17] + VAR8 * VAR21;
            VAR32 *const VAR40 = VAR37 + VAR19 * (VAR2->VAR41 - 1);
            VAR32 *const VAR42 = (VAR13 ? VAR40 : VAR37);
            VAR32 *const VAR43 = VAR38 + VAR20 * (VAR2->VAR41 - 1);
            VAR32 *const VAR44 = (VAR13 ? VAR43 : VAR38);
            VAR32 *const VAR45 = VAR39 + VAR21 * (VAR2->VAR41 - 1);
            VAR32 *const VAR46 = (VAR13 ? VAR45 : VAR39);
            for (VAR28 = 0; VAR28 < VAR23; VAR28++)
            {
                const int VAR47 = VAR33[VAR27] + 128;
                const int VAR48 = VAR35[VAR27] - 128;
                const int VAR49 = VAR36[VAR27] - 128;
                VAR32 *VAR50;
                VAR50 = VAR42 + VAR27 + VAR29 * VAR47;
                update(VAR50, VAR22, VAR7);
                VAR50 = VAR44 + VAR27 + VAR30 * (VAR47 + VAR48);
                update(VAR50, VAR22, 1);
                VAR50 = VAR46 + VAR27 + VAR31 * (VAR47 + VAR49);
                update(VAR50, VAR22, 1);
                VAR33 += VAR14;
                VAR35 += VAR16;
                VAR36 += VAR18;
                VAR37 += VAR19;
                VAR38 += VAR20;
                VAR39 += VAR21;
            }
        }
    }
    else
    {
        const VAR32 *VAR33 = VAR4->VAR34[VAR10];
        const VAR32 *VAR35 = VAR4->VAR34[(VAR10 + 1) % VAR2->VAR17];
        const VAR32 *VAR36 = VAR4->VAR34[(VAR10 + 2) % VAR2->VAR17];
        VAR32 *VAR37 = VAR5->VAR34[VAR10] + VAR8;
        VAR32 *VAR38 = VAR5->VAR34[(VAR10 + 1) % VAR2->VAR17] + VAR8;
        VAR32 *VAR39 = VAR5->VAR34[(VAR10 + 2) % VAR2->VAR17] + VAR8;
        if (VAR13)
        {
            VAR37 += VAR2->VAR41 - 1;
            VAR38 += VAR2->VAR41 - 1;
            VAR39 += VAR2->VAR41 - 1;
        }
        for (VAR28 = 0; VAR28 < VAR23; VAR28++)
        {
            for (VAR27 = 0; VAR27 < VAR25; VAR27++)
            {
                const int VAR47 = VAR33[VAR27] + 128;
                const int VAR48 = VAR35[VAR27] - 128;
                const int VAR49 = VAR36[VAR27] - 128;
                VAR32 *VAR50;
                if (VAR13)
                {
                    VAR50 = VAR37 - VAR47;
                    update(VAR50, VAR22, VAR7);
                    VAR50 = VAR38 - (VAR47 + VAR48);
                    update(VAR50, VAR22, 1);
                    VAR50 = VAR39 - (VAR47 + VAR49);
                    update(VAR50, VAR22, 1);
                }
                else
                {
                    VAR50 = VAR37 + VAR47;
                    update(VAR50, VAR22, VAR7);
                    VAR50 = VAR38 + (VAR47 + VAR48);
                    update(VAR50, VAR22, 1);
                    VAR50 = VAR39 + (VAR47 + VAR49);
                    update(VAR50, VAR22, 1);
                }
            }
            VAR33 += VAR14;
            VAR35 += VAR16;
            VAR36 += VAR18;
            VAR37 += VAR19;
            VAR38 += VAR20;
            VAR39 += VAR21;
        }
    }
    FUN2(VAR2, VAR5, VAR10, (VAR10 + 0) % VAR2->VAR17);
    FUN2(VAR2, VAR5, VAR10, (VAR10 + 1) % VAR2->VAR17);
    FUN2(VAR2, VAR5, VAR10, (VAR10 + 2) % VAR2->VAR17);
}