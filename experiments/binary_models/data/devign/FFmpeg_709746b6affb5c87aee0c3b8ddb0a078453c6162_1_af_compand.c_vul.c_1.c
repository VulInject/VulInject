static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    const int VAR11 = VAR9->VAR11;
    const int VAR12 = VAR4->VAR12;
    int VAR13, VAR14, FUN2(VAR15), VAR16, FUN2(VAR17);
    VAR3 *VAR18 = NULL;
    FUN3(VAR11 > 0);
    for (VAR13 = 0; VAR13 < VAR11; VAR13++)
    {
        const double *VAR19 = (double *)VAR4->VAR20[VAR13];
        double *VAR21 = (double *)VAR6->VAR22[VAR13];
        VAR23 *VAR24 = &VAR6->VAR11[VAR13];
        double *VAR25;
        VAR17 = VAR6->VAR26;
        VAR15 = VAR6->VAR27;
        for (VAR14 = 0, VAR16 = 0; VAR14 < VAR12; VAR14++)
        {
            const double VAR28 = VAR19[VAR14];
            FUN4(VAR24, FUN5(VAR28));
            if (VAR17 >= VAR6->VAR29)
            {
                if (!VAR18)
                {
                    VAR18 = FUN6(VAR9, VAR12 - VAR14);
                    if (!VAR18)
                        return FUN7(VAR30);
                    FUN8(VAR18, VAR4);
                    VAR18->VAR31 = VAR6->VAR31;
                    VAR6->VAR31 += FUN9(VAR12 - VAR14, (VAR32){1, VAR9->VAR33}, VAR9->VAR34);
                }
                VAR25 = (double *)VAR18->VAR20[VAR13];
                VAR25[VAR16++] = FUN10(VAR21[VAR15] * FUN11(VAR6, VAR24->VAR35), -1, 1);
            }
            else
            {
                VAR17++;
            }
            VAR21[VAR15] = VAR28;
            VAR15 = FUN12(VAR15 + 1, VAR6->VAR29);
        }
    }
    VAR6->VAR26 = VAR17;
    VAR6->VAR27 = VAR15;
    FUN13(&VAR4);
    return VAR18 ? FUN14(VAR2->VAR36[0], VAR18) : 0;
}