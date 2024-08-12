static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    if (VAR4 < 2)
        return;
    if (VAR3 == 1)
    {
        unsigned VAR6 = *VAR2++;
        for (VAR5 = 0; VAR5 < VAR4 - 1 >> 1; VAR5++)
        {
            *VAR2 += VAR6;
            VAR2[1] += *VAR2;
            VAR6 = VAR2[1];
            VAR2 += 2;
        }
        if (VAR4 - 1 & 1)
            *VAR2 += VAR6;
    }
    else if (VAR3 == 2)
    {
        unsigned VAR6 = VAR2[1];
        unsigned VAR7 = VAR6 + *VAR2;
        VAR2[1] = VAR7;
        if (VAR4 > 2)
        {
            VAR2 += 2;
            for (VAR5 = 0; VAR5 < VAR4 - 2 >> 1; VAR5++)
            {
                unsigned VAR8 = *VAR2 + VAR6;
                unsigned VAR9 = VAR8 + VAR7;
                *VAR2 = VAR9;
                VAR6 = VAR2[1] + VAR8;
                VAR7 = VAR6 + VAR9;
                VAR2[1] = VAR7;
                VAR2 += 2;
            }
            if (VAR4 & 1)
                *VAR2 += VAR6 + VAR7;
        }
    }
    else if (VAR3 == 3)
    {
        unsigned VAR6 = VAR2[1];
        unsigned VAR7 = VAR6 + *VAR2;
        VAR2[1] = VAR7;
        if (VAR4 > 2)
        {
            unsigned VAR8 = VAR2[2];
            unsigned VAR9 = VAR8 + VAR6;
            unsigned VAR10 = VAR9 + VAR7;
            VAR2[2] = VAR10;
            VAR2 += 3;
            for (VAR5 = 0; VAR5 < VAR4 - 3; VAR5++)
            {
                VAR8 += *VAR2;
                VAR9 += VAR8;
                VAR10 += VAR9;
                *VAR2 = VAR10;
                VAR2++;
            }
        }
    }
}