static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12;
    VAR4 *VAR13;
    uint64_t VAR14;
    uint64_t VAR15;
    int VAR16;
    uint64_t VAR17;
    FUN2(FUN3(), VAR3, *VAR5, *VAR6);
    assert(*VAR6 > 0);
    VAR15 = FUN4(VAR10, FUN5(VAR10, VAR3) + *VAR6);
    VAR12 = FUN6(VAR10, VAR3);
    VAR15 = FUN7(VAR15, VAR10->VAR18 - VAR12);
    assert(VAR15 <= VAR19);
    VAR16 = FUN8(VAR2, VAR3, &VAR13, &VAR12);
    if (VAR16 < 0)
    {
        return VAR16;
    }
    VAR14 = FUN9(VAR13[VAR12]);
    if (VAR14 & VAR20)
    {
        VAR15 = 1;
    }
    else
    {
        VAR15 = FUN10(VAR10, VAR15, VAR13, VAR12);
    }
    assert(VAR15 > 0);
    FUN11(VAR2, VAR10->VAR21, (void **)&VAR13);
    VAR17 = FUN12(VAR10, *VAR5);
    VAR16 = FUN13(VAR2, VAR3, &VAR17, &VAR15);
    if (VAR16 < 0)
    {
        goto VAR22;
    }
    if (VAR15 == 0)
    {
        *VAR6 = 0;
        return 0;
    }
    if (!VAR17)
    {
        VAR16 = FUN14(VAR2, 0, VAR17, VAR15 * VAR10->VAR23);
        assert(VAR16 < 0);
        goto VAR22;
    }
    int VAR24 = (*VAR6 + FUN5(VAR10, VAR3)) >> VAR25;
    int VAR26 = VAR15 << (VAR10->VAR27 - VAR25);
    int VAR28 = FUN5(VAR10, VAR3) >> VAR25;
    int VAR29 = FUN7(VAR24, VAR26);
    VAR7 *VAR30 = *VAR8;
    *VAR8 = FUN15(sizeof(**VAR8));
    **VAR8 = (VAR7){
        .VAR31 = VAR30,
        .VAR32 = VAR17,
        .VAR33 = FUN12(VAR10, VAR3),
        .VAR15 = VAR15,
        .VAR34 = VAR29,
        .VAR35 = {
            .VAR33 = 0,
            .VAR29 = VAR28,
        },
        .VAR36 = {
            .VAR33 = VAR29 * VAR37,
            .VAR29 = VAR26 - VAR29,
        },
    };
    FUN16(&(*VAR8)->VAR38);
    FUN17(&VAR10->VAR39, *VAR8, VAR40);
    *VAR5 = VAR17 + FUN5(VAR10, VAR3);
    *VAR6 = FUN7(*VAR6, (VAR29 * VAR37) - FUN5(VAR10, VAR3));
    assert(*VAR6 != 0);
    return 1;
VAR22:
    if (*VAR8 && (*VAR8)->VAR15 > 0)
    {
        FUN18(*VAR8, VAR40);
    }
    return VAR16;
}