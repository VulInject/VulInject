static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12;
    VAR4 *VAR13;
    uint64_t VAR14;
    unsigned int VAR15;
    int VAR16;
    uint64_t VAR17;
    FUN2(FUN3(), VAR3, *VAR5, *VAR6);
    assert(*VAR6 > 0);
    VAR15 = FUN4(VAR10, FUN5(VAR10, VAR3) + *VAR6);
    VAR12 = FUN6(VAR10, VAR3);
    VAR15 = FUN7(VAR15, VAR10->VAR18 - VAR12);
    VAR16 = FUN8(VAR2, VAR3, &VAR13, &VAR12);
    if (VAR16 < 0)
    {
        return VAR16;
    }
    VAR14 = FUN9(VAR13[VAR12]);
    if (VAR14 & VAR19)
    {
        VAR15 = 1;
    }
    else
    {
        VAR15 = FUN10(VAR10, VAR15, VAR13, VAR12);
    }
    VAR16 = FUN11(VAR2, VAR10->VAR20, (void **)&VAR13);
    if (VAR16 < 0)
    {
        return VAR16;
    }
    if (VAR15 == 0)
    {
        *VAR6 = 0;
        return 0;
    }
    VAR17 = FUN12(VAR10, *VAR5);
    VAR16 = FUN13(VAR2, VAR3, &VAR17, &VAR15);
    if (VAR16 < 0)
    {
        goto VAR21;
    }
    if (VAR15 == 0)
    {
        *VAR6 = 0;
        return 0;
    }
    int VAR22 = (*VAR6 + FUN5(VAR10, VAR3)) >> VAR23;
    int VAR24 = VAR15 << (VAR10->VAR25 - VAR23);
    int VAR26 = FUN5(VAR10, VAR3) >> VAR23;
    int VAR27 = FUN7(VAR22, VAR24);
    VAR7 *VAR28 = *VAR8;
    *VAR8 = FUN14(sizeof(**VAR8));
    **VAR8 = (VAR7){
        .VAR29 = VAR28,
        .VAR30 = VAR17,
        .VAR31 = FUN12(VAR10, VAR3),
        .VAR15 = VAR15,
        .VAR32 = VAR27,
        .VAR33 = {
            .VAR31 = 0,
            .VAR27 = VAR26,
        },
        .VAR34 = {
            .VAR31 = VAR27 * VAR35,
            .VAR27 = VAR24 - VAR27,
        },
    };
    FUN15(&(*VAR8)->VAR36);
    FUN16(&VAR10->VAR37, *VAR8, VAR38);
    *VAR5 = VAR17 + FUN5(VAR10, VAR3);
    *VAR6 = FUN7(*VAR6, (VAR27 * VAR35) - FUN5(VAR10, VAR3));
    assert(*VAR6 != 0);
    return 1;
VAR21:
    if (*VAR8 && (*VAR8)->VAR15 > 0)
    {
        FUN17(*VAR8, VAR38);
    }
    return VAR16;
}