static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8[0];
    int VAR9, VAR10 = 0;
    int VAR11;
    for (VAR9 = 1; VAR2->VAR8[VAR9]; VAR9++)
        if (VAR2->VAR8[VAR9]->VAR12->VAR13 < VAR7->VAR12->VAR13)
        {
            VAR7 = VAR2->VAR8[VAR9];
            VAR10 = VAR9;
        }
    for (VAR9 = VAR10; VAR2->VAR8[VAR9]; VAR9++)
        VAR2->VAR8[VAR9] = VAR2->VAR8[VAR9 + 1];
    if (VAR7)
    {
        VAR7->VAR14 ^= VAR15;
        *VAR5 = 1;
        if ((VAR11 = FUN2(VAR4, VAR7->VAR12)) < 0)
            return VAR11;
    }
    return 0;
}