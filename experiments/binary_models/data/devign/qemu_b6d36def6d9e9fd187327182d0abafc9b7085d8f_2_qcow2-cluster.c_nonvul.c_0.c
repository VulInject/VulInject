static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12;
    uint64_t VAR13;
    VAR4 *VAR14;
    uint64_t VAR15;
    unsigned int VAR16;
    int VAR17;
    FUN2(FUN3(), VAR3, *VAR5, *VAR6);
    assert(*VAR5 == 0 || FUN4(VAR10, VAR3) == FUN4(VAR10, *VAR5));
    VAR15 = FUN5(VAR10, FUN4(VAR10, VAR3) + *VAR6);
    VAR12 = FUN6(VAR10, VAR3);
    VAR15 = FUN7(VAR15, VAR10->VAR18 - VAR12);
    assert(VAR15 <= VAR19);
    VAR17 = FUN8(VAR2, VAR3, &VAR14, &VAR12);
    if (VAR17 < 0)
    {
        return VAR17;
    }
    VAR13 = FUN9(VAR14[VAR12]);
    if (FUN10(VAR13) == VAR20 && (VAR13 & VAR21))
    {
        bool VAR22 = (VAR13 & VAR23) == *VAR5;
        if (FUN4(VAR10, VAR13 & VAR23))
        {
            FUN11(VAR2, true, -1, -1, ""
                                                      "" VAR24 "",
                                    VAR13 & VAR23, VAR3);
            VAR17 = -VAR25;
            goto VAR26;
        }
        if (*VAR5 != 0 && !VAR22)
        {
            *VAR6 = 0;
            VAR17 = 0;
            goto VAR26;
        }
        VAR16 = FUN12(VAR15, VAR10->VAR27, &VAR14[VAR12], VAR21 | VAR28);
        assert(VAR16 <= VAR15);
        *VAR6 = FUN7(*VAR6, VAR16 * VAR10->VAR27 - FUN4(VAR10, VAR3));
        VAR17 = 1;
    }
    else
    {
        VAR17 = 0;
    }
VAR26:
    FUN13(VAR2, VAR10->VAR29, (void **)&VAR14);
    if (VAR17 > 0)
    {
        *VAR5 = (VAR13 & VAR23) + FUN4(VAR10, VAR3);
    }
    return VAR17;
}