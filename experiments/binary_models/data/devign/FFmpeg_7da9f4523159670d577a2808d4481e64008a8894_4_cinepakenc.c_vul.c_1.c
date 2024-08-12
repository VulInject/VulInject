static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10 = 0;
    for (VAR7 = 0; VAR7 < VAR11; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR11; VAR6++)
        {
            VAR9 = VAR4->VAR12[0][VAR6 + VAR7 * VAR4->VAR13[0]] - VAR5->VAR12[0][VAR6 + VAR7 * VAR5->VAR13[0]];
            VAR10 += VAR9 * VAR9;
        }
    }
    if (VAR2->VAR14 == VAR15)
    {
        for (VAR8 = 1; VAR8 <= 2; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR11 / 2; VAR7++)
            {
                for (VAR6 = 0; VAR6 < VAR11 / 2; VAR6++)
                {
                    VAR9 = VAR4->VAR12[VAR8][VAR6 + VAR7 * VAR4->VAR13[VAR8]] - VAR5->VAR12[VAR8][VAR6 + VAR7 * VAR5->VAR13[VAR8]];
                    VAR10 += VAR9 * VAR9;
                }
            }
        }
    }
    return VAR10;
}