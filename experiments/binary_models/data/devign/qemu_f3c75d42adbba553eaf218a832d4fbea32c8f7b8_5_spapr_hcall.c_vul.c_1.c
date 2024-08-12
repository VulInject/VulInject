static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    VAR8 *VAR9 = &VAR3->VAR9;
    target_ulong VAR10 = VAR7[0];
    target_ulong VAR11 = VAR7[1];
    VAR12 *VAR13;
    int VAR14, VAR15, VAR16 = 1;
    if ((VAR11 * VAR17) & ~VAR9->VAR18)
    {
        return VAR19;
    }
    if (VAR10 & VAR20)
    {
        VAR11 &= ~(3ULL);
        VAR16 = 4;
    }
    VAR13 = VAR9->VAR21 + (VAR11 * VAR17);
    for (VAR14 = 0, VAR15 = 0; VAR14 < VAR16; VAR14++)
    {
        VAR7[VAR15++] = FUN2(VAR13);
        VAR7[VAR15++] = FUN2(VAR13 + (VAR17 / 2));
        VAR13 += VAR17;
    }
    return VAR22;
}