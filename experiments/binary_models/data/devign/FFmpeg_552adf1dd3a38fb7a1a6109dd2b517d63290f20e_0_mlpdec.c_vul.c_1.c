static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6, unsigned int VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10[VAR5];
    VAR11 *VAR12 = &VAR9->VAR13[VAR6].VAR14[VAR7];
    const int VAR15 = VAR7 ? VAR16 : VAR17;
    const char VAR18 = VAR7 ? '' : '';
    int VAR19, VAR20;
    FUN2(VAR7 < 2);
    if (VAR2->VAR21[VAR6][VAR7]++ > 1)
    {
        FUN3(VAR2->VAR22, VAR23, "");
        return VAR24;
    }
    VAR20 = FUN4(VAR4, 4);
    if (VAR20 > VAR15)
    {
        FUN3(VAR2->VAR22, VAR23, "", VAR18, VAR20, VAR15);
        return VAR24;
    }
    VAR12->VAR20 = VAR20;
    if (VAR20 > 0)
    {
        VAR25 *VAR26 = VAR9->VAR13[VAR6].VAR27[VAR7];
        int VAR28, VAR29;
        VAR12->VAR30 = FUN4(VAR4, 4);
        VAR28 = FUN4(VAR4, 5);
        VAR29 = FUN4(VAR4, 3);
        if (VAR28 < 1 || VAR28 > 16)
        {
            FUN3(VAR2->VAR22, VAR23, "", VAR18);
            return VAR24;
        }
        if (VAR28 + VAR29 > 16)
        {
            FUN3(VAR2->VAR22, VAR23, "", VAR18);
            return VAR24;
        }
        for (VAR19 = 0; VAR19 < VAR20; VAR19++)
            VAR26[VAR19] = FUN5(VAR4, VAR28) * (1 << VAR29);
        if (FUN6(VAR4))
        {
            int VAR31, VAR32;
            if (VAR7 == VAR33)
            {
                FUN3(VAR2->VAR22, VAR23, "");
                return VAR24;
            }
            VAR31 = FUN4(VAR4, 4);
            VAR32 = FUN4(VAR4, 4);
            for (VAR19 = 0; VAR19 < VAR20; VAR19++)
                VAR12->VAR34[VAR19] = VAR31 ? FUN5(VAR4, VAR31) << VAR32 : 0;
        }
    }
    return 0;
}