static void FUN1(VAR1 *VAR2, const float *VAR3, long VAR4, int VAR5)
{
    int VAR6, VAR7;
    vector signed short VAR8, VAR9;
    for (VAR6 = 0; VAR6 < VAR4 - 7; VAR6 += 8)
    {
        VAR8 = FUN2(VAR3 + VAR6);
        for (VAR7 = 0; VAR7 < 8; VAR7++)
        {
            VAR9 = FUN3(VAR8, VAR7);
            FUN4(VAR9, 0, VAR2);
            VAR2 += VAR5;
        }
    }
}