static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 **VAR9)
{
    int VAR10;
    VAR11 *VAR12 = VAR3->VAR13;
    int64_t VAR14;
    uint64_t VAR15;
    uint64_t VAR16 = FUN2(VAR5);
    const char *VAR17 = FUN3(VAR5);
    VAR18 *VAR19 = NULL;
    VAR20 *VAR21;
    VAR1 *VAR22;
    uint64_t VAR23 = FUN4(VAR12, FUN5(VAR5, 0, VAR16));
    if (VAR23 > VAR24 || VAR23 * VAR12->VAR25 > VAR26)
    {
        FUN6(VAR9, "", VAR17);
        return NULL;
    }
    VAR22 = FUN7(VAR1, VAR23);
    if (VAR22 == NULL)
    {
        FUN6(VAR9, "");
        return NULL;
    }
    VAR21 = FUN8(VAR5);
    VAR19 = FUN9(VAR12->VAR25);
    VAR15 = FUN10(VAR12, VAR5);
    assert(FUN11(VAR16, VAR15) == VAR23);
    while ((VAR14 = FUN12(VAR21)) >= 0)
    {
        uint64_t VAR27 = VAR14 / VAR15;
        uint64_t VAR28, VAR29;
        int64_t VAR30;
        VAR14 = FUN13(VAR14, VAR15);
        VAR28 = FUN14(VAR16, VAR14 + VAR15);
        VAR29 = FUN5(VAR5, VAR14, VAR28 - VAR14);
        assert(VAR29 <= VAR12->VAR25);
        VAR30 = FUN15(VAR3, VAR12->VAR25);
        if (VAR30 < 0)
        {
            FUN16(VAR9, -VAR30, "", VAR17);
            goto VAR31;
        }
        VAR22[VAR27] = VAR30;
        FUN17(VAR5, VAR19, VAR14, VAR28 - VAR14);
        if (VAR29 < VAR12->VAR25)
        {
            memset(VAR19 + VAR29, 0, VAR12->VAR25 - VAR29);
        }
        VAR10 = FUN18(VAR3, 0, VAR30, VAR12->VAR25);
        if (VAR10 < 0)
        {
            FUN16(VAR9, -VAR10, "");
            goto VAR31;
        }
        VAR10 = FUN19(VAR3->VAR32, VAR30, VAR19, VAR12->VAR25);
        if (VAR10 < 0)
        {
            FUN16(VAR9, -VAR10, "", VAR17);
            goto VAR31;
        }
        if (VAR28 >= VAR16)
        {
            break;
        }
        FUN20(VAR21, VAR28);
    }
    *VAR7 = VAR23;
    FUN21(VAR19);
    FUN22(VAR21);
    return VAR22;
VAR31:
    FUN23(VAR3, VAR22, VAR23);
    FUN21(VAR19);
    FUN22(VAR21);
    FUN21(VAR22);
    return NULL;
}