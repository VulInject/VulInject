int FUN1(VAR1 *VAR2, double *VAR3, double *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    const int VAR9 = VAR2->VAR9;
    double VAR10[VAR9];
    memset(VAR3, 0, sizeof(double) * VAR9 * VAR9);
    for (VAR6 = 0; VAR6 < VAR9; VAR6++)
    {
        VAR2->VAR11[VAR6] /= VAR2->VAR12;
        VAR3[VAR6 + VAR6 * VAR9] = 1.0;
        for (VAR5 = 0; VAR5 <= VAR6; VAR5++)
        {
            VAR2->VAR13[VAR6 + VAR5 * VAR9] /= VAR2->VAR12;
            VAR2->VAR13[VAR6 + VAR5 * VAR9] -= VAR2->VAR11[VAR5] * VAR2->VAR11[VAR6];
            VAR2->VAR13[VAR5 + VAR6 * VAR9] = VAR2->VAR13[VAR6 + VAR5 * VAR9];
        }
        VAR4[VAR6] = VAR2->VAR13[VAR6 + VAR6 * VAR9];
        VAR10[VAR6] = 0;
    }
    for (VAR8 = 0; VAR8 < 50; VAR8++)
    {
        double VAR14 = 0;
        for (VAR5 = 0; VAR5 < VAR9; VAR5++)
            for (VAR6 = VAR5 + 1; VAR6 < VAR9; VAR6++)
                VAR14 += FUN2(VAR2->VAR13[VAR6 + VAR5 * VAR9]);
        if (VAR14 == 0)
        {
            for (VAR5 = 0; VAR5 < VAR9; VAR5++)
            {
                double VAR15 = -1;
                for (VAR6 = VAR5; VAR6 < VAR9; VAR6++)
                {
                    if (VAR4[VAR6] > VAR15)
                    {
                        VAR15 = VAR4[VAR6];
                        VAR7 = VAR6;
                    }
                }
                VAR4[VAR7] = VAR4[VAR5];
                VAR4[VAR5] = VAR15;
                for (VAR6 = 0; VAR6 < VAR9; VAR6++)
                {
                    double VAR16 = VAR3[VAR7 + VAR6 * VAR9];
                    VAR3[VAR7 + VAR6 * VAR9] = VAR3[VAR5 + VAR6 * VAR9];
                    VAR3[VAR5 + VAR6 * VAR9] = VAR16;
                }
            }
            return VAR8;
        }
        for (VAR5 = 0; VAR5 < VAR9; VAR5++)
        {
            for (VAR6 = VAR5 + 1; VAR6 < VAR9; VAR6++)
            {
                double VAR17 = VAR2->VAR13[VAR6 + VAR5 * VAR9];
                double VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
                if (VAR8 < 3 && FUN2(VAR17) < VAR14 / (5 * VAR9 * VAR9))
                    continue;
                if (FUN2(VAR17) == 0.0)
                    continue;
                if (VAR8 >= 3 && FUN2((VAR4[VAR6] + VAR10[VAR6]) / VAR17) > (1LL << 32) && FUN2((VAR4[VAR5] + VAR10[VAR5]) / VAR17) > (1LL << 32))
                {
                    VAR2->VAR13[VAR6 + VAR5 * VAR9] = 0.0;
                    continue;
                }
                VAR23 = (VAR4[VAR6] + VAR10[VAR6]) - (VAR4[VAR5] + VAR10[VAR5]);
                VAR22 = 0.5 * VAR23 / VAR17;
                VAR18 = 1.0 / (FUN2(VAR22) + FUN3(1.0 + VAR22 * VAR22));
                if (VAR22 < 0.0)
                    VAR18 = -VAR18;
                VAR19 = 1.0 / FUN3(1 + VAR18 * VAR18);
                VAR20 = VAR18 * VAR19;
                VAR21 = VAR20 / (1.0 + VAR19);
                VAR10[VAR5] -= VAR18 * VAR17;
                VAR10[VAR6] += VAR18 * VAR17;
                double VAR24 = VAR25[VAR6 + VAR5 * VAR9];
                double VAR23 = VAR25[VAR26 + VAR7 * VAR9];
                VAR25[VAR6 + VAR5 * VAR9] = VAR24 - VAR20 * (VAR23 + VAR24 * VAR21);
                VAR25[VAR26 + VAR7 * VAR9] = VAR23 + VAR20 * (VAR24 - VAR23 * VAR21);
            }
            for (VAR7 = 0; VAR7 < VAR9; VAR7++)
            {
                if (VAR7 != VAR5 && VAR7 != VAR6)
                {
                    FUN4(VAR2->VAR13, FUN5(VAR7, VAR5), FUN6(VAR7, VAR5), FUN5(VAR7, VAR6), FUN6(VAR7, VAR6))
                }
                FUN4(VAR3, VAR7, VAR5, VAR7, VAR6)
            }
            VAR2->VAR13[VAR6 + VAR5 * VAR9] = 0.0;
        }
    }
    for (VAR5 = 0; VAR5 < VAR9; VAR5++)
    {
        VAR4[VAR5] += VAR10[VAR5];
        VAR10[VAR5] = 0.0;
    }
}
return -1;
}