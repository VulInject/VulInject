static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    GetBitContext VAR14;
    int VAR15;
    int VAR16;
    int VAR17;
    int VAR18;
    const VAR10 *VAR19 = FUN2(VAR6, VAR20, &VAR18);
    if (VAR19)
    {
        FUN3(VAR2->VAR21);
        VAR2->VAR21 = FUN4(VAR18 + VAR22);
        if (!VAR2->VAR21)
            return FUN5(VAR23);
        VAR2->VAR24 = VAR18;
        memcpy(VAR2->VAR21, VAR19, VAR18);
        FUN6(VAR8);
        if (FUN7(VAR8, VAR8->VAR2, &VAR8->VAR25[1].VAR26, VAR2->VAR21, VAR2->VAR24 * 8, 1) < 0)
        {
            FUN8(VAR8);
            return VAR27;
        }
    }
    if ((VAR17 = FUN9(&VAR14, VAR11, VAR12 * 8)) < 0)
        return VAR17;
    if ((VAR17 = FUN10(VAR2, VAR3, VAR4, &VAR14)) < 0)
        return VAR17;
    VAR15 = (FUN11(&VAR14) + 7) >> 3;
    for (VAR16 = VAR15; VAR16 < VAR12; VAR16++)
        if (VAR11[VAR16])
            break;
    return VAR12 > VAR16 ? VAR15 : VAR12;
}