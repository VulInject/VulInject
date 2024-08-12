static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int32_t VAR6, VAR7, VAR8;
    uint32_t VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15;
    VAR6 = FUN2(VAR2);
    VAR7 = FUN2(VAR2);
    VAR8 = FUN2(VAR2);
    FUN3(VAR2, 4);
    VAR9 = FUN2(VAR2);
    if (VAR7 < 0 || VAR7 >= VAR16 || VAR8 < 0 || VAR8 >= VAR16 || VAR6 < 0)
        return VAR17;
    FUN3(VAR2, 4);
    VAR11 = FUN4(VAR16, sizeof(*VAR11));
    VAR13 = FUN4(VAR18, sizeof(*VAR13));
    if (!VAR11 || !VAR13)
    {
        VAR14 = FUN5(VAR19);
        goto VAR20;
    }
    if ((VAR14 = FUN6(VAR2, VAR7, VAR8, VAR11)) < 0)
        goto VAR20;
    if (VAR9 > 8 * FUN7(VAR2))
    {
        VAR14 = VAR17;
        goto VAR20;
    }
    if ((VAR14 = FUN8(VAR11, VAR7, VAR8, VAR13)) < 0)
        goto VAR20;
    VAR14 = FUN9(VAR11, VAR13, VAR2, VAR9, VAR8, VAR5, VAR4);
VAR20:
    for (VAR15 = 0; VAR15 < VAR18; VAR15++)
    {
        if (VAR13[VAR15].VAR21)
            FUN10(&VAR13[VAR15].VAR21);
    }
    FUN11(VAR11);
    FUN11(VAR13);
    return VAR14;
}