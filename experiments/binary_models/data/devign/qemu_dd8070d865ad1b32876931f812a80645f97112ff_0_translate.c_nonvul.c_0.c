static VAR1 FUN1(VAR2 *VAR3, tilegx_bundle_bits VAR4)
{
    unsigned VAR5 = FUN2(VAR4);
    unsigned VAR6 = FUN3(VAR4);
    unsigned VAR7 = FUN4(VAR4);
    unsigned VAR8 = FUN5(VAR4);
    unsigned VAR9;
    int VAR10;
    switch (VAR5)
    {
    case VAR11:
        if (VAR6 == VAR12)
        {
            VAR6 = FUN6(VAR4);
            return FUN7(VAR3, FUN8(VAR5, VAR6, VAR13), VAR7, VAR8, VAR4);
        }
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
        VAR9 = FUN9(VAR4);
        return FUN10(VAR3, FUN8(VAR5, VAR6, VAR13), VAR7, VAR8, VAR9);
    case VAR23:
        VAR6 = FUN11(VAR4);
        VAR10 = FUN12(VAR4);
        return FUN13(VAR3, FUN8(VAR5, VAR6, VAR13), VAR7, VAR8, VAR10);
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
        VAR10 = (VAR29)FUN14(VAR4);
        return FUN13(VAR3, FUN8(VAR5, 0, VAR13), VAR7, VAR8, VAR10);
    default:
        return VAR30;
    }
}