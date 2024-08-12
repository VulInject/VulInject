static VAR1 FUN1(VAR2 *VAR3, tilegx_bundle_bits VAR4)
{
    unsigned VAR5 = FUN2(VAR4);
    unsigned VAR6 = FUN3(VAR4);
    unsigned VAR7 = FUN4(VAR4);
    unsigned VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    switch (VAR5)
    {
    case VAR13:
        VAR8 = FUN5(VAR4);
        if (VAR8 == VAR14)
        {
            VAR8 = FUN6(VAR4);
            return FUN7(VAR3, FUN8(VAR5, VAR8, VAR15), VAR6, VAR7, VAR4);
        }
        VAR9 = FUN9(VAR4);
        return FUN10(VAR3, FUN8(VAR5, VAR8, VAR15), VAR6, VAR7, VAR9);
    case VAR16:
        VAR8 = FUN11(VAR4);
        VAR12 = FUN12(VAR4);
        return FUN13(VAR3, FUN8(VAR5, VAR8, VAR15), VAR6, VAR7, VAR12);
    case VAR17:
        VAR8 = FUN14(VAR4);
        VAR12 = (VAR18)FUN15(VAR4);
        return FUN13(VAR3, FUN8(VAR5, VAR8, VAR15), VAR6, VAR7, VAR12);
    case VAR19:
        VAR8 = FUN16(VAR4);
        VAR10 = FUN17(VAR4);
        VAR11 = FUN18(VAR4);
        return FUN19(VAR3, VAR8, VAR6, VAR7, VAR10, VAR11);
    case VAR20:
    case VAR21:
    case VAR22:
        VAR12 = (VAR23)FUN20(VAR4);
        return FUN13(VAR3, FUN8(VAR5, 0, VAR15), VAR6, VAR7, VAR12);
    default:
        return VAR24;
    }
}