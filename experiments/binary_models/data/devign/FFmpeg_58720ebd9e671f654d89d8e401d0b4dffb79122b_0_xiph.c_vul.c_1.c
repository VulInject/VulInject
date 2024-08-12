int FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR1 *VAR5[3], int VAR6[3])
{
    int VAR7, VAR8;
    if (FUN2(VAR2) == VAR4)
    {
        for (VAR7 = 0; VAR7 < 3; VAR7++)
        {
            VAR6[VAR7] = FUN2(VAR2);
            VAR2 += 2;
            VAR5[VAR7] = VAR2;
            VAR2 += VAR6[VAR7];
        }
    }
    else if (VAR2[0] == 2)
    {
        for (VAR7 = 0, VAR8 = 1; VAR7 < 2; VAR7++, VAR8++)
        {
            VAR6[VAR7] = 0;
            for (; VAR8 < VAR3 && VAR2[VAR8] == 0xff; VAR8++)
            {
                VAR6[VAR7] += 0xff;
            }
            if (VAR8 >= VAR3)
                return -1;
            VAR6[VAR7] += VAR2[VAR8];
        }
        VAR6[2] = VAR3 - VAR6[0] - VAR6[1] - VAR8;
        VAR2 += VAR8;
        VAR5[0] = VAR2;
        VAR5[1] = VAR5[0] + VAR6[0];
        VAR5[2] = VAR5[1] + VAR6[1];
    }
    else
    {
        return -1;
    }
    return 0;
}