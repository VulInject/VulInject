static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8[10];
    int VAR9 = VAR10 - VAR5;
    int VAR11;
    for (VAR11 = 0; VAR11 < 30; VAR11++)
        VAR4[VAR11] = (VAR5 * VAR2->VAR12[0][VAR11] + VAR9 * VAR2->VAR12[1][VAR11]) >> 2;
    if (FUN2(VAR8, VAR4, VAR2))
    {
        FUN3(VAR4, VAR2->VAR12[VAR6]);
        return FUN4(VAR2->VAR13[VAR6], VAR7);
    }
    else
    {
        return FUN4(FUN5(VAR8), VAR7);
    }
}