void FUN1(VAR1 *VAR2, double VAR3, unsigned short VAR4)
{
    int VAR5, VAR6, VAR7;
    double(*VAR8)[VAR9] = (void *)&VAR2->VAR10[1][0];
    double(*VAR11)[VAR9] = (void *)&VAR2->VAR10[1][1];
    double *VAR12 = VAR2->VAR10[0];
    int VAR13 = VAR2->VAR14;
    for (VAR5 = 0; VAR5 < VAR13; VAR5++)
    {
        for (VAR6 = VAR5; VAR6 < VAR13; VAR6++)
        {
            double VAR15 = VAR11[VAR5][VAR6];
            for (VAR7 = 0; VAR7 <= VAR5 - 1; VAR7++)
                VAR15 -= VAR8[VAR5][VAR7] * VAR8[VAR6][VAR7];
            if (VAR5 == VAR6)
            {
                if (VAR15 < VAR3)
                    VAR15 = 1.0;
                VAR8[VAR5][VAR5] = FUN2(VAR15);
            }
            else
            {
                VAR8[VAR6][VAR5] = VAR15 / VAR8[VAR5][VAR5];
            }
        }
    }
    for (VAR5 = 0; VAR5 < VAR13; VAR5++)
    {
        double VAR15 = VAR12[VAR5 + 1];
        for (VAR7 = 0; VAR7 <= VAR5 - 1; VAR7++)
            VAR15 -= VAR8[VAR5][VAR7] * VAR2->VAR16[0][VAR7];
        VAR2->VAR16[0][VAR5] = VAR15 / VAR8[VAR5][VAR5];
    }
    for (VAR6 = VAR13 - 1; VAR6 >= VAR4; VAR6--)
    {
        for (VAR5 = VAR6; VAR5 >= 0; VAR5--)
        {
            double VAR15 = VAR2->VAR16[0][VAR5];
            for (VAR7 = VAR5 + 1; VAR7 <= VAR6; VAR7++)
                VAR15 -= VAR8[VAR7][VAR5] * VAR2->VAR16[VAR6][VAR7];
            VAR2->VAR16[VAR6][VAR5] = VAR15 / VAR8[VAR5][VAR5];
        }
        VAR2->VAR17[VAR6] = VAR12[0];
        for (VAR5 = 0; VAR5 <= VAR6; VAR5++)
        {
            double VAR15 = VAR2->VAR16[VAR6][VAR5] * VAR11[VAR5][VAR5] - 2 * VAR12[VAR5 + 1];
            for (VAR7 = 0; VAR7 < VAR5; VAR7++)
                VAR15 += 2 * VAR2->VAR16[VAR6][VAR7] * VAR11[VAR7][VAR5];
            VAR2->VAR17[VAR6] += VAR2->VAR16[VAR6][VAR5] * VAR15;
        }
    }
}