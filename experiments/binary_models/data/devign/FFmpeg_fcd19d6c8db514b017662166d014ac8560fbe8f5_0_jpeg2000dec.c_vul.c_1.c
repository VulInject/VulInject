static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    for (VAR3 = 0; VAR3 < VAR2->VAR5 * VAR2->VAR6; VAR3++)
    {
        if (VAR2->VAR7[VAR3].VAR8)
        {
            for (VAR4 = 0; VAR4 < VAR2->VAR9; VAR4++)
            {
                VAR10 *VAR8 = VAR2->VAR7[VAR3].VAR8 + VAR4;
                VAR11 *VAR12 = VAR2->VAR7[VAR3].VAR12 + VAR4;
                FUN2(VAR8, VAR12);
            }
            FUN3(&VAR2->VAR7[VAR3].VAR8);
        }
    }
    FUN3(&VAR2->VAR7);
    VAR2->VAR5 = VAR2->VAR6 = 0;