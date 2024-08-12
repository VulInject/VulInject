static void FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR3 **VAR5, const VAR6 *VAR7)
{
    int VAR8 = VAR7->VAR8;
    const VAR9 *VAR10 = VAR7->VAR11;
    const VAR12 *VAR13 = VAR7->VAR14;
    const VAR3 *VAR15 = VAR7->VAR16;
    VAR3 *VAR17, *VAR18;
    const VAR3 *VAR19;
    int VAR20, VAR21, VAR22, VAR23;
    FUN2(VAR2, 9, VAR8, VAR10, 1, 1, VAR13, 4, 4);
    VAR17 = FUN3(VAR8 * sizeof(VAR3));
    VAR18 = FUN3(VAR8 * sizeof(VAR3));
    VAR19 = VAR15;
    VAR20 = 2;
    VAR23 = 1;
    while (VAR20 < VAR8)
    {
        VAR21 = *VAR19++;
        for (VAR22 = 0; VAR22 < VAR21; VAR22++)
        {
            VAR17[VAR20] = VAR22;
            VAR18[VAR20] = VAR23;
            VAR20++;
        }
        VAR23++;
    }
    *VAR4 = VAR17;
    *VAR5 = VAR18;
}