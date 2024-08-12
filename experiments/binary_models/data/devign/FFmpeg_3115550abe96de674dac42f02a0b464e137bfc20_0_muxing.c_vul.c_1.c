static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9;
    VAR9 = FUN2(VAR2);
    if (VAR9 < 0)
        FUN3(1);
    VAR8 = VAR3;
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
        for (VAR6 = 0; VAR6 < VAR4; VAR6++)
            VAR2->VAR10[0][VAR7 * VAR2->VAR11[0] + VAR6] = VAR6 + VAR7 + VAR8 * 3;
    for (VAR7 = 0; VAR7 < VAR5 / 2; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR4 / 2; VAR6++)
        {
            VAR2->VAR10[1][VAR7 * VAR2->VAR11[1] + VAR6] = 128 + VAR7 + VAR8 * 2;
            VAR2->VAR10[2][VAR7 * VAR2->VAR11[2] + VAR6] = 64 + VAR6 + VAR8 * 5;
        }
    }
}