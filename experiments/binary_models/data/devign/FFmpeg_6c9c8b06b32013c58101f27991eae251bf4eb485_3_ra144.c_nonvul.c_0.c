static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8[10];
    int VAR9 = VAR5 + 1;
    int VAR10 = VAR11 - VAR9;
    int VAR12;
    for (VAR12 = 0; VAR12 < 30; VAR12++)
        VAR4[VAR12] = (VAR9 * VAR2->VAR13[0][VAR12] + VAR10 * VAR2->VAR13[1][VAR12]) >> 2;
    if (FUN2(VAR8, VAR4, VAR2))
    {
        FUN3(VAR4, VAR2->VAR13[VAR6]);
        return FUN4(VAR2->VAR14[VAR6], VAR7);
    }
    else
    {
        return FUN4(FUN5(VAR8), VAR7);
    }
}