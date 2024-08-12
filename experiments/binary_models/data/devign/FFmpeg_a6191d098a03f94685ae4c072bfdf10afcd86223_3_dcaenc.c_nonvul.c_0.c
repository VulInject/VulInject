static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5, VAR6;
    for (VAR5 = 0; VAR5 < 512; VAR5++)
        for (VAR6 = 0; VAR6 < VAR2->VAR7; VAR6++)
        {
            const int VAR8 = VAR2->VAR9[VAR6];
            VAR2->VAR10[VAR6][VAR5] = VAR4[VAR5 * VAR2->VAR7 + VAR8];
        }
}