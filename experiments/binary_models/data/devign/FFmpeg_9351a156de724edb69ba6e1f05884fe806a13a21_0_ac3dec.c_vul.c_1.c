static inline int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    int VAR9 = VAR2->VAR9;
    int VAR10 = VAR2->VAR10;
    int VAR11;
    memset(VAR5, 3, VAR12);
    if (!VAR2->VAR13)
        VAR2->VAR14[VAR3] = FUN2(VAR7);
    if (VAR2->VAR14[VAR3])
    {
        int VAR15, VAR16;
        if (VAR10 < VAR17)
        {
            FUN3(VAR2->VAR18, VAR19, "");
            return VAR20;
        }
        if (VAR2->VAR13 && FUN2(VAR7))
        {
            FUN4(VAR2->VAR18, "");
            return VAR21;
        }
        if (VAR2->VAR13 && VAR2->VAR10 == VAR17)
        {
            VAR2->VAR22[1] = 1;
            VAR2->VAR22[2] = 1;
        }
        else
        {
            for (VAR11 = 1; VAR11 <= VAR9; VAR11++)
                VAR2->VAR22[VAR11] = FUN2(VAR7);
        }
        if (VAR10 == VAR17)
            VAR2->VAR23 = FUN2(VAR7);
        VAR15 = FUN5(VAR7, 4);
        VAR16 = VAR2->VAR24 ? (VAR2->VAR25 - 37) / 12 : FUN5(VAR7, 4) + 3;
        if (VAR15 >= VAR16)
        {
            FUN3(VAR2->VAR18, VAR19, "", VAR15, VAR16);
            return VAR20;
        }
        VAR2->VAR26[VAR27] = VAR15 * 12 + 37;
        VAR2->VAR28[VAR27] = VAR16 * 12 + 37;
        FUN6(VAR7, VAR3, VAR2->VAR13, 0, VAR15, VAR16, VAR29, &VAR2->VAR30, VAR2->VAR31);
    }
    else
    {
        for (VAR11 = 1; VAR11 <= VAR9; VAR11++)
        {
            VAR2->VAR22[VAR11] = 0;
            VAR2->VAR32[VAR11] = 1;
        }
        VAR2->VAR33 = VAR2->VAR13;
        VAR2->VAR23 = 0;
    }
    return 0;
}