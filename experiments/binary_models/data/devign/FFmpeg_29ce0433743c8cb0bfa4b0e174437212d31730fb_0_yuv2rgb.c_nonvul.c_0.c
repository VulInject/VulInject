VAR1 FUN1(VAR2 *VAR3)
{
    SwsFunc VAR4 = NULL;
    VAR4 = FUN2(VAR3);
    VAR4 = FUN3(VAR3);
    VAR4 = FUN4(VAR3);
    if (VAR3->VAR5 & VAR6)
        VAR4 = FUN5(VAR3);
    if (VAR3->VAR5 & VAR7)
        VAR4 = FUN6(VAR3);
    if (VAR4)
        return VAR4;
    FUN7(VAR3, VAR8, "");
    switch (VAR3->VAR9)
    {
    case VAR10:
    case VAR11:
        return VAR12;
    case VAR13:
    case VAR14:
        if (VAR15 && VAR3->VAR16 == VAR17)
            return VAR18;
    case VAR19:
    case VAR20:
        return (VAR15 && VAR3->VAR16 == VAR17) ? VAR21 : VAR22;
    case VAR23:
        return VAR24;
    case VAR25:
        return VAR26;
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
        return VAR31;
    case VAR32:
    case VAR33:
        return VAR34;
    case VAR35:
    case VAR36:
        return VAR37;
    case VAR38:
    case VAR39:
        return VAR40;
    case VAR41:
        return VAR42;
    default:
        assert(0);
    }
    return NULL;
}