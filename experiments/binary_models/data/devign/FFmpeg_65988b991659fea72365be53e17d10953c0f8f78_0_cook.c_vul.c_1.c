static void FUN1(VAR1 *VAR2, int *VAR3)
{
    int VAR4, VAR5;
    while (FUN2(VAR2))
    {
    }
    VAR5 = FUN3(VAR2) - 1;
    VAR4 = 0;
    while (VAR5--)
    {
        int VAR6 = FUN4(VAR2, 3);
        int VAR7 = FUN2(VAR2) ? FUN4(VAR2, 4) - 7 : -1;
        while (VAR4 <= VAR6)
            VAR3[VAR4++] = VAR7;
    }
    while (VAR4 <= 8)
        VAR3[VAR4++] = 0;
}