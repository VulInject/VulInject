static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    const int VAR10 = VAR2->VAR11->VAR12[VAR6].VAR10;
    const int VAR13 = VAR2->VAR13;
    const int VAR14 = VAR2->VAR15 - 1;
    const VAR16 *VAR17 = (const VAR16 *)VAR4->VAR18[VAR10 + 0];
    const VAR16 *VAR19 = (const VAR16 *)VAR4->VAR18[(VAR10 + 1) % VAR2->VAR20];
    const VAR16 *VAR21 = (const VAR16 *)VAR4->VAR18[(VAR10 + 2) % VAR2->VAR20];
    const int VAR22 = VAR4->VAR23[VAR10 + 0] / 2;
    const int VAR24 = VAR4->VAR23[(VAR10 + 1) % VAR2->VAR20] / 2;
    const int VAR25 = VAR4->VAR23[(VAR10 + 2) % VAR2->VAR20] / 2;
    const int VAR26 = VAR5->VAR23[VAR10 + 0] / 2;
    const int VAR27 = VAR5->VAR23[(VAR10 + 1) % VAR2->VAR20] / 2;
    const int VAR28 = VAR5->VAR23[(VAR10 + 2) % VAR2->VAR20] / 2;
    const int VAR29 = VAR4->VAR30;
    const int VAR31 = VAR4->VAR32;
    int VAR33, VAR34;
    if (VAR2->VAR35)
    {
        const int VAR36 = VAR26 * (VAR13 == 1 ? -1 : 1);
        const int VAR37 = VAR27 * (VAR13 == 1 ? -1 : 1);
        const int VAR38 = VAR28 * (VAR13 == 1 ? -1 : 1);
        VAR16 *VAR39 = (VAR16 *)VAR5->VAR18[VAR10] + VAR8 * VAR26;
        VAR16 *VAR40 = (VAR16 *)VAR5->VAR18[(VAR10 + 1) % VAR2->VAR20] + VAR8 * VAR27;
        VAR16 *VAR41 = (VAR16 *)VAR5->VAR18[(VAR10 + 2) % VAR2->VAR20] + VAR8 * VAR28;
        VAR16 *const VAR42 = VAR39 + VAR26 * (VAR2->VAR43 - 1);
        VAR16 *const VAR44 = (VAR13 ? VAR42 : VAR39);
        VAR16 *const VAR45 = VAR40 + VAR27 * (VAR2->VAR43 - 1);
        VAR16 *const VAR46 = (VAR13 ? VAR45 : VAR40);
        VAR16 *const VAR47 = VAR41 + VAR28 * (VAR2->VAR43 - 1);
        VAR16 *const VAR48 = (VAR13 ? VAR47 : VAR41);
        for (VAR34 = 0; VAR34 < VAR29; VAR34++)
        {
            for (VAR33 = 0; VAR33 < VAR31; VAR33++)
            {
                const int VAR49 = FUN2(VAR17[VAR33], VAR14);
                const int VAR50 = VAR19[VAR33];
                const int VAR51 = VAR21[VAR33];
                *(VAR44 + VAR36 * VAR49 + VAR33) = VAR49;
                *(VAR46 + VAR37 * VAR49 + VAR33) = VAR50;
                *(VAR48 + VAR38 * VAR49 + VAR33) = VAR51;
            }
            VAR17 += VAR22;
            VAR19 += VAR24;
            VAR21 += VAR25;
            VAR39 += VAR26;
            VAR40 += VAR27;
            VAR41 += VAR28;
        }
    }
    else
    {
        VAR16 *VAR39 = (VAR16 *)VAR5->VAR18[VAR10] + VAR8;
        VAR16 *VAR40 = (VAR16 *)VAR5->VAR18[(VAR10 + 1) % VAR2->VAR20] + VAR8;
        VAR16 *VAR41 = (VAR16 *)VAR5->VAR18[(VAR10 + 2) % VAR2->VAR20] + VAR8;
        if (VAR13)
        {
            VAR39 += VAR2->VAR43 - 1;
            VAR40 += VAR2->VAR43 - 1;
            VAR41 += VAR2->VAR43 - 1;
        }
        for (VAR34 = 0; VAR34 < VAR29; VAR34++)
        {
            for (VAR33 = 0; VAR33 < VAR31; VAR33++)
            {
                const int VAR49 = FUN2(VAR17[VAR33], VAR14);
                const int VAR50 = VAR19[VAR33];
                const int VAR51 = VAR21[VAR33];
                if (VAR13)
                {
                    *(VAR39 - VAR49) = VAR49;
                    *(VAR40 - VAR49) = VAR50;
                    *(VAR41 - VAR49) = VAR51;
                }
                else
                {
                    *(VAR39 + VAR49) = VAR49;
                    *(VAR40 + VAR49) = VAR50;
                    *(VAR41 + VAR49) = VAR51;
                }
            }
            VAR17 += VAR22;
            VAR19 += VAR24;
            VAR21 += VAR25;
            VAR39 += VAR26;
            VAR40 += VAR27;
            VAR41 += VAR28;
        }
    }
    FUN3(VAR2, VAR5, VAR10, VAR10);
}