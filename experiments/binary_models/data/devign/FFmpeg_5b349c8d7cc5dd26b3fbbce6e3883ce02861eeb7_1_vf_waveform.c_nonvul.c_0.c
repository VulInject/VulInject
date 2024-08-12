static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    const int VAR10 = VAR2->VAR11->VAR12[VAR6].VAR10;
    const int VAR13 = VAR2->VAR13;
    const int VAR14 = VAR4->VAR15[(VAR10 + 1) % VAR2->VAR16];
    const int VAR17 = VAR4->VAR15[(VAR10 + 2) % VAR2->VAR16];
    const int VAR18 = VAR5->VAR15[(VAR10 + 1) % VAR2->VAR16];
    const int VAR19 = VAR5->VAR15[(VAR10 + 2) % VAR2->VAR16];
    const int VAR20 = 255 - VAR7;
    const int VAR21 = VAR4->VAR22;
    const int VAR23 = VAR4->VAR24;
    int VAR25, VAR26;
    if (VAR9)
    {
        const int VAR27 = VAR18 * (VAR13 == 1 ? -1 : 1);
        const int VAR28 = VAR19 * (VAR13 == 1 ? -1 : 1);
        for (VAR25 = 0; VAR25 < VAR23; VAR25++)
        {
            const VAR29 *VAR30 = VAR4->VAR31[(VAR10 + 1) % VAR2->VAR16];
            const VAR29 *VAR32 = VAR4->VAR31[(VAR10 + 2) % VAR2->VAR16];
            VAR29 *VAR33 = VAR5->VAR31[(VAR10 + 1) % VAR2->VAR16] + VAR8 * VAR18;
            VAR29 *VAR34 = VAR5->VAR31[(VAR10 + 2) % VAR2->VAR16] + VAR8 * VAR19;
            VAR29 *const VAR35 = VAR33 + VAR18 * (VAR2->VAR36 - 1);
            VAR29 *const VAR37 = (VAR13 ? VAR35 : VAR33);
            VAR29 *const VAR38 = VAR34 + VAR19 * (VAR2->VAR36 - 1);
            VAR29 *const VAR39 = (VAR13 ? VAR38 : VAR34);
            for (VAR26 = 0; VAR26 < VAR21; VAR26++)
            {
                const int VAR40 = VAR30[VAR25] - 128;
                const int VAR41 = VAR32[VAR25] - 128;
                VAR29 *VAR42;
                VAR42 = VAR37 + VAR25 + VAR27 * (128 + VAR40);
                update(VAR42, VAR20, VAR7);
                VAR42 = VAR39 + VAR25 + VAR28 * (128 + VAR41);
                update(VAR42, VAR20, VAR7);
                VAR30 += VAR14;
                VAR32 += VAR17;
                VAR33 += VAR18;
                VAR34 += VAR19;
            }
        }
    }
    else
    {
        const VAR29 *VAR30 = VAR4->VAR31[(VAR10 + 1) % VAR2->VAR16];
        const VAR29 *VAR32 = VAR4->VAR31[(VAR10 + 2) % VAR2->VAR16];
        VAR29 *VAR43 = VAR5->VAR31[VAR10] + VAR8;
        VAR29 *VAR33 = VAR5->VAR31[(VAR10 + 1) % VAR2->VAR16] + VAR8;
        VAR29 *VAR34 = VAR5->VAR31[(VAR10 + 2) % VAR2->VAR16] + VAR8;
        if (VAR13)
        {
            VAR43 += VAR2->VAR36 - 1;
            VAR33 += VAR2->VAR36 - 1;
            VAR34 += VAR2->VAR36 - 1;
        }
        for (VAR26 = 0; VAR26 < VAR21; VAR26++)
        {
            for (VAR25 = 0; VAR25 < VAR23; VAR25++)
            {
                const int VAR40 = VAR30[VAR25] - 128;
                const int VAR41 = VAR32[VAR25] - 128;
                VAR29 *VAR42;
                if (VAR13)
                {
                    VAR42 = VAR33 - (128 + VAR40);
                    update(VAR42, VAR20, VAR7);
                    VAR42 = VAR34 - (128 + VAR41);
                    update(VAR42, VAR20, VAR7);
                }
                else
                {
                    VAR42 = VAR33 + (128 + VAR40);
                    update(VAR42, VAR20, VAR7);
                    VAR42 = VAR34 + (128 + VAR41);
                    update(VAR42, VAR20, VAR7);
                }
            }
            VAR30 += VAR14;
            VAR32 += VAR17;
            VAR33 += VAR18;
            VAR34 += VAR19;
        }
    }
    FUN2(VAR2, VAR5, VAR10, (VAR10 + 1) % VAR2->VAR16);
    FUN2(VAR2, VAR5, VAR10, (VAR10 + 2) % VAR2->VAR16);
}