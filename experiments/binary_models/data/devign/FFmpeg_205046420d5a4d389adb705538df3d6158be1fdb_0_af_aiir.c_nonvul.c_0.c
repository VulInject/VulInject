static int FUN1(VAR1 *VAR2, double *VAR3, int VAR4, double *VAR5)
{
    int VAR6;
    VAR5[0] = 1.0;
    VAR5[1] = 0.0;
    for (VAR6 = 0; VAR6 < VAR4; VAR6++)
    {
        VAR5[2 * (VAR6 + 1)] = 0.0;
        VAR5[2 * (VAR6 + 1) + 1] = 0.0;
    }
    for (VAR6 = 0; VAR6 < VAR4; VAR6++)
        FUN2(VAR3[2 * VAR6], VAR3[2 * VAR6 + 1], VAR4, VAR5);
    for (VAR6 = 0; VAR6 < VAR4 + 1; VAR6++)
    {
        if (FUN3(VAR5[2 * VAR6 + 1]) > VAR7)
        {
            FUN4(VAR2, VAR8, "", VAR5[2 * VAR6 + 1], VAR6);
            return FUN5(VAR9);
        }
    }
    return 0;
}