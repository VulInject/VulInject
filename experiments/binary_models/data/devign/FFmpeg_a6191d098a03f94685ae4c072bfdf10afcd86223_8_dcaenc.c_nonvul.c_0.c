static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    for (VAR5 = 0; VAR5 < VAR2->VAR6; VAR5++)
        for (VAR4 = 0; VAR4 < 32; VAR4++)
            for (VAR3 = 0; VAR3 < VAR7; VAR3++)
                VAR2->VAR8[VAR5][VAR4][VAR3] = FUN2(VAR2->VAR9[VAR5][VAR4][VAR3], VAR2->VAR10[VAR5][VAR4]);
}