static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    const int VAR10 = VAR2->VAR11->VAR12[VAR6].VAR10;
    const int VAR13 = VAR2->VAR13;
    const int VAR14 = VAR4->VAR15[(VAR10 + 1) % VAR2->VAR16];
    const int VAR17 = VAR4->VAR15[(VAR10 + 2) % VAR2->VAR16];
    const int VAR18 = VAR5->VAR15[VAR10];
    const int VAR19 = 255 - VAR7;
    const int VAR20 = VAR4->VAR21;
    const int VAR22 = VAR4->VAR23;
    int VAR24, VAR25;
    if (VAR9)
    {
        const int VAR26 = VAR18 * (VAR13 == 1 ? -1 : 1);
        for (VAR24 = 0; VAR24 < VAR22; VAR24++)
        {
            const VAR27 *VAR28 = VAR4->VAR29[(VAR10 + 1) % VAR2->VAR16];
            const VAR27 *VAR30 = VAR4->VAR29[(VAR10 + 2) % VAR2->VAR16];
            VAR27 *VAR31 = VAR5->VAR29[VAR10] + VAR8 * VAR18;
            VAR27 *const VAR32 = VAR31 + VAR18 * (VAR2->VAR33 - 1);
            VAR27 *const VAR34 = (VAR13 ? VAR32 : VAR31);
            VAR27 *VAR35 = VAR34;
            for (VAR25 = 0; VAR25 < VAR20; VAR25++)
            {
                const int VAR36 = FUN2(VAR28[VAR24] - 128) + FUN2(VAR30[VAR24] - 128);
                VAR27 *VAR37;
                VAR37 = VAR35 + VAR24 + VAR26 * (256 - VAR36);
                update(VAR37, VAR19, VAR7);
                VAR37 = VAR35 + VAR24 + VAR26 * (255 + VAR36);
                update(VAR37, VAR19, VAR7);
                VAR28 += VAR14;
                VAR30 += VAR17;
                VAR31 += VAR18;
            }
        }
    }
    else
    {
        const VAR27 *VAR28 = VAR4->VAR29[(VAR10 + 1) % VAR2->VAR16];
        const VAR27 *VAR30 = VAR4->VAR29[(VAR10 + 2) % VAR2->VAR16];
        VAR27 *VAR31 = VAR5->VAR29[VAR10] + VAR8;
        if (VAR13)
            VAR31 += VAR2->VAR33 - 1;
        for (VAR25 = 0; VAR25 < VAR20; VAR25++)
        {
            for (VAR24 = 0; VAR24 < VAR22; VAR24++)
            {
                const int VAR36 = FUN2(VAR28[VAR24] - 128) + FUN2(VAR30[VAR24] - 128);
                VAR27 *VAR37;
                if (VAR13)
                {
                    VAR37 = VAR31 - (256 - VAR36);
                    update(VAR37, VAR19, VAR7);
                    VAR37 = VAR31 - (255 + VAR36);
                    update(VAR37, VAR19, VAR7);
                }
                else
                {
                    VAR37 = VAR31 + (256 - VAR36);
                    update(VAR37, VAR19, VAR7);
                    VAR37 = VAR31 + (255 + VAR36);
                    update(VAR37, VAR19, VAR7);
                }
            }
            VAR28 += VAR14;
            VAR30 += VAR17;
            VAR31 += VAR18;
        }
    }
    FUN3(VAR2, VAR5, VAR10, (VAR10 + 0) % VAR2->VAR16);
}