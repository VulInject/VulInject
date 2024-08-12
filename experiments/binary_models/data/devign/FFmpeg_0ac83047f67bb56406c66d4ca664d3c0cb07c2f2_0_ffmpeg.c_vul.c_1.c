static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9, *VAR10;
    VAR1 *VAR11, *VAR12;
    int VAR13, VAR14;
    if (VAR7->VAR15 != VAR16)
    {
        FUN2(NULL, VAR17, "");
        return;
    }
    if (VAR7->VAR13 < 0 || VAR7->VAR13 + VAR7->VAR4 > VAR4 || VAR7->VAR14 < 0 || VAR7->VAR14 + VAR7->VAR5 > VAR5)
    {
        FUN2(NULL, VAR17, "");
        return;
    }
    VAR2 += VAR7->VAR14 * VAR3 + VAR7->VAR13 * 4;
    VAR11 = VAR7->VAR18.VAR19[0];
    VAR9 = (VAR8 *)VAR7->VAR18.VAR19[1];
    for (VAR14 = 0; VAR14 < VAR7->VAR5; VAR14++)
    {
        VAR10 = (VAR8 *)VAR2;
        VAR12 = VAR11;
        for (VAR13 = 0; VAR13 < VAR7->VAR4; VAR13++)
            *(VAR10++) = VAR9[*(VAR12++)];
        VAR2 += VAR3;
        VAR11 += VAR7->VAR18.VAR20[0];
    }
}