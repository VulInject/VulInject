static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0;
    if (VAR2->VAR5 > 4 || VAR2->VAR6 != VAR7)
        VAR4 = 1;
    FUN2(&VAR2->VAR8, 1, VAR4);
    if (VAR4)
    {
        FUN3(VAR2);
        FUN4(&VAR2->VAR8, VAR2->VAR9[0][0]);
        for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
        {
            FUN4(&VAR2->VAR8, VAR2->VAR9[VAR3][1]);
            FUN4(&VAR2->VAR8, VAR2->VAR9[VAR3][2]);
            FUN4(&VAR2->VAR8, VAR2->VAR9[VAR3][3]);
        }
    }
    else
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
        {
            VAR2->VAR9[VAR3][0] = VAR10[VAR2->VAR11][VAR3][0];
            VAR2->VAR9[VAR3][1] = VAR10[VAR2->VAR11][VAR3][1];
            VAR2->VAR9[VAR3][2] = VAR10[VAR2->VAR11][VAR3][2];
            VAR2->VAR9[VAR3][3] = VAR10[VAR2->VAR11][VAR3][3];
        }
    }
}