static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    int VAR9[VAR5];
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        VAR9[VAR7] = FUN2(&VAR2->VAR10, VAR11);
    for (VAR7 = 0; VAR7 < VAR2->VAR12; VAR7++)
    {
        VAR6 = VAR2->VAR13;
        for (VAR8 = 0; VAR8 < VAR5; VAR8++)
            VAR6 += VAR9[VAR8] * VAR2->VAR14[VAR3][VAR7 - VAR8 - 1];
        VAR2->VAR14[VAR3][VAR7] = FUN2(&VAR2->VAR10, VAR4) + (VAR6 >> VAR11);
    }
}