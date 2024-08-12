static void FUN1(VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < 64; VAR5++)
    {
        VAR2[VAR5] = FUN2((VAR3[VAR5] - VAR4[63 - VAR5]), 5);
        VAR2[127 - VAR5] = FUN2((VAR3[VAR5] + VAR4[63 - VAR5]), 5);
    }
}