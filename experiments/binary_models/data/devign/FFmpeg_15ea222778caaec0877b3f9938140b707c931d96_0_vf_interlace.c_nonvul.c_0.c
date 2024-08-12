static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR6 *VAR7, enum FieldType VAR8, int VAR9)
{
    const VAR10 *VAR11 = FUN2(VAR7->VAR12);
    int VAR13 = VAR11->VAR14;
    int VAR15 = VAR11->VAR16;
    int VAR17, VAR18;
    for (VAR17 = 0; VAR17 < VAR11->VAR19; VAR17++)
    {
        int VAR20 = (VAR17 == 1 || VAR17 == 2) ? -(-VAR7->VAR21) >> VAR13 : VAR7->VAR21;
        int VAR22 = (VAR17 == 1 || VAR17 == 2) ? -(-VAR7->VAR23) >> VAR15 : VAR7->VAR23;
        VAR24 *VAR25 = VAR5->VAR26[VAR17];
        const VAR24 *VAR27 = VAR4->VAR26[VAR17];
        FUN3(VAR20 >= 0 || VAR22 >= 0);
        VAR22 = (VAR22 + (VAR8 == VAR28)) / 2;
        if (VAR8 == VAR29)
        {
            VAR27 += VAR4->VAR30[VAR17];
            VAR25 += VAR5->VAR30[VAR17];
        }
        if (VAR9)
        {
            int VAR31 = VAR4->VAR30[VAR17] * 2;
            int VAR32 = VAR5->VAR30[VAR17] * 2;
            for (VAR18 = VAR22; VAR18 > 0; VAR18--)
            {
                const VAR24 *VAR33 = VAR27 - VAR4->VAR30[VAR17];
                const VAR24 *VAR34 = VAR27 + VAR4->VAR30[VAR17];
                if (VAR18 == VAR22)
                    VAR33 = VAR27;
                if (VAR18 == 1)
                    VAR34 = VAR27;
                VAR2->FUN4(VAR25, VAR20, VAR27, VAR33, VAR34);
                VAR25 += VAR32;
                VAR27 += VAR31;
            }
        }
        else
        {
            FUN5(VAR25, VAR5->VAR30[VAR17] * 2, VAR27, VAR4->VAR30[VAR17] * 2, VAR20, VAR22);
        }
    }
}