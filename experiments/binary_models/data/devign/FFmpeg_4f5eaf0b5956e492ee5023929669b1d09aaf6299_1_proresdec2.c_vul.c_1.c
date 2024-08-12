static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const VAR8 *VAR9, unsigned VAR10, const VAR11 *VAR12, int VAR13)
{
    VAR14 *VAR15 = VAR2->VAR16;
    FUN2(VAR11, VAR17, [8 * 4 * 64]);
    VAR11 *VAR18;
    GetBitContext VAR19;
    int VAR20, VAR21, VAR22 = VAR4->VAR23 << VAR13;
    int VAR24;
    for (VAR20 = 0; VAR20 < VAR22; VAR20++)
        VAR15->VAR25.FUN3(VAR17 + (VAR20 << 6));
    FUN4(&VAR19, VAR9, VAR10 << 3);
    FUN5(&VAR19, VAR17, VAR22);
    if ((VAR24 = FUN6(VAR2, &VAR19, VAR17, VAR22)) < 0)
        return VAR24;
    VAR18 = VAR17;
    for (VAR20 = 0; VAR20 < VAR4->VAR23; VAR20++)
    {
        for (VAR21 = 0; VAR21 < VAR13; VAR21++)
        {
            VAR15->VAR26.FUN7(VAR6, VAR7, VAR18 + (0 << 6), VAR12);
            VAR15->VAR26.FUN7(VAR6 + 4 * VAR7, VAR7, VAR18 + (1 << 6), VAR12);
            VAR18 += 2 * 64;
            VAR6 += 8;
        }
    }
    return 0;
}