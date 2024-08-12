static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    uint64_t VAR7[VAR8];
    int VAR9;
    int VAR10, VAR11;
    VAR9 = VAR3 & ~(VAR8 - 1);
    for (VAR10 = 0; VAR10 < VAR8; VAR10++)
    {
        VAR7[VAR10] = FUN2(VAR5->VAR12[VAR9 + VAR10]);
    }
    VAR11 = FUN3(VAR2, VAR13 & ~VAR14, VAR5->VAR15 + VAR9 * sizeof(VAR16), sizeof(VAR7));
    if (VAR11 < 0)
    {
        return VAR11;
    }
    FUN4(VAR2->VAR17, VAR18);
    VAR11 = FUN5(VAR2->VAR17, VAR5->VAR15 + VAR9 * sizeof(VAR16), VAR7, sizeof(VAR7));
    if (VAR11 < 0)
    {
        return VAR11;
    }
    return 0;
}