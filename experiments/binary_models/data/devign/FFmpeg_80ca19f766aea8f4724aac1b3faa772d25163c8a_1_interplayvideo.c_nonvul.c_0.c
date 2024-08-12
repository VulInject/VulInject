static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    FUN2(VAR2->VAR5, VAR2->VAR6, 16);
    for (VAR4 = 0; VAR4 < 8; VAR4 += 2)
    {
        for (VAR3 = 0; VAR3 < 8; VAR3 += 2)
        {
            VAR2->VAR7[VAR3] = VAR2->VAR7[VAR3 + 1] = VAR2->VAR7[VAR3 + VAR2->VAR8] = VAR2->VAR7[VAR3 + 1 + VAR2->VAR8] = *VAR2->VAR5++;
        }
        VAR2->VAR7 += VAR2->VAR8 * 2;
    }
    return 0;
}