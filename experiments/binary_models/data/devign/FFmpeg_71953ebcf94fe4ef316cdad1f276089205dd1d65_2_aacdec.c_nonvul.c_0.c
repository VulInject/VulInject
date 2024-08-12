static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8, int VAR9, int VAR10)
{
    GetBitContext VAR11;
    int VAR12, VAR13;
    FUN2(VAR4, "", VAR4->VAR14);
    for (VAR12 = 0; VAR12 < VAR4->VAR14; VAR12++)
        FUN2(VAR4, "", VAR4->VAR15[VAR12]);
    FUN2(VAR4, "");
    if ((VAR13 = FUN3(&VAR11, VAR8, VAR9)) < 0)
        return VAR13;
    if ((VAR12 = FUN4(VAR6, VAR8, VAR9, VAR10)) < 0)
        return VAR16;
    if (VAR6->VAR17 > 12)
    {
        FUN5(VAR4, VAR18, "", VAR6->VAR17);
        return VAR16;
    }
    FUN6(&VAR11, VAR12);
    switch (VAR6->VAR19)
    {
    case VAR20:
    case VAR21:
    case VAR22:
        if ((VAR13 = FUN7(VAR2, VAR4, &VAR11, VAR6, VAR6->VAR23)) < 0)
            return VAR13;
        break;
    default:
        FUN5(VAR4, VAR18, "", VAR6->VAR24 == 1 ? "" : "", VAR6->VAR19);
        return FUN8(VAR25);
    }
    FUN2(VAR4, "", VAR6->VAR19, VAR6->VAR23, VAR6->VAR17, VAR6->VAR26, VAR6->VAR24, VAR6->VAR27);
    return FUN9(&VAR11);
}