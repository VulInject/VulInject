static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    ThreadFrame VAR9 = {.VAR10 = VAR3};
    const VAR11 *VAR12 = VAR6->VAR3;
    int VAR13 = VAR6->VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    int VAR18 = 0;
    int VAR19;
    *VAR4 = 0;
    if (VAR16->VAR20 == 0)
    {
        VAR16->VAR20 = FUN2(VAR16->VAR21 ? VAR16->VAR21 : VAR22, VAR23, 32);
    }
    if (VAR13 > 5 && !memcmp(VAR12, "", 5))
    {
        FUN3(VAR16->VAR2, VAR24, "");
        return VAR13;
    }
    if (VAR13 > 0 && (*VAR12 & 0x7F) == VAR25)
    {
        FUN3(VAR16->VAR2, VAR24, "");
        return VAR13;
    }
    if (VAR13 < VAR26)
        return VAR13;
    if (FUN4(VAR12) == FUN5('', '', '', ''))
    {
        if (!VAR16->VAR27 && (VAR19 = FUN6(VAR16, VAR12, VAR13)))
        {
            FUN3(VAR16->VAR2, VAR28, "");
            return VAR19;
        }
        return FUN7(VAR12, VAR13);
    }
    if ((VAR19 = FUN8(&VAR16->VAR29, VAR12, VAR13)) < 0)
        return VAR19;
    if ((VAR19 = FUN9(VAR16)) < 0)
    {
        FUN3(VAR16->VAR2, VAR28, "");
        return VAR19;
    }
    VAR18 = FUN10(&VAR16->VAR29) / 8;
    if ((VAR16->VAR2->VAR30 & (VAR31 | VAR32)) && FUN11(FUN12(VAR33), 0, VAR12, VAR18))
    {
        FUN3(VAR16->VAR2, VAR28, "" VAR34 "", VAR6->VAR35);
        if (VAR16->VAR2->VAR30 & VAR36)
            return VAR37;
    }
    VAR8->VAR38 = VAR16->VAR39;
    if ((VAR19 = FUN13(VAR2, &VAR9, 0)) < 0)
        return VAR19;
    VAR16->VAR40.VAR41[VAR16->VAR42](VAR8->VAR3, VAR16->VAR43, VAR16->VAR44, VAR16->VAR39, VAR16->VAR45);
    if (VAR18 > VAR13)
    {
        FUN3(VAR16->VAR2, VAR28, "", VAR18 - VAR13);
        return VAR37;
    }
    if (VAR18 < VAR13)
    {
        FUN3(VAR16->VAR2, VAR24, "", VAR13 - VAR18, VAR13);
    }
    *VAR4 = 1;
    return VAR18;
}