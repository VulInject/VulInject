static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7 = (VAR5[0] + 15) >> 5;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        VAR2[0] = FUN2(VAR2[0] + VAR7);
        VAR2[1] = FUN2(VAR2[1] + VAR7);
        VAR2[2] = FUN2(VAR2[2] + VAR7);
        VAR2[3] = FUN2(VAR2[3] + VAR7);
        VAR2[4] = FUN2(VAR2[4] + VAR7);
        VAR2[5] = FUN2(VAR2[5] + VAR7);
        VAR2[6] = FUN2(VAR2[6] + VAR7);
        VAR2[7] = FUN2(VAR2[7] + VAR7);
        VAR2 += VAR3;
    }
    VAR5[0] = 0;
}