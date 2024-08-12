static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    if (!VAR2->VAR6)
        VAR2->VAR7.FUN2(VAR2->VAR8[0], VAR2->VAR9, VAR3);
    VAR2->VAR7.FUN2(VAR2->VAR8[0] + 8 * VAR2->VAR9, VAR2->VAR9, VAR3);
    for (VAR4 = !VAR2->VAR10 * 8; VAR4 < 16; VAR4 += 8)
        VAR2->VAR7.FUN3(VAR2->VAR8[0] + VAR4, VAR2->VAR9, VAR3);
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        if (!VAR2->VAR6)
            VAR2->VAR7.FUN4(VAR2->VAR8[VAR5 + 1], VAR2->VAR11, VAR3);
        if (VAR2->VAR10)
            VAR2->VAR7.FUN5(VAR2->VAR8[VAR5 + 1], VAR2->VAR11, VAR3);
    }
}