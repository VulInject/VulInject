static int FUN1(VAR1 *VAR2, float **VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    float VAR9, VAR10[25];
    int VAR11, VAR12;
    VAR13 *VAR14 = &VAR2->VAR14;
    if (VAR4)
        FUN2(VAR14, 2);
    for (VAR5 = 0; VAR5 < VAR2->VAR15; VAR5++)
    {
        VAR16 *VAR17 = VAR3[VAR5];
        if (VAR2->VAR18)
        {
            if (FUN3(VAR14) < 64)
                return VAR19;
            VAR17[0] = FUN4(FUN5(VAR14, 32)) * VAR2->VAR20;
            VAR17[1] = FUN4(FUN5(VAR14, 32)) * VAR2->VAR20;
        }
        else
        {
            if (FUN3(VAR14) < 58)
                return VAR19;
            VAR17[0] = FUN6(VAR14) * VAR2->VAR20;
            VAR17[1] = FUN6(VAR14) * VAR2->VAR20;
        }
        if (FUN3(VAR14) < VAR2->VAR21 * 8)
            return VAR19;
        for (VAR6 = 0; VAR6 < VAR2->VAR21; VAR6++)
        {
            int VAR22 = FUN7(VAR14, 8);
            VAR10[VAR6] = VAR23[FUN8(VAR22, 95)];
        }
        VAR8 = 0;
        VAR9 = VAR10[0];
        VAR6 = 2;
        while (VAR6 < VAR2->VAR24)
        {
            if (VAR2->VAR18)
            {
                VAR7 = VAR6 + 16;
            }
            else
            {
                int VAR25;
                FUN9(VAR25, 1);
                if (VAR25)
                {
                    FUN9(VAR25, 4);
                    VAR7 = VAR6 + VAR26[VAR25] * 8;
                }
                else
                {
                    VAR7 = VAR6 + 8;
                }
            }
            VAR7 = FUN8(VAR7, VAR2->VAR24);
            FUN9(VAR11, 4);
            if (VAR11 == 0)
            {
                memset(VAR17 + VAR6, 0, (VAR7 - VAR6) * sizeof(*VAR17));
                VAR6 = VAR7;
                while (VAR2->VAR27[VAR8] < VAR6)
                    VAR9 = VAR10[VAR8++];
            }
            else
            {
                while (VAR6 < VAR7)
                {
                    if (VAR2->VAR27[VAR8] == VAR6)
                        VAR9 = VAR10[VAR8++];
                    FUN9(VAR12, VAR11);
                    if (VAR12)
                    {
                        int VAR25;
                        FUN9(VAR25, 1);
                        if (VAR25)
                            VAR17[VAR6] = -VAR9 * VAR12;
                        else
                            VAR17[VAR6] = VAR9 * VAR12;
                    }
                    else
                    {
                        VAR17[VAR6] = 0.0f;
                    }
                    VAR6++;
                }
            }
        }
        if (VAR28 && VAR4)
        {
            VAR17[0] /= 0.5;
            VAR2->VAR29.VAR30.FUN10(&VAR2->VAR29.VAR30, VAR17);
        }
        else if (VAR31)
            VAR2->VAR29.VAR32.FUN11(&VAR2->VAR29.VAR32, VAR17);
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR15; VAR5++)
    {
        int VAR7;
        int VAR33 = VAR2->VAR34 * VAR2->VAR15;
        if (!VAR2->VAR35)
        {
            VAR7 = VAR5;
            for (VAR6 = 0; VAR6 < VAR2->VAR34; VAR6++, VAR7 += VAR2->VAR15)
                VAR3[VAR5][VAR6] = (VAR2->VAR36[VAR5][VAR6] * (VAR33 - VAR7) + VAR3[VAR5][VAR6] * VAR7) / VAR33;
        }
        memcpy(VAR2->VAR36[VAR5], &VAR3[VAR5][VAR2->VAR24 - VAR2->VAR34], VAR2->VAR34 * sizeof(*VAR2->VAR36[VAR5]));
    }
    VAR2->VAR35 = 0;
    return 0;
}