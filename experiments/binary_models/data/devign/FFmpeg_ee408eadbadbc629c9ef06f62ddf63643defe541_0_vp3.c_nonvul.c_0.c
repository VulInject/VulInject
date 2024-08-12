static void FUN1(unsigned char *VAR1, int VAR2, int *VAR3)
{
    int VAR4;
    int VAR5;
    for (VAR4 = 0; VAR4 < 8; VAR4++, VAR1++)
    {
        VAR5 = (VAR1[-(2 * VAR2)] * 1) - (VAR1[-(1 * VAR2)] * 3) + (VAR1[(0)] * 3) - (VAR1[(1 * VAR2)] * 1);
        VAR5 = VAR3[(VAR5 + 4) >> 3];
        VAR1[-(1 * VAR2)] = FUN2(VAR1[-(1 * VAR2)] + VAR5);
        VAR1[0] = FUN2(VAR1[0] - VAR5);
    }
}