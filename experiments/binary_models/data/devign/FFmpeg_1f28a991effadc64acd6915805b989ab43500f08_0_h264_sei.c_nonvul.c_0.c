static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, int VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11;
    if (VAR6 < 16 || VAR6 >= VAR12 - 16)
        return VAR13;
    VAR8 = FUN2(16 + VAR6 + 1);
    if (!VAR8)
        return FUN3(VAR14);
    for (VAR11 = 0; VAR11 < VAR6 + 16; VAR11++)
        VAR8[VAR11] = FUN4(VAR4, 8);
    VAR8[VAR11] = 0;
    VAR9 = sscanf(VAR8 + 16, "", &VAR10);
    if (VAR9 == 1 && VAR10 > 0)
        VAR2->VAR15 = VAR10;
    if (VAR9 == 1 && VAR10 == 1 && !FUN5(VAR8 + 16, "", 16))
        VAR2->VAR15 = 67;
    FUN6(VAR8);
    return 0;
}