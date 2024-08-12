static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
    static const uint64_t VAR6[VAR7] = {
        [VAR8] = 8,
        [VAR9] = 8,
        [VAR10] = 0x1000000,
        [VAR11] = 0x1000000,
        [VAR12] = 0x10000000,
    };
    VAR13 *VAR14 = VAR2->VAR15->VAR14;
    uint32_t VAR16 = VAR4->VAR16;
    uint64_t VAR17;
    int VAR18;
    VAR5 = (char *)VAR5 + VAR4->VAR19;
    if (VAR4->VAR20)
    {
        VAR21 *VAR22 = VAR5;
        VAR22->VAR23 = FUN2(VAR22->VAR23, (VAR22->VAR24 + 1) * VAR4->VAR20);
        VAR5 = (char *)VAR22->VAR23 + VAR22->VAR24 * VAR4->VAR20;
        memset(VAR5, 0, VAR4->VAR20);
        VAR22->VAR24++;
    }
    if (VAR4->VAR25 != VAR26 && VAR4->VAR25 != VAR27)
    {
        VAR2->VAR28 = 0;
        if ((VAR18 = FUN3(VAR2, VAR14, &VAR17)) < 0)
            return VAR18;
        if (VAR6[VAR4->VAR25] && VAR17 > VAR6[VAR4->VAR25])
        {
            FUN4(VAR2->VAR15, VAR29, "" VAR30 "" VAR30 "", VAR17, VAR6[VAR4->VAR25], VAR4->VAR25);
            return VAR31;
        }
    }
    switch (VAR4->VAR25)
    {
    case VAR8:
        VAR18 = FUN5(VAR14, VAR17, VAR5);
        break;
    case VAR9:
        VAR18 = FUN6(VAR14, VAR17, VAR5);
        break;
    case VAR10:
    case VAR11:
        VAR18 = FUN7(VAR14, VAR17, VAR5);
        break;
    case VAR12:
        VAR18 = FUN8(VAR14, VAR17, VAR5);
        break;
    case VAR32:
        if ((VAR18 = FUN9(VAR2, VAR17)) < 0)
            return VAR18;
        if (VAR16 == VAR33)
            VAR2->VAR34 = FUN10(VAR2->VAR15->VAR14);
        return FUN11(VAR2, VAR4->VAR35.VAR36, VAR5);
    case VAR26:
        return FUN12(VAR2, VAR4->VAR35.VAR36, VAR16, VAR5);
    case VAR27:
        return 1;
    default:
        return FUN13(VAR14, VAR17) < 0 ? FUN14(VAR37) : 0;
    }
    if (VAR18 == VAR31)
        FUN4(VAR2->VAR15, VAR29, "");
    else if (VAR18 == FUN14(VAR37))
        FUN4(VAR2->VAR15, VAR29, "");
    return VAR18;
}