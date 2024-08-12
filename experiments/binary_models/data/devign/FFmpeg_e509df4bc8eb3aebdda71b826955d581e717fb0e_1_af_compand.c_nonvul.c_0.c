static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    const int VAR11 = VAR9->VAR11;
    const int VAR12 = VAR4->VAR12;
    int VAR13, VAR14, FUN2(VAR15), VAR16, FUN2(VAR17);
    VAR3 *VAR18 = NULL;
    int VAR19;
    if (VAR6->VAR20 == VAR21)
    {
        VAR6->VAR20 = (VAR4->VAR20 == VAR21) ? 0 : VAR4->VAR20;
    }
    FUN3(VAR11 > 0);
    for (VAR13 = 0; VAR13 < VAR11; VAR13++)
    {
        VAR3 *VAR22 = VAR6->VAR22;
        const double *VAR23 = (double *)VAR4->VAR24[VAR13];
        double *VAR25 = (double *)VAR22->VAR24[VAR13];
        VAR26 *VAR27 = &VAR6->VAR11[VAR13];
        double *VAR28;
        VAR17 = VAR6->VAR29;
        VAR15 = VAR6->VAR30;
        for (VAR14 = 0, VAR16 = 0; VAR14 < VAR12; VAR14++)
        {
            const double VAR31 = VAR23[VAR14];
            FUN4(VAR27, FUN5(VAR31));
            if (VAR17 >= VAR6->VAR32)
            {
                if (!VAR18)
                {
                    VAR18 = FUN6(VAR9, VAR12 - VAR14);
                    if (!VAR18)
                    {
                        FUN7(&VAR4);
                        return FUN8(VAR33);
                    }
                    VAR19 = FUN9(VAR18, VAR4);
                    if (VAR19 < 0)
                    {
                        FUN7(&VAR18);
                        FUN7(&VAR4);
                        return VAR19;
                    }
                    VAR18->VAR20 = VAR6->VAR20;
                    VAR6->VAR20 += FUN10(VAR12 - VAR14, (VAR34){1, VAR9->VAR35}, VAR9->VAR36);
                }
                VAR28 = (double *)VAR18->VAR24[VAR13];
                VAR28[VAR16++] = FUN11(VAR25[VAR15] * FUN12(VAR6, VAR27->VAR37), -1, 1);
            }
            else
            {
                VAR17++;
            }
            VAR25[VAR15] = VAR31;
            VAR15 = FUN13(VAR15 + 1, VAR6->VAR32);
        }
    }
    VAR6->VAR29 = VAR17;
    VAR6->VAR30 = VAR15;
    FUN7(&VAR4);
    return VAR18 ? FUN14(VAR2->VAR38[0], VAR18) : 0;
}