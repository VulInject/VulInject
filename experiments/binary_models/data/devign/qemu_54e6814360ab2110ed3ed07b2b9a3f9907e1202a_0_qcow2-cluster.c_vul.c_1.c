int FUN1(VAR1 *VAR2, uint64_t VAR3, int VAR4, int VAR5, int *VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    unsigned int VAR17, VAR18;
    uint64_t VAR19;
    FUN2(FUN3(), VAR3, VAR4, VAR5);
VAR20:
    VAR13 = FUN4(VAR2, VAR3, &VAR16, &VAR12);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    VAR17 = FUN5(FUN6(VAR10, VAR5 << VAR21), VAR10->VAR22 - VAR12);
    VAR19 = FUN7(VAR16[VAR12]);
    if (FUN8(VAR19) == VAR23 && (VAR19 & VAR24))
    {
        VAR18 = FUN9(VAR17, VAR10->VAR25, &VAR16[VAR12], 0, VAR24 | VAR26);
        assert(VAR18 <= VAR17);
        VAR17 -= VAR18;
    }
    else
    {
        if (VAR19 & VAR27)
        {
            VAR17 = 1;
        }
        else
        {
            VAR17 = FUN10(VAR10, VAR17, VAR16, VAR12);
        }
        VAR18 = 0;
        VAR19 = 0;
    }
    VAR19 &= VAR28;
    VAR13 = FUN11(VAR2, VAR10->VAR29, (void **)&VAR16);
    if (VAR13 < 0)
    {
        return VAR13;
    }
    *VAR8 = (VAR7){
        .VAR19 = VAR19,
        .VAR17 = 0,
    };
    FUN12(&VAR8->VAR30);
    if (VAR17 > 0)
    {
        uint64_t VAR31;
        uint64_t VAR32;
        uint64_t VAR33 = VAR18 * VAR10->VAR25;
        VAR31 = VAR3 + VAR33;
        if (VAR18 == 0)
        {
            VAR32 = 0;
        }
        else
        {
            VAR32 = VAR19 + VAR33;
        }
        VAR13 = FUN13(VAR2, VAR31, &VAR32, &VAR17);
        if (VAR13 == -VAR34)
        {
            goto VAR20;
        }
        else if (VAR13 < 0)
        {
            goto VAR35;
        }
        if (VAR17 > 0)
        {
            int VAR36 = VAR5 - VAR18 * VAR10->VAR37;
            int VAR38 = (VAR18 + VAR17) << (VAR10->VAR39 - VAR21);
            *VAR8 = (VAR7){
                .VAR19 = VAR18 == 0 ? VAR32 : VAR19,
                .VAR31 = VAR32,
                .VAR3 = VAR31,
                .VAR4 = VAR18 == 0 ? VAR4 : 0,
                .VAR17 = VAR17,
                .VAR40 = FUN5(VAR36, VAR38),
            };
            FUN12(&VAR8->VAR30);
            FUN14(&VAR10->VAR41, VAR8, VAR42);
        }
    }
    VAR14 = (VAR18 + VAR17) << (VAR10->VAR39 - 9);
    if (VAR14 > VAR5)
    {
        VAR14 = VAR5;
    }
    assert(VAR14 > VAR4);
    *VAR6 = VAR14 - VAR4;
    return 0;
VAR35:
    if (VAR8->VAR17 > 0)
    {
        FUN15(VAR8, VAR42);
    }
    return VAR13;
}