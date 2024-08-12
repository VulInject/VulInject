static void FUN1(VAR1 *VAR2, int VAR3, int VAR4[64])
{
    int VAR5, VAR6, VAR7;
    double VAR8[64];
    for (VAR5 = 0; VAR5 < 8; VAR5++)
    {
        for (VAR6 = 0; VAR6 < 8; VAR6++)
        {
            double VAR9 = 0.0;
            for (VAR7 = 0; VAR7 < 8; VAR7++)
                VAR9 += VAR10[VAR7 * 8 + VAR6] * VAR4[8 * VAR5 + VAR7];
            VAR8[8 * VAR5 + VAR6] = VAR9;
        }
    }
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        for (VAR5 = 0; VAR5 < 8; VAR5++)
        {
            double VAR9 = 0.0;
            for (VAR7 = 0; VAR7 < 8; VAR7++)
                VAR9 += VAR10[VAR7 * 8 + VAR5] * VAR8[8 * VAR7 + VAR6];
            VAR2[VAR3 * VAR5 + VAR6] = FUN2(FUN3(VAR9));
        }
    }
}