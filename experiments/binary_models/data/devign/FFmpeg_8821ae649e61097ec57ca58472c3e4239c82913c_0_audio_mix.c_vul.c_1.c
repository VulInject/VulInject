int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4 != VAR5 && VAR2->VAR4 != VAR6)
    {
        FUN2(VAR2, VAR7, ""
                                  "",
               FUN3(VAR2->VAR4));
        return FUN4(VAR8);
    }
    if (!VAR2->VAR9->VAR10)
    {
        int VAR11, VAR12;
        char VAR13[128];
        char VAR14[128];
        double *VAR15 = FUN5(VAR2->VAR16 * VAR2->VAR17 * sizeof(*VAR15));
        if (!VAR15)
            return FUN4(VAR18);
        VAR3 = FUN6(VAR2->VAR19, VAR2->VAR20, VAR2->VAR21, VAR2->VAR22, VAR2->VAR23, 1, VAR15, VAR2->VAR17, VAR2->VAR24);
        if (VAR3 < 0)
        {
            FUN7(VAR15);
            return VAR3;
        }
        FUN8(VAR13, sizeof(VAR13), VAR2->VAR17, VAR2->VAR19);
        FUN8(VAR14, sizeof(VAR14), VAR2->VAR16, VAR2->VAR20);
        FUN2(VAR2, VAR25, "", VAR13, VAR14);
        for (VAR11 = 0; VAR11 < VAR2->VAR16; VAR11++)
        {
            for (VAR12 = 0; VAR12 < VAR2->VAR17; VAR12++)
            {
                FUN2(VAR2, VAR25, "", VAR15[VAR11 * VAR2->VAR17 + VAR12]);
            }
            FUN2(VAR2, VAR25, "");
        }
        VAR3 = FUN9(VAR2, VAR15, VAR2->VAR17);
        if (VAR3 < 0)
        {
            FUN7(VAR15);
            return VAR3;
        }
        FUN7(VAR15);
    }
    VAR2->VAR9->VAR26 = VAR2->VAR4;
    VAR2->VAR9->VAR27 = VAR2->VAR28;
    VAR2->VAR9->VAR29 = VAR2->VAR19;
    VAR2->VAR9->VAR30 = VAR2->VAR20;
    VAR2->VAR9->VAR17 = VAR2->VAR17;
    VAR2->VAR9->VAR16 = VAR2->VAR16;
    VAR3 = FUN10(VAR2->VAR9);
    if (VAR3 < 0)
        return VAR3;
    return 0;
}