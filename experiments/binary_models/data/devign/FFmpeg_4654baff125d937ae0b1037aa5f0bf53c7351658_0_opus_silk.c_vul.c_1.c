static inline void FUN1(int16_t VAR1[16], int VAR2, const uint16_t VAR3[17])
{
    int VAR4, VAR5;
    for (VAR4 = 0; VAR4 < 20; VAR4++)
    {
        int VAR6, VAR7 = 0;
        for (VAR5 = 0; VAR5 < VAR2 + 1; VAR5++)
        {
            int VAR8 = VAR5 != 0 ? VAR1[VAR5 - 1] : 0;
            int VAR9 = VAR5 != VAR2 ? VAR1[VAR5] : 32768;
            int VAR10 = (VAR9 - VAR8) - (VAR3[VAR5]);
            if (VAR10 < VAR7)
            {
                VAR7 = VAR10;
                VAR6 = VAR5;
                if (VAR4 == 20)
                    break;
            }
        }
        if (VAR7 == 0)
            return;
        if (VAR6 == 0)
        {
            VAR1[0] = VAR3[0];
        }
        else if (VAR6 == VAR2)
        {
            VAR1[VAR2 - 1] = 32768 - VAR3[VAR2];
        }
        else
        {
            int VAR11 = 0, VAR12 = 32768, VAR13;
            for (VAR5 = 0; VAR5 < VAR6; VAR5++)
                VAR11 += VAR3[VAR5];
            VAR11 += VAR3[VAR6] >> 1;
            for (VAR5 = VAR2; VAR5 > VAR6; VAR5--)
                VAR12 -= VAR3[VAR5];
            VAR12 -= VAR3[VAR6] >> 1;
            VAR13 = VAR1[VAR6 - 1] + VAR1[VAR6];
            VAR13 = (VAR13 >> 1) + (VAR13 & 1);
            VAR13 = FUN2(VAR12, FUN3(VAR11, VAR13));
            VAR1[VAR6 - 1] = VAR13 - (VAR3[VAR6] >> 1);
            VAR1[VAR6] = VAR1[VAR6 - 1] + VAR3[VAR6];
        }
    }
    for (VAR5 = 1; VAR5 < VAR2; VAR5++)
    {
        int VAR14, VAR15 = VAR1[VAR5];
        for (VAR14 = VAR5 - 1; VAR14 >= 0 && VAR1[VAR14] > VAR15; VAR14--)
            VAR1[VAR14 + 1] = VAR1[VAR14];
        VAR1[VAR14 + 1] = VAR15;
    }
    if (VAR1[0] < VAR3[0])
        VAR1[0] = VAR3[0];
    for (VAR5 = 1; VAR5 < VAR2; VAR5++)
        if (VAR1[VAR5] < VAR1[VAR5 - 1] + VAR3[VAR5])
            VAR1[VAR5] = VAR1[VAR5 - 1] + VAR3[VAR5];
    if (VAR1[VAR2 - 1] > 32768 - VAR3[VAR2])
        VAR1[VAR2 - 1] = 32768 - VAR3[VAR2];
    for (VAR5 = VAR2 - 2; VAR5 >= 0; VAR5--)
        if (VAR1[VAR5] > VAR1[VAR5 + 1] - VAR3[VAR5 + 1])
            VAR1[VAR5] = VAR1[VAR5 + 1] - VAR3[VAR5 + 1];
    return;
}