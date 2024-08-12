static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8, int VAR9, int VAR10)
{
    GetBitContext VAR11;
    int VAR12, VAR13;
    FUN2(VAR4, "", VAR9 >> 3);
    for (VAR12 = 0; VAR12 < VAR9 >> 3; VAR12++)
        FUN2(VAR4, "", VAR8[VAR12]);
    FUN2(VAR4, "");
    if ((VAR13 = FUN3(&VAR11, VAR8, VAR9)) < 0)
        return VAR13;
    if ((VAR12 = FUN4(VAR6, VAR8, VAR9, VAR10)) < 0)
        return VAR14;
    if (VAR6->VAR15 > 12)
    {
        FUN5(VAR4, VAR16, "", VAR6->VAR15);
        return VAR14;
    }
    if (VAR6->VAR17 == VAR18 && (VAR6->VAR15 < 3 || VAR6->VAR15 > 7))
    {
        FUN5(VAR4, VAR16, "", VAR6->VAR15);
        return VAR14;
    }
    FUN6(&VAR11, VAR12);
    switch (VAR6->VAR17)
    {
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR18:
        if ((VAR13 = FUN7(VAR2, VAR4, &VAR11, VAR6, VAR6->VAR23)) < 0)
            return VAR13;
        break;
    case VAR24:
        if ((VAR13 = FUN8(VAR2, VAR4, &VAR11, VAR6, VAR6->VAR23)) < 0)
            return VAR13;
        break;
    default:
        FUN9(VAR4, "", VAR6->VAR25 == 1 ? "" : "", VAR6->VAR17);
        return FUN10(VAR26);
    }
    FUN2(VAR4, "", VAR6->VAR17, VAR6->VAR23, VAR6->VAR15, VAR6->VAR27, VAR6->VAR25, VAR6->VAR28);
    return FUN11(&VAR11);
}