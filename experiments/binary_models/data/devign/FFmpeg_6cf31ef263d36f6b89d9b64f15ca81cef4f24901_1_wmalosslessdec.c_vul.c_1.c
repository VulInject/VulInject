static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6;
    VAR2->VAR7[VAR3] = 8;
    for (VAR4 = VAR2->VAR8[VAR3]; VAR4 >= 0; VAR4--)
    {
        VAR5 = VAR2->VAR9[VAR3][VAR4].VAR5;
        if (VAR2->VAR10)
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR9[VAR3][VAR4].VAR11; VAR6++)
                VAR2->VAR9[VAR3][VAR4].VAR12[VAR6 + VAR5] /= 2;
        }
        else
        {
            for (VAR6 = 0; VAR6 < VAR2->VAR9[VAR3][VAR4].VAR11; VAR6++)
                VAR2->VAR9[VAR3][VAR4].VAR12[VAR6] /= 2;
        }
    }
}