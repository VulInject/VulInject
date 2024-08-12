static void FUN1(VAR1 *VAR2, const float *VAR3, long VAR4, int VAR5)
{
    int VAR6, VAR7;
    vector signed short VAR8, VAR9;
    for (VAR6 = 0; VAR6 < VAR4 - 7; VAR6 += 8)
    {
        VAR8 = FUN2(VAR3 + VAR6);
        FUN3(VAR2, VAR8, 0, VAR5);
        FUN3(VAR2, VAR8, 1, VAR5);
        FUN3(VAR2, VAR8, 2, VAR5);
        FUN3(VAR2, VAR8, 3, VAR5);
        FUN3(VAR2, VAR8, 4, VAR5);
        FUN3(VAR2, VAR8, 5, VAR5);
        FUN3(VAR2, VAR8, 6, VAR5);
        FUN3(VAR2, VAR8, 7, VAR5);
    }
}