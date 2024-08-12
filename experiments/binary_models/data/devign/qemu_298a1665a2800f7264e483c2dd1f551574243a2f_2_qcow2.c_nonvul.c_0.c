static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    VAR1 *VAR9;
    uint64_t VAR10 = 0;
    uint64_t VAR11;
    uint64_t VAR12;
    uint64_t VAR13;
    size_t VAR14;
    int VAR15;
    char *VAR16;
    PreallocMode VAR17;
    bool VAR18;
    VAR14 = FUN2(VAR3, &VAR8);
    if (VAR8)
    {
        goto VAR19;
    }
    VAR15 = FUN3(VAR3, &VAR8);
    if (VAR8)
    {
        goto VAR19;
    }
    VAR12 = FUN4(VAR3, VAR15, &VAR8);
    if (VAR8)
    {
        goto VAR19;
    }
    VAR16 = FUN5(VAR3, VAR20);
    VAR17 = FUN6(&VAR21, VAR16, VAR22, &VAR8);
    FUN7(VAR16);
    if (VAR8)
    {
        goto VAR19;
    }
    VAR16 = FUN5(VAR3, VAR23);
    VAR18 = !!VAR16;
    FUN7(VAR16);
    VAR11 = FUN8(FUN9(VAR3, VAR24, 0), VAR14);
    VAR13 = FUN10(VAR11 / VAR14, VAR14 / sizeof(VAR25));
    if (VAR13 * sizeof(VAR25) > VAR26)
    {
        FUN11(&VAR8, ""
                               "");
        goto VAR19;
    }
    if (VAR5)
    {
        int64_t VAR27 = FUN12(VAR5);
        if (VAR27 < 0)
        {
            FUN13(&VAR8, -VAR27, "");
            goto VAR19;
        }
        VAR11 = FUN8(VAR27, VAR14);
        if (VAR18)
        {
            VAR10 = VAR11;
        }
        else
        {
            int64_t VAR28;
            int VAR29 = 0;
            for (VAR28 = 0; VAR28 < VAR27; VAR28 += VAR29 * VAR30)
            {
                int VAR31 = FUN14(VAR27 - VAR28, VAR32) / VAR30;
                int64_t VAR33;
                VAR33 = FUN15(VAR5, NULL, VAR28 >> VAR34, VAR31, &VAR29, NULL);
                if (VAR33 < 0)
                {
                    FUN13(&VAR8, -VAR33, "");
                    goto VAR19;
                }
                if (VAR33 & VAR35)
                {
                }
                else if ((VAR33 & (VAR36 | VAR37)) == (VAR36 | VAR37))
                {
                    VAR29 = (FUN16(VAR28 + VAR29 * VAR30, VAR14) - VAR28) >> VAR34;
                    VAR10 += VAR28 % VAR14 + VAR29 * VAR30;
                }
            }
        }
    }
    if (VAR17 == VAR38 || VAR17 == VAR39)
    {
        VAR10 = VAR11;
    }
    VAR9 = FUN17(VAR1, 1);
    VAR9->VAR40 = FUN18(VAR11, VAR14, FUN19(VAR12));
    VAR9->VAR10 = VAR9->VAR40 - VAR11 + VAR10;
    return VAR9;
VAR19:
    FUN20(VAR7, VAR8);
    return NULL;
}