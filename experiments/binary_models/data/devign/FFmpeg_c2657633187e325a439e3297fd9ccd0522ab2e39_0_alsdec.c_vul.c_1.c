static int FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    unsigned int VAR10[32];
    unsigned int VAR11;
    unsigned int VAR12[2];
    uint32_t VAR13 = 0;
    int VAR14;
    if (VAR5->VAR15 == VAR16 && VAR3)
        FUN2(VAR9, 32);
    if (VAR5->VAR17 && VAR5->VAR18)
    {
        VAR2->VAR19 = FUN3(VAR9);
        FUN4(VAR9);
        if (!VAR5->VAR17 || VAR2->VAR19)
        {
            int VAR20 = !VAR5->VAR18;
            for (VAR11 = 0; VAR11 < VAR7->VAR21; VAR11++)
            {
                VAR12[0] = 0;
                VAR12[1] = 0;
                FUN5(VAR2, VAR10, &VAR13);
                if (VAR5->VAR18 && VAR5->VAR22)
                    if (VAR13 >> 31)
                        VAR20 = 2;
                if (VAR11 == VAR7->VAR21 - 1)
                    VAR20 = 1;
                if (VAR20)
                {
                    VAR14 = FUN6(VAR2, VAR3, VAR11, VAR10, VAR12);
                    if (VAR14 < 0)
                        return VAR14;
                    VAR20--;
                }
                else
                {
                    VAR14 = FUN7(VAR2, VAR3, VAR11, VAR10, VAR12);
                    if (VAR14 < 0)
                        return VAR14;
                    VAR11++;
                    memmove(VAR2->VAR23[VAR11] - VAR5->VAR24, VAR2->VAR23[VAR11] - VAR5->VAR24 + VAR5->VAR25, sizeof(*VAR2->VAR23[VAR11]) * VAR5->VAR24);
                }
                else
                {
                    ALSBlockData VAR26 = {0};
                    int VAR27, VAR14;
                    int *VAR28 = VAR2->VAR28;
                    unsigned int VAR29 = 0;
                    for (VAR11 = 0; VAR11 < VAR7->VAR21; VAR11++)
                        if (VAR2->VAR30[VAR11] < VAR2->VAR31)
                        {
                            FUN8(VAR2->VAR7, VAR32, "");
                            memset(VAR28, 0, sizeof(*VAR28) * VAR7->VAR21);
                            VAR26.VAR33 = VAR3;
                            VAR26.VAR34 = VAR2->VAR34;
                            FUN5(VAR2, VAR10, &VAR13);
                            for (VAR27 = 0; VAR27 < VAR2->VAR35; VAR27++)
                            {
                                VAR26.VAR36 = VAR10[VAR27];
                                if (VAR26.VAR36 <= 0)
                                {
                                    FUN8(VAR2->VAR7, VAR37, "", VAR26.VAR36);
                                    continue;
                                    for (VAR11 = 0; VAR11 < VAR7->VAR21; VAR11++)
                                    {
                                        VAR26.VAR38 = VAR2->VAR38 + VAR11;
                                        VAR26.VAR39 = VAR2->VAR39 + VAR11;
                                        VAR26.VAR40 = VAR2->VAR40 + VAR11;
                                        VAR26.VAR41 = VAR2->VAR41 + VAR11;
                                        VAR26.VAR42 = VAR2->VAR42 + VAR11;
                                        VAR26.VAR43 = VAR2->VAR43 + VAR11;
                                        VAR26.VAR44 = VAR2->VAR44[VAR11];
                                        VAR26.VAR45 = VAR2->VAR45[VAR11];
                                        VAR26.VAR46 = VAR2->VAR46[VAR11];
                                        VAR26.VAR23 = VAR2->VAR23[VAR11] + VAR29;
                                        VAR26.VAR47 = NULL;
                                        if ((VAR14 = FUN9(VAR2, &VAR26)) < 0)
                                            return VAR14;
                                        if ((VAR14 = FUN10(VAR2, VAR2->VAR30[VAR11], VAR11)) < 0)
                                            return VAR14;
                                        for (VAR11 = 0; VAR11 < VAR7->VAR21; VAR11++)
                                        {
                                            VAR14 = FUN11(VAR2, &VAR26, VAR2->VAR30, VAR28, VAR29, VAR11);
                                            if (VAR14 < 0)
                                                return VAR14;
                                            for (VAR11 = 0; VAR11 < VAR7->VAR21; VAR11++)
                                            {
                                                VAR26.VAR38 = VAR2->VAR38 + VAR11;
                                                VAR26.VAR39 = VAR2->VAR39 + VAR11;
                                                VAR26.VAR40 = VAR2->VAR40 + VAR11;
                                                VAR26.VAR41 = VAR2->VAR41 + VAR11;
                                                VAR26.VAR42 = VAR2->VAR42 + VAR11;
                                                VAR26.VAR43 = VAR2->VAR43 + VAR11;
                                                VAR26.VAR44 = VAR2->VAR44[VAR11];
                                                VAR26.VAR45 = VAR2->VAR45[VAR11];
                                                VAR26.VAR46 = VAR2->VAR46[VAR11];
                                                VAR26.VAR23 = VAR2->VAR23[VAR11] + VAR29;
                                                if ((VAR14 = FUN12(VAR2, &VAR26)) < 0)
                                                    return VAR14;
                                                memset(VAR28, 0, VAR7->VAR21 * sizeof(*VAR28));
                                                VAR29 += VAR10[VAR27];
                                                VAR26.VAR33 = 0;
                                                for (VAR11 = 0; VAR11 < VAR7->VAR21; VAR11++)
                                                    memmove(VAR2->VAR23[VAR11] - VAR5->VAR24, VAR2->VAR23[VAR11] - VAR5->VAR24 + VAR5->VAR25, sizeof(*VAR2->VAR23[VAR11]) * VAR5->VAR24);
                                                return 0