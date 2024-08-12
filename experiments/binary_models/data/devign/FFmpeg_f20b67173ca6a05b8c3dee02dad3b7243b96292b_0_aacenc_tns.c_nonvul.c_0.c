void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7, VAR8, VAR9, VAR10 = 0, VAR11 = 0;
    const int VAR12 = VAR4->VAR13.VAR14[0] == VAR15;
    const int VAR16 = VAR12 ? 7 : VAR2->VAR17 == VAR18 ? 12
                                                                         : VAR19;
    for (VAR7 = 0; VAR7 < VAR4->VAR13.VAR20; VAR7 += VAR4->VAR13.VAR21[VAR7])
    {
        int VAR22 = 0, VAR23 = 1;
        int VAR24 = 0, VAR25 = 0;
        int VAR26 = 0, VAR27 = 0;
        float VAR28 = 0.0f, VAR29 = 0.0f;
        double VAR30[VAR31][VAR31] = {{0}};
        for (VAR8 = 0; VAR8 < VAR4->VAR13.VAR32; VAR8++)
        {
            if (!VAR24 && VAR7 * 16 + VAR8 > VAR33 && VAR7 * 16 + VAR8 > VAR10)
            {
                VAR24 = VAR7 * 16 + VAR8;
                VAR26 = VAR4->VAR13.VAR34[VAR24];
            }
            if (VAR24)
            {
                for (VAR9 = 0; VAR9 < VAR4->VAR13.VAR21[VAR7]; VAR9++)
                {
                    VAR35 *VAR36 = &VAR2->VAR37.VAR38[VAR2->VAR39].VAR40[(VAR7 + VAR9) * 16 + VAR8];
                    if (!VAR25 && VAR36->VAR28 < VAR36->VAR29 * 1.3f)
                    {
                        VAR25 = (VAR7 + VAR9) * 16 + VAR8 - VAR24;
                        VAR10 = VAR24 + VAR25;
                        VAR27 = VAR4->VAR13.VAR34[VAR24 + VAR25] - VAR26;
                        break;
                    }
                    VAR28 += VAR36->VAR28;
                    VAR29 += VAR36->VAR29;
                }
                if (!VAR25)
                {
                    VAR25 = (VAR7 + VAR4->VAR13.VAR21[VAR7]) * 16 + VAR8 - VAR24;
                    VAR27 = VAR4->VAR13.VAR34[VAR24 + VAR25] - VAR26;
                }
            }
        }
        if (VAR25 <= 0 || VAR27 <= 0)
            continue;
        if (VAR26 + VAR27 > 1024)
            VAR27 = 1024 - VAR26;
        VAR22 = FUN2(&VAR2->VAR41, &VAR4->VAR42[VAR26], VAR27, VAR30, 0, VAR16, VAR43);
        if (VAR28 > VAR29)
        {
            int VAR44 = 0;
            VAR6->VAR45[VAR7] = VAR23++;
            for (VAR8 = 0; VAR8 < VAR6->VAR45[VAR7]; VAR8++)
            {
                FUN3(VAR6, VAR30[VAR22], &VAR22, VAR7, VAR8);
                VAR6->VAR22[VAR7][VAR8] = VAR22;
                VAR6->VAR46[VAR7][VAR8] = VAR25;
                VAR6->VAR44[VAR7][VAR8] = VAR44;
            }
            VAR11++;
        }
    }
    VAR4->VAR6.VAR47 = !!VAR11;
}