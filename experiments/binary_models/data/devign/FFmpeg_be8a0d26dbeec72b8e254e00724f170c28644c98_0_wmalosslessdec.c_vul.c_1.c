static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR2->VAR5 = VAR2->VAR6 * VAR2->VAR7;
    for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR8[VAR3]; VAR4++)
            VAR2->VAR9[VAR3][VAR4].VAR10 = VAR2->VAR9[VAR3][VAR4].VAR11;
        VAR2->VAR12[VAR3].VAR13 = VAR2->VAR14;
        VAR2->VAR15[VAR3] = 1;
    }
}