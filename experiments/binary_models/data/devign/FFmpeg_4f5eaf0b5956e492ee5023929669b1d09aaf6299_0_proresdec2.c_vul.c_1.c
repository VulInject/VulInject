static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const VAR8 *VAR9, unsigned VAR10, const VAR11 *VAR12)
{
    VAR13 *VAR14 = VAR2->VAR15;
    FUN2(VAR11, VAR16, [8 * 4 * 64]);
    VAR11 *VAR17;
    GetBitContext VAR18;
    int VAR19, VAR20 = VAR4->VAR21 << 2;
    int VAR22;
    for (VAR19 = 0; VAR19 < VAR20; VAR19++)
        VAR14->VAR23.FUN3(VAR16 + (VAR19 << 6));
    FUN4(&VAR18, VAR9, VAR10 << 3);
    FUN5(&VAR18, VAR16, VAR20);
    if ((VAR22 = FUN6(VAR2, &VAR18, VAR16, VAR20)) < 0)
        return VAR22;
    VAR17 = VAR16;
    for (VAR19 = 0; VAR19 < VAR4->VAR21; VAR19++)
    {
        VAR14->VAR24.FUN7(VAR6, VAR7, VAR17 + (0 << 6), VAR12);
        VAR14->VAR24.FUN7(VAR6 + 8, VAR7, VAR17 + (1 << 6), VAR12);
        VAR14->VAR24.FUN7(VAR6 + 4 * VAR7, VAR7, VAR17 + (2 << 6), VAR12);
        VAR14->VAR24.FUN7(VAR6 + 4 * VAR7 + 8, VAR7, VAR17 + (3 << 6), VAR12);
        VAR17 += 4 * 64;
        VAR6 += 16;
    }
    return 0;
}