static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11 = VAR2->VAR12 == VAR13 ? 6 : 4;
    for (VAR8 = VAR10 = 0; VAR10 < 4; VAR10 += 2)
    {
        for (VAR9 = 0; VAR9 < 4; VAR9 += 2, VAR8++)
        {
            VAR4->VAR14[0][VAR9 + VAR10 * VAR4->VAR15[0]] = VAR7->VAR16[VAR5[VAR8] * VAR11];
            VAR4->VAR14[0][VAR9 + 1 + VAR10 * VAR4->VAR15[0]] = VAR7->VAR16[VAR5[VAR8] * VAR11 + 1];
            VAR4->VAR14[0][VAR9 + (VAR10 + 1) * VAR4->VAR15[0]] = VAR7->VAR16[VAR5[VAR8] * VAR11 + 2];
            VAR4->VAR14[0][VAR9 + 1 + (VAR10 + 1) * VAR4->VAR15[0]] = VAR7->VAR16[VAR5[VAR8] * VAR11 + 3];
            if (VAR2->VAR12 == VAR13)
            {
                VAR4->VAR14[1][(VAR9 >> 1) + (VAR10 >> 1) * VAR4->VAR15[1]] = VAR7->VAR16[VAR5[VAR8] * VAR11 + 4];
                VAR4->VAR14[2][(VAR9 >> 1) + (VAR10 >> 1) * VAR4->VAR15[2]] = VAR7->VAR16[VAR5[VAR8] * VAR11 + 5];
            }
        }
    }
}