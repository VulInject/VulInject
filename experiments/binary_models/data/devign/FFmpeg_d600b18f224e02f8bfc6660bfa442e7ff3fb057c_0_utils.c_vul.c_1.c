int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    int VAR6, VAR7;
    int64_t VAR8 = VAR4->VAR9->VAR10;
    if (VAR5 != VAR11 && VAR8 != VAR11 && VAR5 > VAR8 && VAR5 - (VAR12)VAR8 < VAR13)
    {
        double VAR14 = (FUN2(VAR5) ? VAR5 - VAR15 : VAR5) * FUN3(VAR4->VAR16);
        int64_t VAR17 = VAR5 - VAR8;
        if (!VAR4->VAR9->VAR18)
            VAR4->VAR9->VAR18 = FUN4(sizeof(VAR4->VAR9->VAR18[0]) * 2);
        if (!VAR4->VAR9->VAR18)
            return FUN5(VAR19);
        for (VAR6 = 0; VAR6 < VAR20; VAR6++)
        {
            if (VAR4->VAR9->VAR18[0][1][VAR6] < 1e10)
            {
                int VAR21 = FUN6(VAR6);
                double VAR22 = VAR14 * VAR21 / (1001 * 12);
                for (VAR7 = 0; VAR7 < 2; VAR7++)
                {
                    int64_t VAR23 = FUN7(VAR22 + VAR7 * 0.5);
                    double VAR24 = VAR22 - VAR23 + VAR7 * 0.5;
                    VAR4->VAR9->VAR18[VAR7][0][VAR6] += VAR24;
                    VAR4->VAR9->VAR18[VAR7][1][VAR6] += VAR24 * VAR24;
                }
            }
        }
        VAR4->VAR9->VAR25++;
        if (VAR4->VAR9->VAR25 % 10 == 0)
        {
            int VAR26 = VAR4->VAR9->VAR25;
            for (VAR6 = 0; VAR6 < VAR20; VAR6++)
            {
                if (VAR4->VAR9->VAR18[0][1][VAR6] < 1e10)
                {
                    double VAR27 = VAR4->VAR9->VAR18[0][0][VAR6] / VAR26;
                    double VAR28 = VAR4->VAR9->VAR18[0][1][VAR6] / VAR26 - VAR27 * VAR27;
                    double VAR29 = VAR4->VAR9->VAR18[1][0][VAR6] / VAR26;
                    double VAR30 = VAR4->VAR9->VAR18[1][1][VAR6] / VAR26 - VAR29 * VAR29;
                    if (VAR28 > 0.04 && VAR30 > 0.04)
                    {
                        VAR4->VAR9->VAR18[0][1][VAR6] = 2e10;
                        VAR4->VAR9->VAR18[1][1][VAR6] = 2e10;
                    }
                }
            }
        }
        if (VAR4->VAR9->VAR25 > 3 && FUN2(VAR5) == FUN2(VAR8))
            VAR4->VAR9->VAR31 = FUN8(VAR4->VAR9->VAR31, VAR17);
    }
    if (VAR5 != VAR11)
        VAR4->VAR9->VAR10 = VAR5;
    return 0;