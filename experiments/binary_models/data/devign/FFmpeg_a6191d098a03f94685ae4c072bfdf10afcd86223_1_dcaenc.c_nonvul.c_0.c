static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++)
        for (VAR3 = 0; VAR3 < 32; VAR3++)
            VAR2->VAR6[VAR4][VAR3] = FUN2(VAR2->VAR7[VAR4][VAR3], VAR2->VAR8[VAR4][VAR3], &VAR2->VAR9[VAR4][VAR3]);
    if (VAR2->VAR10)
        VAR2->VAR11 = FUN2(VAR2->VAR12, 11, &VAR2->VAR13);
}