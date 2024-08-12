static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5, VAR6;
    int VAR7, VAR8;
    VAR5 = FUN2(VAR2->VAR9[1], VAR2->VAR9[2]);
    VAR4 = VAR10[0];
    for (VAR3 = 0; VAR3 < VAR2->VAR11; VAR3++)
    {
        if (VAR2->VAR12[VAR3])
        {
            VAR6 = FUN2(VAR5, VAR10[VAR3 + 1]);
            for (; VAR4 < VAR6; VAR4++)
            {
                VAR7 = VAR2->VAR13[1][VAR4];
                VAR8 = VAR2->VAR13[2][VAR4];
                VAR2->VAR13[1][VAR4] = VAR7 + VAR8;
                VAR2->VAR13[2][VAR4] = VAR7 - VAR8;
            }
        }
    }
}