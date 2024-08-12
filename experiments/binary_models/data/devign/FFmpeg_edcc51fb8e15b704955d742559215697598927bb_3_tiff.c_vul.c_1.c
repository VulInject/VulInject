static int FUN1(int VAR1, const char *VAR2, const char *VAR3, VAR4 *VAR5)
{
    char *VAR6;
    int VAR7;
    VAR8 *VAR9;
    if (VAR1 >= VAR10 / sizeof(VAR8) || VAR1 <= 0)
        return VAR11;
    if (FUN2(&VAR5->VAR12) < VAR1 * sizeof(VAR8))
        return VAR11;
    VAR9 = FUN3(VAR1 * sizeof(VAR8));
    if (!VAR9)
        return FUN4(VAR13);
    for (VAR7 = 0; VAR7 < VAR1; VAR7++)
        VAR9[VAR7] = FUN5(&VAR5->VAR12, VAR5->VAR14);
    VAR6 = FUN6(VAR9, VAR1, VAR3);
    FUN7(&VAR9);
    if (!VAR6)
        return FUN4(VAR13);
    FUN8(FUN9(&VAR5->VAR15), VAR2, VAR6, VAR16);
    return 0;
}