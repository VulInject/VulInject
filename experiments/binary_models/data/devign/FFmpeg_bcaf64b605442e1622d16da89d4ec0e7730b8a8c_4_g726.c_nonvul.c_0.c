static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR11 *VAR12 = (const VAR11 *)VAR6->VAR13[0];
    PutBitContext VAR14;
    int VAR15, VAR16, VAR17;
    VAR17 = (VAR6->VAR18 * VAR9->VAR19 + 7) / 8;
    if ((VAR16 = FUN2(VAR2, VAR4, VAR17)) < 0)
        return VAR16;
    FUN3(&VAR14, VAR4->VAR13, VAR4->VAR20);
    for (VAR15 = 0; VAR15 < VAR6->VAR18; VAR15++)
        FUN4(&VAR14, VAR9->VAR19, FUN5(VAR9, *VAR12++));
    FUN6(&VAR14);
    VAR4->VAR20 = VAR17;
    *VAR7 = 1;
    return 0;
}